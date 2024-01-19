# **Personal UV Index Monitoring**

Explore cutting-edge Arduino IoT project dedicated to revolutionizing sun safety. This system delivers real-time, location-specific UV index readings, bridging the gap in traditional sun protection methods. Employing a sophisticated integration of GUVA-S12SD UV sensor and M5Stick C Plus with custom Arduino software, this project signifies a leap in proactive sun safety and public health awareness. Dive into the details of our innovative solution for a sun-conscious future!

**Design**

At the core of this system is the integration of the GUVA-S12SD UV sensor with the M5Stick C Plus, a compact yet powerful combination designed to track and process UV radiation levels in real time.

**Core Components and Functionality:**

- **GUVA-S12SD UV Sensor** : This sensor plays a crucial role in detecting UV light. It can capture varying levels of UV radiation and converting them into an analog signal. The sensor's sensitivity allows for accurate detection of UV light intensity, which is essential for calculating the UV index accurately.
- **M5Stick C Plus** : Serving as the central processing unit, the M5Stick C Plus receives the analog signals from the UV sensor. It is equipped with an Analog-to-Digital Converter (ADC) that transforms these analog signals into digital data. The M5Stick C Plus is not only responsible for processing UV data but also provides the interface for user interaction and displays the calculated UV index.

**Software Development and Data Processing:**

- **Custom Software** : A key aspect of our design is the Arduino sketch specifically for the M5Stick C Plus. This software utilizes "M5StickCPlus.h" library compatible with the device, which have been enhanced to suit our specific requirements for UV monitoring.
- **UV Index Calculation** : The software implements a dual-linear relationship model (figure below) to calculate the UV index from the processed sensor data. This approach is chosen due to its accuracy in correlating the sensor's voltage output with corresponding UV index levels.


**System Layout and Data Flow:**

![system](https://github.com/VATARN/personal-UV-index-monitor/blob/main/system.png?raw=true)

1. UV Light Detection:

- The GUVA-S12SD UV Sensor, attached to the M5StickC Plus, actively measures UV radiation levels in the environment.
- This measurement is conducted in real time, continuously updating to reflect the current UV intensity.

2. Analog Signal Transmission:

- The UV Sensor transmits analog signals proportional to the detected UV radiation levels.
- These signals represent the intensity of the UV light, varying in voltage.

3. Analog-to-Digital Conversion (ADC):

- The M5StickC Plus converts the analog signals from the UV sensor into digital signals.
- This conversion is essential for the digital processing of the UV data.

4. UV Index Calculation:

- The M5StickC Plus processes the digital data and calculates the UV index.
- The calculation is based on the intensity of the UV radiation (from the sensor data)

**Section 4: Demonstration**

![Example1.1](https://github.com/VATARN/personal-UV-index-monitor/blob/main/01.png?raw=true)![Example1.1](https://github.com/VATARN/personal-UV-index-monitor/blob/main/02.jpg?raw=true) 
![Example2.1](https://github.com/VATARN/personal-UV-index-monitor/blob/main/11.png?raw=true)![Example2.1](https://github.com/VATARN/personal-UV-index-monitor/blob/main/12.jpg?raw=true) 
![Example3.1](https://github.com/VATARN/personal-UV-index-monitor/blob/main/31.png?raw=true)![Example3.1](https://github.com/VATARN/personal-UV-index-monitor/blob/main/32.jpg?raw=true) 

_ **The above figure displays the reported UV index by Apple and displayed value at that time in the M5Stick C Plus.** _
