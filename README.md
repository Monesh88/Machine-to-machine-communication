# Machine-to-Machine (M2M) Communication Using ESP32 and Firebase

## 📌 Project Overview

This project demonstrates **Machine-to-Machine (M2M) communication** using an ESP32 microcontroller, a DHT11 temperature and humidity sensor, Wi-Fi connectivity, and Firebase Realtime Database.

The ESP32 collects temperature and humidity readings from the DHT11 sensor and transmits the sensor data to Firebase Realtime Database over Wi-Fi. The data is updated at regular intervals, enabling remote monitoring of environmental conditions.

## 🎯 Objectives

- Implement wireless communication using the ESP32.
- Measure temperature and humidity using the DHT11 sensor.
- Transmit sensor readings to Firebase Realtime Database.
- Enable remote access to sensor data through a cloud database.
- Demonstrate IoT-based M2M communication.

## 🛠️ Hardware Requirements

- ESP32 development board
- DHT11 temperature and humidity sensor
- USB cable for programming and power
- Wi-Fi network
- Connecting wires

## 💻 Software and Technologies

- Arduino IDE
- Embedded C/C++ (Arduino framework)
- ESP32 Wi-Fi library
- FirebaseESP32 library
- DHT sensor library
- Firebase Realtime Database

## 🔌 Circuit Connections

| DHT11 Pin | ESP32 Connection |
|---|---|
| VCC | 3.3V (check your sensor module specifications) |
| GND | GND |
| DATA | GPIO 4 |

**Note:** If using a bare DHT11 sensor rather than a sensor module, an appropriate pull-up resistor may be required on the data line.

## ⚙️ Working Principle

1. The ESP32 initializes serial communication and connects to the configured Wi-Fi network.
2. The DHT11 sensor is initialized to measure temperature and relative humidity.
3. The ESP32 reads the sensor measurements.
4. The readings are uploaded to Firebase Realtime Database.
5. Temperature and humidity values are stored at the following database paths:
   - `/Sensor/Temperature`
   - `/Sensor/Humidity`
6. The process repeats every two seconds.

## ☁️ Firebase Database Structure

```text
Firebase Realtime Database
└── Sensor
    ├── Temperature: 28.5
    └── Humidity: 65.0
```

*The values shown above are illustrative examples, not actual sensor readings.*

## 🔑 Configuration

Before uploading the code, configure the following parameters in the Arduino sketch:

```cpp
#define WIFI_SSID "Your_SSID"
#define WIFI_PASSWORD "Your_PASSWORD"
#define API_KEY "Your_API_Key"
#define DATABASE_URL "https://your-database.firebaseio.com/"
```

Replace the placeholders with your Wi-Fi credentials, Firebase Web API key, and the correct Realtime Database URL.

### Setup Requirements

1. Create a Firebase project.
2. Enable Firebase Realtime Database.
3. Obtain the required API key and database URL.
4. Install the ESP32 board package in Arduino IDE.
5. Install the required Firebase and DHT libraries.
6. Configure the Wi-Fi credentials and Firebase parameters.
7. Select the correct ESP32 board and COM port.
8. Upload the program and open Serial Monitor at **115200 baud**.

**Security:** Do not commit real Wi-Fi passwords, private credentials, or sensitive configuration details to a public repository. Use placeholders in the published source code.

## 📊 Expected Output

When the ESP32 connects to Wi-Fi and successfully uploads both sensor readings, the Serial Monitor displays:

```text
Data updated successfully
```

If either Firebase database update fails, the program displays:

```text
Error updating data
```

The latest temperature and humidity values can then be viewed in Firebase Realtime Database.

## 🌍 Applications

- Environmental monitoring
- Smart home automation
- IoT-based sensor monitoring
- Remote temperature and humidity tracking
- Cloud-connected embedded systems
- Industrial monitoring and automation prototypes

## 🚀 Future Improvements

- Add real-time graphs and dashboards.
- Integrate alerts for temperature or humidity thresholds.
- Add multiple sensor nodes.
- Implement sensor-reading validation and reconnection handling.
- Improve Firebase authentication and database security.
- Build a mobile or web application for remote monitoring.

## 📚 Learning Outcomes

- ESP32 programming and GPIO interfacing
- Temperature and humidity sensing
- Wi-Fi-based embedded communication
- Cloud database integration
- IoT and M2M communication concepts
- Debugging and monitoring embedded systems

## 👨‍💻 Project Information

**Project Name:** Machine-to-Machine Communication Using ESP32 and Firebase  
**Domain:** Embedded Systems and Internet of Things (IoT)  
**Microcontroller:** ESP32  
**Communication:** Wi-Fi  
**Cloud Platform:** Firebase Realtime Database  
**Sensor:** DHT11

---

*This project is developed for educational purposes to demonstrate sensor data acquisition and cloud-based M2M communication.*
