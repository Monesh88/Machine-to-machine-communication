
# Dual-Axis Solar Tracking System 🌞

## 📌 Project Overview

The Dual-Axis Solar Tracking System is an Arduino-based project that automatically adjusts a solar panel's horizontal and vertical orientation according to sunlight intensity. It uses four LDR (Light Dependent Resistor) sensors and two servo motors to track the direction of maximum light.

## 🎯 Objectives

- Detect sunlight intensity using LDR sensors.
- Track sunlight along horizontal and vertical axes.
- Automatically control servo motor positions using Arduino.
- Improve solar panel alignment with incoming sunlight.

## 🎥 Project Demonstration

Watch the working demonstration of my Dual-Axis Solar Tracking System:

[▶️ Click here to watch the project video](https://res.cloudinary.com/kz8f12pj/video/upload/v1792754273/WhatsApp_Video_2026-10-23_at_3.08.21_PM_1.mp4)

<video src="https://res.cloudinary.com/kz8f12pj/video/upload/v1792754273/WhatsApp_Video_2026-10-23_at_3.08.21_PM_1.mp4" controls></video>

## 🛠️ Components Used

- Arduino board
- 4 LDR sensors
- 2 servo motors
- Solar panel and mounting structure
- Connecting wires
- Suitable power supply

## 🔌 Hardware Connections

| Component | Arduino Pin |
|---|---|
| Horizontal servo signal | Digital Pin 2 |
| Vertical servo signal | Digital Pin 13 |
| Bottom-left LDR | A0 |
| Bottom-right LDR | A3 |
| Top-left LDR | A1 |
| Top-right LDR | A2 |

## ⚙️ Working Principle

1. Four LDR sensors measure the light intensity from different directions.
2. The Arduino reads the analog sensor values.
3. The program calculates average readings for the top, bottom, left, and right directions.
4. It compares the readings using a tolerance threshold.
5. When the difference exceeds the threshold, the Arduino adjusts the servo motors.
6. The process repeats continuously to align the panel with the strongest detected light.

## 💻 Technologies Used

- Arduino
- Embedded C/C++
- LDR sensor interfacing
- Servo motor control
- Analog input processing
- Arduino Servo Library

## 🚀 Key Features

- Automatic two-axis light tracking
- Real-time LDR sensor monitoring
- Servo-based position adjustment
- Adjustable tracking tolerance
- Arduino-based embedded control

## 📂 Project Structure

```text
Dual-Axis-Solar-Tracking-System/
├── README.md
├── DualAxisSolarTracking.ino
└── images/
    └── project-setup.jpg
```

## 📚 Learning Outcomes

- Understanding embedded system programming
- Interfacing analog sensors with Arduino
- Controlling servo motors
- Implementing sensor-based feedback logic
- Developing an automated solar tracking application

## 👨‍💻 Author

**Monesh Jankar**

B.Tech – Electronics and Telecommunication Engineering

Interested in Embedded Systems, Electronics Hardware, and Firmware Development.

---

⭐ If you find this project interesting, feel free to explore the code and demonstration video.
