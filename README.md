# G2 API Helper
* This is an Unreal plugin which simplifies interacting with the G2 API within Unreal Engine 4. 
* Utilizes the VARest plugin as a dependency to actually send Rest Requests and receive Responses. 
* Provides C++ and Blueprint function libraries to handle the G2 API, UE4, and Netbox interaction.
* Contains C++ structs to handle responses and store the data.


# Table of Contents
- [Installation](#installation)
- [How to use](#how-to-use)
    - [G2](#g2)
        - [Login](#login)
        - [Snapshot Range](#snapshot-range)
        - [Snapshot Request](#snapshot-request)
    - [UE4](#ue4)
    - [Netbox](#netbox)
    - [Validating Responses](#validating-responses)
        - [Struct to Json](#struct-to-json)
        - [Finding a field](#finding-a-field)
- [How it works](#how-it-works)
    - [Sending a Request](#sending-a-request)
    - [Receiving a Response](#receiving-a-response)
    - [Parsing a Json](#parsing-a-json)
        - [Blueprint Level](#blueprint-level)
        - [C++ Level](#c++-level)
- [Troubleshooting](#troubleshooting)
- [Resources](#resources)


## Installation
Note: As of now this plugin has not been published on the Unreal Marketplace. Make sure your project is closed.
1. Download this Repository. Make the main folder is still named "G2APIHelper". 
2. In your Unreal Project, move the G2APIHelper folder into the "Plugins" folder. If the project does not have a Plugins folder, add on. It should be on the same level as the Source and Content folders.
3. Reopen your project and the plugin should be usable.

## How to Use

### G2
**Login**
In order to access any of the data from G2, the user needs to first send a Login Request and provide Username and Password credentials, along with the G2 URL. If done correctly G2 should send back a Bearer Token which will be used in the next steps. Below is a Blueprint example of a Login:

![Login Example](https://gitlab.nrp-nautilus.io/ar-noc/g2apihelper/-/tree/main/Images/LoginExample.PNG)

**Snapshot Range**
To obtain a list of snapshots, which can be queried, the user needs to send a Snapshot Range Request, requires the previously obtained Bearer Token and the G2 URL. Below is a Blueprint example of a Snapshot Range Request:

![Snapshot Range Example](https://gitlab.nrp-nautilus.io/ar-noc/g2apihelper/-/tree/main/Images/SnapshotRangeExample.PNG)

**Snapshot Query**
Like the previous operations, the user needs to provide the Bearer Token and the G2 URL, but in addition specifies a Snapshot ID to query for a specific snapshot. Below is a Blueprint example of a Snapshot Query:

![Snapshot Query Example](https://gitlab.nrp-nautilus.io/ar-noc/g2apihelper/-/tree/main/Images/SnapshotQueryExample.PNG)

### UE4
To request the UE4 data, no information is required. Simply follow the example below:

![UE4 Request Example](https://gitlab.nrp-nautilus.io/ar-noc/g2apihelper/-/tree/main/Images/SnapshotRequestExample.PNG)

### Netbox
To request Netbox's data, the user needs to provde Netbox's URL, which should include any options needed to filter any items. Below is an example:

![Netbox Query Example](https://gitlab.nrp-nautilus.io/ar-noc/g2apihelper/-/tree/main/Images/NetboxQueryExample.PNG)

### Validating Responses
**Struct to Json**
This library provides functions which convert can convert some of the plugin's structs to Json Wrapper Object, which allows Jsons to be used in Blueprints. This also allows the Find Field Path function to be callable in Blueprints.

**Finding a field**
The Find Field Path function returns whether the given field is in the given Json. This function can also search for inner fields, period seperated, and specific array indexes, denoted with "[index]" right after the field name. In fact array fields need to have an index listed or errors may occur. 

Here is an example of Validating a Response:
![Validating Response Example](https://gitlab.nrp-nautilus.io/ar-noc/g2apihelper/-/tree/main/Images/ValidatingResponseExample.PNG)

## How it works

### Sending a Request
The Request Sending functions work by first constructing a Request, which involves setting the type of Request, setting Header values, and setting any Json values. Then it binds the Request as an event for when the response is received. Finally, the url is processed and the request is sent.

### Receiving a Response
A custom event is used to receive the Response. Then the response can be operated on.

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
VARest plugin documentation: https://docs.google.com/document/d/1MBqpK_24tVeUejG78jNS-0ciem-AptBaXOlp83iWUak/edit?usp=sharing
