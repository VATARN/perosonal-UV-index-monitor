# **Personal UV Index Monitoring**

Explore cutting-edge Arduino and IoT project dedicated to revolutionizing sun safety. This system delivers real-time, location-specific UV index readings, bridging the gap in traditional sun protection methods. Employing a sophisticated integration of GUVA-S12SD UV sensor and M5Stick C Plus with custom Arduino software, this project signifies a leap in proactive sun safety and public health awareness. Dive into the details of our innovative solution for a sun-conscious future!

**Design**

At the core of this system is the integration of the GUVA-S12SD UV sensor with the M5Stick C Plus, a compact yet powerful combination designed to track and process UV radiation levels in real-time.

**Core Components and Functionality:**

- **GUVA-S12SD UV Sensor** : This sensor plays a crucial role in detecting UV light. It can capture varying levels of UV radiation and converting them into an analog signal. The sensor's sensitivity allows for accurate detection of UV light intensity, which is essential for calculating the UV index accurately.
- **M5Stick C Plus** : Serving as the central processing unit, the M5Stick C Plus receives the analog signals from the UV sensor. It is equipped with an Analog-to-Digital Converter (ADC) that transforms these analog signals into digital data. The M5Stick C Plus is not only responsible for processing UV data but also provides the interface for user interaction and displays the calculated UV index.

**Software Development and Data Processing:**

- **Custom Software** : A key aspect of our design is the Arduino sketch specifically for the M5Stick C Plus. This software utilizes "M5StickCPlus.h" library compatible with the device, which have been enhanced to suit our specific requirements for UV monitoring.
- **UV Index Calculation** : The software implements a dual-linear relationship model (figure below) to calculate the UV index from the processed sensor data. This approach is chosen due to its accuracy in correlating the sensor's voltage output with corresponding UV index levels.
![system](https://github.com/VATARN/perosonal-UV-index-monitor/blob/main/system.png?raw=true)
![](RackMultipart20240116-1-6x66kv_html_d7b6e6257d8fb95e.jpg)

**System Layout and Data Flow:**

![](RackMultipart20240116-1-6x66kv_html_68594b67a1632c95.png)

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

[**https://drive.google.com/file/d/1thZmcrCAvzMDPjvbjqBo4J7w9zwTQkw5/view?usp=sharing**](https://drive.google.com/file/d/1thZmcrCAvzMDPjvbjqBo4J7w9zwTQkw5/view?usp=sharing)

_ **Demo video link above showing the terminal values, followed by M5Stick C Plus and at the end it shows current UV index reported by Apple at that time.** _

![](RackMultipart20240116-1-6x66kv_html_4e58563d54c08804.png) ![](RackMultipart20240116-1-6x66kv_html_3ea0e2c992028590.jpg) ![](RackMultipart20240116-1-6x66kv_html_cbf1c2429f8aff99.png) ![](RackMultipart20240116-1-6x66kv_html_d03b259425971ca3.jpg)

![](RackMultipart20240116-1-6x66kv_html_7141cc96adbdd6a9.png) ![Picture 3](RackMultipart20240116-1-6x66kv_html_d8de21c8df655a84.gif)

_ **The above figure displays the reported UV index by Apple and displayed value at that time in the M5Stick C Plus.** _
