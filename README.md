# Building-a-Timepiece
Conventional methods of displaying images are by using LCD display or LED board. Propeller display is a special type of circular display that project an image as if the images are floating in the air. This project was started with a simple principle which is frequently happening in our day today life, which is Persistence of Vision (POV). Whenever the light from an image strikes on the retina, the eye retains the impression of that light for a particular fraction of seconds (1/16th) depending on the brightness of the image even after the image has been removed from the human sight. Most of the existing LED displays consumes large amount of energy due to more number of LEDs used. In the present work virtual displays are used in order to reduce the number of LEDs. The propeller is subjected to rotate above 1000rpm to obtain virtual display.

# Chapter 01: Introduction
**1.1. Introduction**

Propeller is a term associated with circular rotating objects. Conventional methods of displaying images are mainly using LCD display and dot-matrix where a huge number of LED's and power processors are used to create the display. The main idea of this project is to use minimum number of LED's and components to create a virtual display with minimum power consumption. For the purpose of displaying a set of LED's have been used, hence the name Propeller LED display. The main advantage of propeller display as compared to the LED matrix board is its lower power consumption. The first propeller clock was created by Bob Blick, where a single array of LED’s was used to produce the display. Propeller clock uses extremely small LED's for displaying the typescript and symbols on its assembly in an appropriate way. The main mechanism behind virtual display is the phenomenon of Persistence of vision (POV). The phenomenon is related to vision capability of human eye by which an after image is thought to persist for approximately 1/25th of a second. So, if someone is observing the images at a rate of 25 images per second, then they appear to be continuous. Existing systems do employ POV principle, but for displaying each pixel, individual LED is used . This results in a huge number of LED's even for small sized displays. By using a propeller type display, LED count can be kept minimum. The LED's are attached to a rotating board. They turn ON and OFF at very definite and precise time intervals. All we can see are the lighted dots from the LED's making a readable display that seems to float. In the project an array of LED's, micro-controller and infrared receiver are placed on the board and are rotated by a motor at a very high rpm. The prototyping board itself is used as the propeller to minimize the weight and parts used for the propeller LED display. Applications can find their way into cost effective solutions for large public displays, information systems. It can directly replace Railway station information displays, bus stands and many more places.

**1.2. Background**

A Propeller based display is display that works on phenomenon of persistence of vision. Persistence of vision is what makes discrete images incident on a human eye and changing at a rate of almost one-sixteenth of a second appears to be an image collective of all the individual images. This concept has been used in this project to demonstrate a live clock that displays Time in the format of HH:MM:SS. For making it more robust System, the system has instantaneous time change capability as per the users input to give correct time information as per the users demands.

Digital Propeller clock is built around ATmega family micro-controller. The System has a high RPM motor which makes the system rotate. The LED's arranged in a row across the PCB turn ON and OFF at specific intervals when the system rotates to produce image of a character on the eye of the human watching it.This makes the observer believe that he/she is watching a digital clock that has few LED's lit for each of the digit displayed in the clock.This System can prove to be very useful in various scenarios where the user wants propeller based display that consumes less space,less electricity and also in synchronicity with the users choice of time.Hence, the propeller clock is a useful project to demonstrate the advanced techniques of display using vision of persistence.

**1.3. Project Objectives**

⚫ To design a propeller LED pendulum clock with Arduino and IR remote control transmitter.

⚫ To show accurate time with mode conversion.

⚫ To make the system Light Weight, Cost effective, Efficient and Compact.

⚫ To make the design user friendly.

**1.4. Scope**

⚫ With the help of propeller led display we can display any information like-Name and Title.

⚫ We can make 3-Dimensional version of its display.

⚫ This device can be modifying as a computer based display board. A wireless system can be used to communicate between the PC and the device. This would let the user to display any message easily on propeller display.

⚫ The project can be made more compact with effective arrangement of all the components.

**1.5. Project Management**

