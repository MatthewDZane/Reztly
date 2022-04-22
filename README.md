# Reztly
* This is an Unreal plugin which simplifies interacting with various Rest API within Unreal Engine 4. 
* Provides C++ function libraries, which are exposed to Blueprints to handle the G2 API, UE4, and Netbox interactions.
* Contains C++ structs to handle responses and store the data.


# Table of Contents
- [Installation](#installation)
- [How to use](#how-to-use)
    - [G2](#g2)
    - [UE4](#ue4)
    - [Netbox](#netbox)
    - [Validating Responses](#validating-responses)
    - [Working in C++](#working-in-c)
- [How it works](#how-it-works)
    - [Sending a Request](#sending-a-request)
    - [Receiving a Response](#receiving-a-response)
    - [Parsing a Json](#parsing-a-json)
- [Troubleshooting](#troubleshooting)
- [Resources](#resources)


## Installation
Note: As of now this plugin has not been published on the Unreal Marketplace. Make sure your project is closed.
1. Download this Repository. Make the main folder is still named "Reztly". 
2. Move the Reztly folder into the "Plugins" folder in your Unreal Project. If the project does not have a Plugins folder, add one. It should be on the same level as the Source and Content folders.
3. Right click the Unreal Project .uproject file and choose the "Generate Visual Studio project files" options.
4. Open the generated .sln file using an IDE of your choice and build the project.
5. Reopen your project and the plugin should be usable.

## How to Use

Note: The library functions are not limited to the following functions. These are the main functions to get started with.

### G2
**Bearer Token**

The user needs to first send a request for the G2 Bearer Token, which provides access the all of the G2 endpoints. The "Request Bearer Token" function requires  Username and Password credentials, along with the base G2 URL, without any endpoints or options. If done correctly G2 should send back a Bearer Token which will be used in the next steps. Below is a Blueprint example of a Login:

![Login Example](/Images/RequestBearerTokenExample.PNG)

**Snapshot Range**

To obtain a list of snapshots, of which each can be queried, the user needs to send a Snapshot Range Request, which requires the previously obtained Bearer Token and the G2 URL. Below is a Blueprint example of a Snapshot Range Request:

![Snapshot Range Example](/Images/RequestSnapshotRangeExample.PNG)

**Snapshot Query**

Like the previous operations, the user needs to provide the Bearer Token and the G2 URL, but in addition specifies a Snapshot ID to query for a specific snapshot. Below is a Blueprint example of a Snapshot Query:

![Snapshot Query Example](/Images/RequestSnapshotExample.PNG)

### UE4

To request the UE4 data, no information is required. Simply follow the example below:

![UE4 Request Example](/Images/RequestUE4NautilusDataExample.PNG)

### Netbox
To request Netbox's data, the user needs to provde Netbox's URL, which should include any options needed to filter any items. Below is an example:

![Netbox Query Example](/Images/RequestNetboxDataExample.PNG)

### Validating Responses
**Struct to Json**
This library provides functions which convert can convert some of the plugin's structs to Json Wrapper Object, which allows Jsons to be used in Blueprints. This also allows the Find Field Path function to be callable in Blueprints.

**Finding a field**
The Find Field Path function returns whether the given field is in the given Json. This function can also search for inner fields, period seperated, and specific array indexes, denoted with "[index]" right after the field name. In fact array fields need to have an index listed or errors may occur. 

Here is an example of Validating a Response:
![Validating Response Example](/Images/ValidatingResponseExample.PNG)

### Working in C++

**Using the Functions**

Each of the functions in the libraries are usable in both C++ and Blueprints. Using the functions in C++ is similar to Blueprints. There are two libraries, JsonParser, which is used to parse Json string in structs containing the Json data, and ReztlyLibrary, which is used to perform the Requests to the Rest APIs.Each of the functions are called statically. Ex: 

```
FString G2Token = UJsonParser::ParseBearerToken(ResponseContentString);
```

And require the same parameters as the Blueprint versions, though the Delegate parameter works a little differently in C++. 

**Delegates**

The Delegate parameter, in the above Blueprints examples, is the red parameter which connects with a red "Custom Event" node. In C++ is slightly more complicated to define and pass this "Custom Event", or "Delegate" in C++.

All of the Request functions take in an FResponseDelegate, which in ReztlyResponse.h is defined as:

```
DECLARE_DYNAMIC_DELEGATE_TwoParams(FResponseDelegate, FString,
								   ResponseContentString, bool, bWasSuccessful);
```

This means that an FResponseDelegate requires a function, which has FString ResponseContentString and bool bWasSuccessful to bind with it. 

Here is an example of C++ code.

```
AG2TopologyController Controller;
FResponseDelegate Delegate;
Delegate.BindUFunction(Controller, FName("OnBearerTokenResponse"));
URestly::RequestBearerToken(G2Username, G2Password, G2APIURL, Delegate);
```

where AG2TopologyController::OnBearerTokenResponse is defined as:

```
void OnBearerTokenResponse(FString ResponseContentString, bool bWasSuccessful);
```

## How it works

### Sending a Request
The Request Sending functions work by first constructing a Request, which involves setting the type of Request, setting Header values, and setting any Json values. Then it binds the Request as an event for when the response is received. Finally, the url is processed and the request is sent.

### Receiving a Response
In the Blueprints side a custom event is used to receive the Response. This custom event will have a FString and bool parameter.

In the C++ side, the Http module requires a Delegate with the following signature:
```
void OnResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, 
                bool bWasSuccessful);
```
Unfortunately these parameters cannot be exposed to Blueprints, so this plugin uses a ReztlyResponse object to store a user defined FResponseDelegate, which can be exposed to Blueprints, and then call the function binded to the FResponseDelegate inside the OnResponse.

So, all the Request functions in the library are binded to this generic ReztlyResponse::OnResponse function. Then inside of the OnResponse function, the content of the response, in the form of an FString, and bWasSucceessful variable is passed to the function, which is user defined, binded to the FResponseDelegate.

### Parsing a Json
**Blueprint Level**
This plugin provides Blueprint callable C++ functions, which take a Response and attempts to convert it to a struct.

**C++ Level**
Most of the Json Parsing is done in C++. Using the Json and JsonUtilities Libraries, an FString version of a Json can be parsed and converted in a struct, given that the correct struct is also provided. There are several files which simply define the structs pertaining to a certain database. It is worth noting that multi-dimensional arrays are not a valid type in Unreal, and therefore have to be parsed maunally.

## Troubleshooting
If it is taking a long time to receive a response:
1. Try sending the request again. Sometimes the request gets stuck if the connection is slow.
2. Make sure that the URL and Json is correct with PostMan. Check that you are actually getting a response.

## Resources
UE4 Delegates documentation: https://docs.unrealengine.com/4.27/en-US/ProgrammingAndScripting/ProgrammingWithCPP/UnrealArchitecture/Delegates/
