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
        - [Json to Struct](#json-to-struct)
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

### G21. Navigate to the Content/ArnocGame/Maps directory and open Earth_G2.umap.
2. Press and Play to run the project starting in the Earth G2 view.


**Login**
* Left Mouse Button (Hold) - rotate the global Earth view.
* Right Mouse Button (Click) - select a node or link, and display its related metadata (Note: in order to click on links, the physics must be paused; see below.)
* Middle Mouse Button (Scroll) - zoom in and out.

**Snapshot Range**
* P - pause the physics and movement of the nodes and splines.
* T - toggle the visibility of the nodes and links.
* F - toggle sliders

**Snapshot Range**
* Left Mouse Button (Hold) - rotate the global Earth view.
* Right Mouse Button (Click) - select a node or link, and display its related metadata (Note: in order to click on links, the physics must be paused; see below.)
* Middle Mouse Button (Scroll) - zoom in and out.

### UE4


### Netbox
**Movement**
* W - move forward
* S - move backward
* A - move left

### Validating Responses
1. Navigate to the Content/ArnocGame/Maps directory and open Earth_G2.umap.
2. Press and Play to run the project starting in the Earth G2 view.

**Json to Struct**
* Left Mouse Button (Hold) - rotate the global Earth view.
* Right Mouse Button (Click) - select a node or link, and display its related metadata (Note: in order to click on links, the physics must be paused; see below.)
* Middle Mouse Button (Scroll) - zoom in and out.

**Finding a field**
* P - pause the physics and movement of the nodes and splines.
* T - toggle the visibility of the nodes and links.
* F - toggle sliders

## How it works

### Sending a Request
**G2 API**
1. Obtaining the Bearer Token

### Receiving a Response
**G2 Setup**
1. Setup GUI

### Parsing a Json
**Blueprint Level**
1. User Presses A to go to Abstract View

**C++ Level**
1. Set Data in BP_Abstract_Visualization from BP_Game_Instance G2 Snapshot field.

## Troubleshooting
If it is taking a long time to receive a response:
1. Try sending the request again. Sometimes the request gets stuck if the connection is slow.
2. Make sure that the URL and Json is correct with PostMan. Check that you are actually getting a response.

## Resources
VARest plugin documentation: https://docs.google.com/document/d/1MBqpK_24tVeUejG78jNS-0ciem-AptBaXOlp83iWUak/edit?usp=sharing
