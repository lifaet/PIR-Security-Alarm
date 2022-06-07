# PIR Based Security Alarm

Theory: 

A passive infrared sensor detects body heat (infrared energy) by looking for changes in temperatures. This is the most-widely-used motion sensor in home security systems. When you
arm your system, this activates the motion sensors to report possible threats.

Generally, in security systems that are used in homes, shops, offices, etc., infrared or laser transmitters and receivers are used for accuracy and reliability. But these methods require a lot of
monetary investment and infrastructure support.

A simple cost effective solution for Security Systems is implemented in this project where I will
explain about a PIR(passive infrared sensor) based Security Alarm System, in which a PIR
sensor is used instead of transmitter or receiver. This saves power consumption as well as it is a
low cost implementation. PIR sensor is the short form of Passive Infrared Sensor.

How PIR motion sensor work?

In this simple DIY Project, I will show you how to design and implement a PIR(passive infrared
sensor) Sensor based Security Alarm System. I have designed this circuit using PIR motion
sensor and arduino controller. Additionally, I have used D8050 transistor, which is a is
amplify the signal, to produce the necessary Alarm sound through a Speaker. I also use LED module and police siren module.


Require component for this project:

o	Arduino Microcontroller

o	PIR Motion Sensor

o	Buzzer

o	9V Battery

o	Battery cap

o	Switch

o	Connecting wires

o	8050 transistor

o	Light effect module

Setting up environment:

•	At first, I gather all the component for this project and draw a circuit diagram

•	Then, I connect all the component to Arduino uno microcontroller following by the circuit diagram.

•	Then, I write the code following by the function of my project on Arduino IDE.

•	After that, I upload the code in Arduino uno controller. 

•	Since, All the component are in place and code are running, now the system should work properly as expected.

Processing:
1.	Make the connections as per the circuit diagram and switch on the circuit.
2.	The PIR sensor is powered and it detects the IR rays emitted from any human.
3.	This PIR sensor has a range of 5 meters. You can adjust the pot provided for the sensor to vary this distance.
4.	When any human is detected, the PIR sensor outputs a logic HIGH value i.e. 
5.	Arduino Microcontroller take that value and when the value is high it trigger the output alarm and read light by the instruction.
6.	Thus sound produced can be heard from the speaker when human is detected.
7.	This process are working based on program I put program into the microcontroller. 


Result: 
When the Motion sensor detect some motion or activities ,it will send a signal to the microcontroller  and the controller trigger alarm function and alarm will start.
So, that was the over all functionality of this project. It will help to detect unusual activity on some restrict place, it can be used in homes, shops, offices and everywhere else where we need to monitor unusual activities. 
I also try to improve this project by make it faster, simple and try to make it easier to use and control the system.
