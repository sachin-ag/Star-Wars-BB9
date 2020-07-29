# Star-Wars-BB9
Srishti 2020

<p align="center">
  <img width="450" height="550" src="https://github.com/Kritin02/Star-Wars-BB9/blob/master/Images%20and%20Videos/Images/Interior.jpeg?raw=true">
</p>

## Abstract
<p align="justify">
The droid should replicate BB-8 from the Star Wars franchise complete with a rotating body but a stationary head.The movement of the droid can be controlled by a companion app. The body can rotate freely and can be moved in all direction freely using the app.The head is established by using strong Neodymium magnets and ball casters.
</p>


## Motivation
<p align="justify>
After watching the BB-8 from Star Wars, we were interested in its working and mechanism. As the newbies, out of curiosity we choose to work on the same.
          </p>

## Components Used
### Mechanical:

|       Component      |                         Size                        | Quantity |
|:--------------------:|:---------------------------------------------------:|:--------:|
| Neobium magnets      |                      Dia- 4mm                       |    18    |
|     Nut and Bolt     |                       4mm dia                       |    20    |
|     L - Brackets     |                       Standard                      |     2    |
|     Motor Mount      |                      Dia-3.6cm                      |     2    |
|     Castor Wheel     |                        Small                        |     3    |
|       Plywood 1      |                  Dia-24cm, t=0.5cm                  |     8    |
|       Plywood 2      |                  Dia-11.5cm,t-0.5cm                 |     4    |
|      Globe           |                      Dia- 30cm                      |     1    |  
|      Pipe            |                  Dia-2cm,L-7cm                      |     1    |
|      Wheels          |                        Dia-7.2cm                    |     2    |

### Electronics
* 1 X Arduino Uno
* 3 X L298(Motor Driver)
* 2 X 60rpm DC motors
* 2 X 12V Li-polymer Batteries
* Jumpers

## Flowchart
<img src="https://i.imgur.com/RjfrX5S.png">

## Mechanical of the Design

<img src="https://i.imgur.com/qcsFnyt.jpg">
<br>
<img src="https://i.imgur.com/UicXnEk.jpg">
<br>
<img src="https://i.imgur.com/5NZ9BF9.png">
<br>

### The Inner Mechanism:

#### Plywood:
<p align="justify">
Two plywood downward and upward having dimensions 24cm*0.5cm and 11.5cm*0.5cm were used respectively. The downward plywood was used to mount Motor, battery, motor drivers, arduino and pipe. The upper plywood was used mount magnets.
</p>

#### Pipes:
<p align="justify">
A steel pipe having diameter 2cm and length 7cm was used in order to connect downward and upward plywood. It was connected to plywood with the help of l-brackets having standard size.
  </p>

### Outer Surface:
<p align="justify">
The above picture denotes the assembled part of inner mechanism and outer surface. As the BB9e Droid is spherical in shape we chose a globe of diameter 30 cm. It was made up of ABS plastic which was easy to handle.
  </p>

### Head:
<p align="justify">
The head was made via a 3D printer using a CAD model as shown above. It had a platform for placing magnets, castors and camera.
  </p>

### Castors:
<p align="justify">
Castors acted have a point of contact between sphere and the head. We used small size castors and place them conferring to CAD design.
  </p>

### Wheels:
<p align="justify">
2 Wheels of diameter 7.02cm were used. They acted as a point of contact between the outer surface and the head.
  </p>

### Magnets:
<p align="justify">
The imperative task is to hold the head over the outer surface. The job was done by 18 strong neodymium magnets having diameter 2cm each. The head consisted of 6 magnets in a set 3 and the upper plywood consisted of 12 magnets in a set of 3. The strong magnetic force between them helped to hold the head over the outer surface.
  </p>

## Electronics Aspect of the Design

### Micro-Controller
<p align="justify">
The microcontroller of the bot is the brain of the bot. Each function and maneuverer of the bot is controlled by a microcontroller. It also helps the bot take decisions and decides the further course of action. We have used Arduino Mega microcontroller board which depends on AT Mega microcontroller. It includes digital input/output pins-54, where 16 pins are analogue inputs, 14 are used like PWM outputs hardware serial ports (UARTs) – 4, a crystal oscillator-16 MHz, an ICSP header, a power jack, a USB connection, as well as a RST button. This board mainly includes everything which  is essential for supporting the microcontroller. So, the power supply of this board can be done by connecting it to a PC using a USB cable, or battery or an AC-DC adapter.
  </p>
