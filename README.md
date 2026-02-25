Smart Presence Detection System (Edge AI Interface)
Project Overview
Yeh project aik high-precision distance monitoring system hai jo Arduino Uno aur Ultrasonic Sensor (HC-SR04) ka istemal karta hai. System real-time mein human presence detect karke automated visual feedback provide karta hai. Isay specifically Edge AI applications ke liye as a trigger mechanism design kiya gaya hai.

Technical Features
Averaging Algorithm: System 5 samples ka average leta hai taakay sensor ki readings mein noise aur fluctuations khatam ho sakein.

Dual-State Feedback: * Standby Mode: Jab koi object detect nahi hota, system idle rehta hai (Red LED ON).

Active Mode: 40cm ke andar detection par system "Target Detected" ka signal bhejta hai (Green LED ON).

Real-time Serial Monitoring: Professional debugging ke liye system baud rate 9600 par status update bhejta hai.

Hardware Setup
Microcontroller: Arduino Uno R3

Sensor: HC-SR04 Ultrasonic Sensor

Connectivity:

Trig Pin -> D9

Echo Pin -> D10

Red LED -> D13

Green LED -> D12

Protection: 220 Ohm Resistors for LED longevity.

Implementation Logic
Testing Results# Smart-Presence-Detection-System
Professional Arduino-based presence detection system with noise reduction and real-time serial monitoring.