![image](https://github.com/user-attachments/assets/e3245acc-753a-48ff-90cf-205ca5ccc8c3)

Figure 1. Model of phases in project management.

**1.6. Overview and Benefits**

⚫ Hardware requirement is very less and hence overall cost is cut to very affordable price.

⚫ Maintenance and repairing of the display is so easy, that anyone having a little electronics knowledge, can take care of this.

⚫ Low power consumption.

⚫ If we use cylindrical type, the message can be viewed in 360 degrees from all sides.

⚫ Applications can find their way into cost effective solutions for large public displays, information systems. It can directly replace Railway station information displays, bus stands and many more places.

**1.7. Organization of the Report**

The report is organized into the following chapters. Each chapter is unique on its own and is described with necessary theory to comprehend it.
Chapter 2 deals with background survey and review, Chapter 3 has the description of the theoretical aspects that has been acquired to commence the project work.

# Chapter 02: Background Review & Survey
**2.1. Related Works**

Propeller is a term connected with a rotating object: motor or pump, and is used in this project. Propeller rotates a set of light-emitting diodes for displaying numbers, characters and symbols in a rotating manner that’s the reason why it is termed as a Propeller LED Display. The rotating LED displays can be cylindrical or disc shaped. The cylindrical displays are capable of displaying texts and digits, and the disc-shaped displays are capable of displaying analog clock. A Propeller display is a mechanically-scanned device that displays its characters in a digital format. This project is designed to display a message by using virtual LEDs. In this project, we are using a set of LEDs instead of bulk of LEDs because these are connected in multiplexing mode. This working of LED Display involves three circuits, viz. motor driver circuit, wireless power-transfer circuit and propeller-display circuits. In a motor-driver circuit, the power from the AC mains is stepped down to a range by a step down transformer. Because it is a DC motor, the AC voltage is converted into DC using a bridge-rectifier circuit, and then it is regulated to a motor voltage. Supplying power to moving objects is not a simple task, therefore, in this project, a wireless -power transmission is to used supply the power to the control circuit, which is a moving object. For transferring the power wirelessly to some distance, the supply frequency must be increased to a certain extent. Propeller is a term associated with circular rotating objects. Conventional methods of displaying images are mainly using LCD display and dot-matrix where a huge number of LED's and power processors are used to create the display. The main idea of this project is to use minimum number of LED's and components to create a virtual display with minimum power consumption. For the purpose of displaying a set of LED's have been used, hence the name Propeller LED display. The main advantage of propeller display as compared to the LED matrix board is its lower power consumption. The first propeller clock was created by Bob Blick, where a single array of LED’s was used to produce the display. Propeller clock uses extremely small LED's for displaying the typescript and symbols on its assembly in an appropriate way. The main mechanism behind virtual display is the phenomenon of Persistence of vision (POV). The phenomenon is related to vision capability of human eye by which an after image is thought to persist for approximately 1/25th of a second. So, if someone is observing the images at a rate of 25 images per second, then they appear to be continuous. Existing systems do employ POV principle, but for displaying each pixel, individual LED is used [1]. This results in a huge number of LEDs even for small sized displays. By using a propeller type display, LED count can be kept minimum. The LED's are attached to a rotating board. They turn ON and OFF at very definite and precise time intervals. All we can see are the lighted dots from the LED's making a readable display that seems to float [2]. In the project an array of LED's, microcontroller and infrared receiver are placed on the board and are rotated by a motor at a very high rpm. The prototyping board itself is used as the propeller to minimize the weight and parts used for the propeller LED display. Applications can find their way into cost effective solutions for large public displays, information systems. It can directly replace Railway station information displays, bus stands and many more places.

# Chapter 03: Theoretical Aspects
The main objective of this project is to create a non-existing display of low power consumption with bare minimum components and at minimum cost. It consists mainly of a set of LEDs, a micro-controller to synchronize the switching on and off of the LEDs at precise time intervals and a motor that will spin the LEDs at a high speed.

**3.1. Propeller LED Display**

Propeller is a term connected with a rotating object: motor or pump, and is used in this project. Propeller rotates a set of light-emitting diodes for displaying numbers, characters and symbols in a rotating manner that’s the reason why it is termed as a Propeller LED Display.

**3.2. Features of Propeller LED Pendulum Clock**

a) To show accurate time with mode conversion

b) Light Weight

c) Cost Effective

**3.3. Advantages of Propeller LED Pendulum Clock**

a) Hardware requirement is very less and hence overall cost is cut to very affordable price

b) Maintenance and repairing of the display is so easy, that anyone having a little electronics knowledge, can take care of this.

c) Low power consumption.

**3.4. Disadvantages of Propeller LED Pendulum Clock**

a) Wiring on the PCB board.

b) Selecting the right RPM to get the POV effect.

c) Balancing the weight on the PCB board to get smooth rotations.

d) Integrating various Sensors.

e) Finding solutions to the errors in Arduino IDE.

**3.5. Application areas of Propeller LED Pendulum Clock**

Applications can find their way into cost effective solutions for large public displays, information systems. It can directly replace Railway station information displays, bus stands and many more places. And also

● For advertisements

● Display message on wheels

**3.6. Project Layout**

