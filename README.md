# FogML-Zephyr-LwM2M
The application is the result of research conducted jointly with the [AVSystem](https://www.avsystem.com/) company. It demonstrates how network connectivity can be provided for intelligent IoT devices incorporating TinyML algorithms running on resource limited microcontrollers. The resource constraints also apply to network communication which is often enabled by Low-Power WAN (LPWAN) networks such as NB-IoT. In order to use efficiently the properties of such a low-power communication channel in real large-scale systems, several requirements should be met including UDP instead of TCP transport and binary serialization of the data. These requirements are fulfilled by the [LwM2M](https://omaspecworks.org/what-is-oma-specworks/iot/lightweight-m2m-lwm2m/) protocol. It enables also service enablement, device management and FOTA for the fleet of IoT devices. 

In the application, we show how the Data Model of the LwM2M protocol can be used to expose the inference results of TinyML algorithms running on IoT devices connected to the network by NB-IoT technology. 

The application is an extended version of the FogML example for ZephyrOS and is based on the following projects:
* `FogML-Zephyr` [https://github.com/tszydlo/FogML-Zephyr]
* `Anjay-Zephyr-Client` [https://github.com/AVSystem/Anjay-zephyr-client]

Therefore, the data preparation process is the same as in the first project and the steps necessary to connect to the LwM2M server as in the second one.

The demo application that uses EdgeImpulse SDK instead of FogML is in the LwM2M Anjay Client repository:
* `Anjay-Zephyr-Client/ei_demo` [https://github.com/AVSystem/Anjay-zephyr-client/tree/master/ei_demo]

# Supported hardware

The application is designed for Thingy:91 device:
 - [thingy91_nrf9160_ns](https://developer.nordicsemi.com/nRF_Connect_SDK/doc/latest/nrf/ug_thingy91.html)

Thingy:91 integrates an nRF9160 SiP that supports LTE-M and NB-IoT connectivity.

# Pattern Detector Object
The general idea is presented in the figure.

![Pattern Detection object](./doc/pattern_detector_object.png)

Pattern Detector (/33650) object definition is in file [pattern_detector.xml](pattern_detector.xml). Application creates as many object instances as the number of classes it is able to identify. In the example, device is able to detect four movement patterns - `idle`, `circle`, `snake` and `up-down`. Whenever the movement pattern is detected, the appropriate object instance of the LwM2M Data Model on the device is updated.

![Pattern Detection object](./doc/id33650.png)

To sum up, the following LwM2M Objects are supported:
 - Security (/0)
 - Server (/1)
 - Device (/3)
 - Pattern Detector (/33650)

Firmware object is not implemented in the application, but is supported by the Anjay LwM2M client library.

# Building the project

The project can be built as in the Anjay client description. Alternatively, the default SDK installed with the nRF Connect utility can be modified to use Anjay LwM2M client. To do this, edit the file `[default_sdk_folder]/ncs/v2.0.0/nrf/west.yml` by adding:
```
  - name: Anjay-zephyr
    submodules: true
    remote: anjay
    revision: 67fd6bfe7846d449ce9a881152bde3a88aa7af4a
    path: modules/lib/anjay
```
and
```
  - name: anjay
    url-base: https://github.com/AVSystem    
```

Then, according to
https://nrfconnect.github.io/vscode-nrf-connect/connect/west.html :

```
To update a west workspace:

    Open the Command Palette and type nRF Connect: West Update
    Choose the location of your project repository and west begins to update.
```

## Connecting to the LwM2M Server

To connect to [Coiote IoT Device
Management](https://www.avsystem.com/products/coiote-iot-device-management-platform/)
LwM2M Server follow the instructions in Anjay-Zephyr-Client.

NOTE: You may use any LwM2M Server compliant with LwM2M 1.0 TS, however the LwM2M Pattern Detector object definition is already deployed in the Coiote Server. 

# Summary
The application shows how network connectivity can be added to TinyML algorithms deployed on IoT devices. Moreover, the LwM2M protocol enables remote firmware updates for IoT devices, which can be used for updating machine learning algorithms. We are currently working on anomaly detection and MLOps LwM2M objects for scaling TinyML to millions of devices.