### Motor Driver
  <p align="justify">
The DC motors used in the bot are being controlled by the microcontroller through a motor driver. A motor driver enables the Arduino to control over the speed, direction and PWM of the motors. The model of the motor-driver we used is L298. This motor-driver can control 2 DC motors at the same time.
  </p>
### Bluetooth Module
    <p align="justify">
To control our bot, we need to send and receive information wirelessly. To command our bot, we used HC-05 Bluetooth Module which receives our command from our companion app. This module used to connect the microcontroller from our phone from which we are sending commands to work accordingly.
</p>
### DC-motors
      <p align="justify">
The electric motor operated by direct current (DC) is called DC motor. This is a device that converts DC electrical energy into mechanical energy. This type of motor comes in different rantings of Torques and RPM (maximumRotation per minute) In this project, we used a 60 rpm DC metal geared motor.
</p>
### Mobile App
        <p align="justify">
We control our bot with a mobile application which is connected to it, through Bluetooth. As you can see, on the 2nd page, at the top right, tap on the Bluetooth logo enables to connect the bot to it and in the middle, four-direction buttons send a unique code to the microcontroller, which interprets and process it and our bot works accordingly.
</p>

### Electrical Connections

<img src="https://i.ytimg.com/vi/Tiz3pcnw8FE/maxresdefault.jpg">

## Cost Structure

| Part                     | Quantity | Cost per unit | Total cost |
|--------------------------|:--------:|:-------------:|-----------:|
| Arduino Uno              |      1   |        449    |       449  |
| L298  (Motor Driver)     |      3   |        250    |       750  |
| 60rpm DC Motor(12V)      |      2   |        274    |       574  |
| 12V Li-polymer Battery   |      2   |       2000    |       4000 |
| Jumpers                  |     60   |         5     |        300 |
| Nut & Bolt               |     20   |         5     |        100 |
| L - Brackets             |      2   |        15     |         30 |
| Globe                    |      1   |        625    |        625 |
| Castor Wheels            |      3   |         45    |        135 |
| PlyWood                  |      1   |        280    |        280 |
| Neodymium magnets Steel  |      18  |        25     |        450 |
| HC05 Bluetooth Module    |      1   |       320     |        320 |   
| Miscellaneous            |      -   |          -    |        250 |
| Total                    |          |               |  Rs.8263/- |

## Applications
Potential applications of BB9 are many. To list the few:*
* Could be used to guide people along the desired path or in a maze. 
* BB9 can be used in to read number plate of moving vehicles.
*	The bot is made to move silently so that it can be used in surveillance.
*	The droid can also be used to record, store, and transmit messages in the form of holograms.

## Limitations
* Delay in complex movements during motion.
* Due to use of Neodymium magnets, the head may not be perfectly stable.
* Could not be controlled outside device's bluetooth range.
* Uneven shape of globe will result in uneven motion of bot.

## Future Improvement
* Could use camera on the head for survelliance.
* Providing more sensors to prevent collision.
* Use of PID, to improve the movement of the bot.
* Could use advancedment in app to move the bot in desired shapes.
* Use of GPS instead, to increase movement precision and to reach their destination.    

## Team Members
1. <a href="https://github.com/Kritin02/">Kritin Agrawal</a>
2. <a href="https://github.com/kushBansal/">Kush Bansal</a>
3. <a href="https://github.com/RUTHIK-DROID0909">Ruthik Jadhav</a>
4. <a href="https://github.com/sachin-ag">Sachin Agrawal</a>
5.  <a href="https://github.com/VaibhavAgg2001">Vaibhav Aggarwal</a>

## Mentors
1. <a href="https://github.com/shubham491981/">Shubham Goyal</a> 
2. <a href="https://github.com/Simran-A1">Simran Bajoliya</a>

## References
* OpenCV Python Tutorial For Beginners - https://www.youtube.com/playlist?list=PLS1QulWo1RIa7D1O6skqDQ-JZ1GGHKK-K
* Mechanism reference-https://howbb8works.com/
* Pyimagesearch - https://pyimagesearch.com/
* Arduino - https://www.arduino.cc/
