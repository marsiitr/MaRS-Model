# MaRS-Model
# Abstract

Skulls that stare right at you and follow your movement. You will use image processing to detect a person and use robotic eyes to follow them.

# Team Members

<li>Yash Agrawal</li>
<li>Yash Jain</li>
<li>Ujjwal Gupta</li>
<li>Shubham Sharele</li>

# Mentors

<li>Mohit Gupta</li>
<li>Sunil Saini</li>

# Applications

It can be used as a decoration bot. That stares anyone walking in.
It can be used as a Virtual Board. Using the code As it detects a object's movement, It can be used to write on a virtual board.

# Pre-Requisites
 
 <b>Hardware:</b>
<ol>
<li>Arduino UNO</li>
<li>2	Motor Driver L298N</li>
<li>1 Servo motor MG995</li>
<li>12V DC Power Adapter</li>
<li>Jumper Wires</li>
<li>LM317T Voltage Divider</li>
<li>Resistors</li>
<li>Breadboard</li>
<li>DST</li>
<li>Hollow Circular Rod</li>
<li>Motor Mount</li>
</ol>

 <b>Software:</b>
 
•	arduino
• open-cv

# Electronic Design

Arduino

Arduino is an open source electronics prototyping platform based on flexible, easy to use hardware and software.It’s intended for artists,designers,hobbyists and anyone interested in creating interactive objects or environment.For wireless surveying bot,we used arduino product ‘Arduino UNO’ board.



# Image-processing
<b>Concept</b>

This program is capable of detecting any object according to the colour range provided ( yellow colour by default).

Other requirement to be satisfied to detect an object are-
1. It must atleast cover area equal to a circle os 10px
2. The object should be in front of camera immediately after running the python program.
3. It will by default capture only one object if multiple objects are brought in front of it. The object detected will cover the largest the area on screen.

<b>File:</b>

The Program of concern or for MaRsModel is test.py, rest of them are usefull programs that helped me for better understanding of openCV.

<b>Install:</b>

To run this program on your system:
Follow this tutorial to install openCV on your system- http://www.pyimagesearch.com/2016/10/24/ubuntu-16-04-how-to-install-opencv/ (For ubuntu 16.04)

<b>What it does:</b>

Function of this program is to store location of four points in space and perspectively transform the selected points. Movement of object can be detected by a red line vector.
After perspective transformation the recieved co-ordinate of the point will be with respect to the transformed frame.

<b>Working on test.py:</b>

To store co-ordinates for perspective transformation press ('k').Order of storing points should be in clockwise sense starting from bottom-left corner. Stored point will be simultaneously printed on the terminal. to recieve the co-ordinate of the center of the area of object press key ('C')
Again after storing all four point Another frame will appear will transformed live video, and pressing ('c') will print coresponding co-ordinate.
Press ('Q') to exit the program.

# Coordinates-mapping

</p><div><img src="https://github.com/marsiitr/MaRS-Model/blob/master/coordinate-mapping/10819098_617672011688274_589552868_n.jpg"></div></li>

# Working

Basically, the webcam sends video frames to OpenCV running on a PC. If OpenCV detects a face it will track it and calculate its center's X,Y coordinates. The coordinates are then passed on to the Arduino via a serial USB connection. The Arduino controls the movement of the webcam with the help of four servos to follow the detected light.it is an autonomous object detecting bot. It has the ability to detect the object moving in front of him. It uses Image Processing for detection of object. Motor drivers are used to control the movement of robot. Servos provide movement to head of the bot. A tiny wireless spy camera is mounted on the ceiling. live feed can be seen on the screen to which receiver is connected and tuned.