![image](https://github.com/user-attachments/assets/79c49ad1-987c-4ff5-90cf-78663b8e554e)

Figure 2. Layout of project module

*3.6.1. Brief Description*

In project layout we have two parts:

  • Hardware module

  • Software module

In hardware module we have 4 parts:

  • DC Motor

  • IR Sensor

  • Hall Sensor

  • Arduino NANO board

It describes what are the main hardware components in this project which can be performed practically. We need Hall Sensors to count the rotations, DC motor for the rotation of the propeller. Arduino Nano is a microcontroller which helps to control the system.

In software module we need only:
  
  • Arduino IDE
  
For designing the Propeller and how to implement and to what implement we logically written the code in the Arduino IDE and uploaded it on the board.

# Chapter 04: Hardware Requirements

**4.1. Arduino Nano**

The Arduino Nano is a small, complete, and breadboard-friendly board based on the ATmega328 (Arduino Nano 3.x). It has more or less the same functionality of the Arduino Duemilanove, but in a different package. It lacks only a DC power jack, and works with a Mini-B USB cable instead of a standard one.

*4.1.1. Features*

Microcontroller          -  ATmega328

Architecture             -  AVR 

Operating Voltage        -  5 V

Flash Memory             -  32 KB of which 2 KB used by bootloader 

SRAM                     -  2 KB

Clock Speed              -  16 MHz 

Analog IN Pins           -  8

EEPROM                   -  1 KB

DC Current per I/O Pins  -  40 mA (I/O Pins)

Input Voltage            -  7-12V 

Digital I/O Pins         -  22 (6 of which are PWM)

PWM Output               -  6 

Power Consumption        -  19 mA

PCB Size                 -  18 x 45 mm Weight 7 g

Product Code             -  A000005

*4.1.2. Pin Configuration*

![image](https://github.com/user-attachments/assets/f9f569e3-88d4-47b9-b21a-179aea0caa67)

**4.2. IR SENSOR(TSOP)**

The TSOP18.. – series are miniaturized receivers for infrared remote control systems. PIN diode and Pre amplifier are assembled on lead frame, the epoxy package is designed as IR filter.The demodulated output signal can directly be decoded by a microprocessor. The main benefit is the reliable function even in disturbed ambient and the protection against uncontrolled output pulses.

*4.2.1. Features :*

⚫ Photo detector and preamplifier in one package

⚫ Internal filter for PCM frequency

⚫ TTL and CMOS compatibility

⚫ Output active low

⚫ Improved shielding against electrical field disturbance

⚫ Suitable burst length>=6 cycles/burst

*4.2.2. Pin Configuration*

![image](https://github.com/user-attachments/assets/4d52ac21-200b-4f78-82de-069cf435ae27)

TSOP is just an IR receiver which acts as a switch. It has only three pins that connect TSOP with other devices and make it useful for wireless communication.

GND: The ground pin is only to make common ground with other devices, especially micro-controllers and ICs. 

VSS: It is a power input pin for activating the internal decoder and IR receiver. The power should be according to its specification and should be only at power pin. In case of power input on any pin even if its low the IC will start heat up which can be noticed by touching it. In the end, heating will damage the TSOP. 

Output: The data will come out in the form of the pulse from the output pin. The output pin can be interfaced with any TTL/CMOS devices with a little resistance. Output data will be in voltage form, from the TSOP.


**4.3 Hall Sensor**

*Features:*
⚫ Operates from 2.4V to 26V supply voltage with reverse voltage protection Operates with magnetic fields from DC to 15kHz

⚫ On-chip Hall Sensor

⚫ On-chip temperature compensation circuitry minimizes shifts in on and off points and hysteresis over temperature and supply voltage

⚫ Ideal sensor for speed measurement, revolution counting, positioning, and DC brushless motors

*Specifications :*

⚫ Switching type: latch or non-latch type (S pole)

⚫ Latch: On(L) with magnetic South pole and Off (H) with North pole

⚫ Non-Latch: On (L) with magnetic South pole and Off(H) without magnetic field

*Functional Description :*

WSH130 is designed to integrate Hall sensor with output driver together on the same chip, it is suitable for speed measurement, revolution counting, positioning, and DC brushless motors. It includes a temperature compensated voltage regulator, a differential amplifier, a Hysteresis controller and a open-collector output driver capable of sinking up to 20mA current load. An on-chip protection resistor is implemented to prevent reverse power fault.

The temperature-dependent bias increases the supply voltage of the hall plates and adjusts the switching points to the decreasing induction of magnets at higher temperatures. Subsequently, the open collector output switches to the appropriate state. WSH130 are rated for operation over temperature range from –40˚ C to 125 ˚C and voltage ranges from 2.4V to 26V.

*Pin Description:*

Name  |  P/I/O  |  Pin#  |  Description

Vdd   |    P    |    1   |  Positive Power Supply

Gnd   |    O    |    2   |  Ground

Vout  |    O    |    3   |  Output Pin

**4.4 Block diagram of the proposed system**

![image](https://github.com/user-attachments/assets/5650256a-a467-4af2-ad67-18a8a47edcb9)

*4.4.1 Working of the system*

In mechanical assembly, on one side of the PCB board the LEDs are connected and the micro-controller on the other side. Using a DC motor the whole circuit assembly is rotated and on each rotation the display is scanned. An on board battery is placed on one side of the propeller to power the LEDs and this can also use as a counter balance. The micro-controller is mainly responsible for the fast switching of LEDs.

The LEDs are mechanically scanned from left to right and each column is lit up according to the matrix being displayed
*4.4.2 Circuit Diagram*

![image](https://github.com/user-attachments/assets/407fdecf-dc98-4d1f-92c1-17567128956a)

# Chapter 05: Software Requirements
**5.1 Arduino IDE (Embedded C / C++) :**

The Arduino IDE is an open-source software, which is used to write and upload code to the Arduino boards. The IDE application is suitable for different operating systems such as Windows, Mac OS X, and Linux. It supports the programming languages C and C++. Here, IDE stands for Integrated Development Environment.

**5.2 Logic and Flowchart :**

![image](https://github.com/user-attachments/assets/6160e19c-53c4-4f37-afa6-746dba219f23)

# Chapter 06: Project development & Testing Aspects

STEP 1: Assembling of the Components

![image](https://github.com/user-attachments/assets/3f4ffe3a-28f5-4407-b9eb-ace9cb50843d)

STEP 2: Soldering of the Components into the PCB board

![image](https://github.com/user-attachments/assets/d33a1660-4a2c-4a38-93d0-3f91b71a1d51)
![image](https://github.com/user-attachments/assets/93db0077-0689-45d2-ba68-cd7a32b04c02)
![image](https://github.com/user-attachments/assets/483af311-7e02-4dd5-87fe-88f1a297f5e6)

STEP 3: Final Packaging of the Project

![image](https://github.com/user-attachments/assets/54567790-9156-421b-b89e-ff41481b02bb)

# Chapter 07: Conclusion & Future Scope
**7.1. Result**

In this project we have used minimum number of LED's and components to create a virtual display with minimum power consumption. When the switch is turned on power supply from the battery is given to the LED's that are attached to a rotating PCB board which turn ON and OFF at very definite and precise time intervals and we can see the lighted dots from the LED's making a readable time display that seems to float.

**7.2. Conclusion**

In conclusion, this project really demonstrated competence combining a difficult integration of the mechanical and electrical systems to build a persistence of vision display. The propeller should be built as lighter as possible to make it more stable. It matters to a faster rotation of propeller.The Propeller LED display is used to create virtual display. It gives clear display by using bright light LED's. Many aspects in terms of cost, power requirement, hardware requirements, ease of use, maintenance were considered. And if the assembly is balanced perfectly with having good mechanical strength, then it can achieve stability, and rotate at maximum RPM.

Application can find their way into cost effective solutions for large public displays, information systems. It can directly replace Railway station information displays, bus stands and many more places. By efficient coding we can make the display to show 3D images, digital and analogue time also.This project also has so much room to explore further exciting developments and additions to the many devices with which it could interface.

**7.3. Limitations**

DC motors selection: DC motor having high torque should be selected.

RPM: The main challenge of this project is to select the right RPM of the DC motor and to control it effectively. If the appropriate RPM is not set then we will not get the effect of POV as a result of which the display will be distorted.

Weight of the propeller: The weight of propeller should be balanced and light to make it more stable and to get faster rotations.

Soldering: Soldering of components into PCB board should be perfect as the propeller is rotated at high RPM.

It is very much difficult to attach the propeller to the rotating end of the DC motor. We have used every kind adhesive available in the market to stick them but when the power supply is given to the DC motor the propeller is thrown out tangentially in the direction of the circular motion due to high RPM. So, we have used nuts and bolts to fix them.

**7.4. Further Enhancement and Future Scope**

⚫ With the help of propeller led display we can display any information like-Name and Title.

⚫ We can make 3-Dimensional version of its display.

⚫ This device can be modifying as a computer based display board. A wireless system can be used to communicate between the PC and the device. This would let the user to display any message easily on propeller display.

⚫ The project can be made more compact with effective arrangement of all the components.

⚫ It gives time and date with 100% accuracy.

⚫ Once developed at a large scale and with multi colour LED's, it can be used to replace LCD Screens.

⚫ This project explains about a basic principle of persistence of vision using simple low cost circuit.

# Chapter 08: References

https://www.youtube.com/watch?v=mqAh5nV1zAw

https://www.youtube.com/watch?v=ysXYCxyRvkY&t=126s

https://www.instructables.com/LED-Propeller-Clock/

http://fabacademy.org/2021/labs/khairpur/students/rashid-ali/project.html






