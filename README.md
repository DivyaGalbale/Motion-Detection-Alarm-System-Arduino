# Motion-Detection-Alarm-System-Arduino
Motion Detection Alarm System using Arduino and PIR sensor with I2C LCD display and buzzer. Detects human motion and triggers an audible alert while displaying system status on LCD. Suitable for basic security and smart home applications.
# 🔐 Motion Detection Alarm System using Arduino Uno

This project is a simple security system that detects human motion using a PIR sensor and triggers an alarm using a buzzer. The system also displays status on an I2C LCD.

## 📌 Components Used
- Arduino Uno
- PIR Motion Sensor (HC-SR501)
- I2C LCD (16x2)
- Buzzer

## ⚙ Working
- PIR sensor detects human motion.
- When motion is detected, buzzer turns ON.
- LCD displays "Motion Detected".
- When no motion, buzzer remains OFF and LCD shows "System Safe".

## 🔌 Connections

### PIR Sensor
- VCC → 5V
- GND → GND
- OUT → GPIO 13 (ESP32) / D2 (Arduino)

### Buzzer
- + → GPIO 27 (ESP32) / D8 (Arduino)
- - → GND

### I2C LCD
- SDA → GPIO 21 (ESP32) / A4 (Arduino)
- SCL → GPIO 22 (ESP32) / A5 (Arduino)
- VCC → 5V
- GND → GND

## 💡 Applications
- Home Security
- Office Monitoring
- Restricted Area Protection

## 🚀 Future Scope
- Mobile notification using WiFi
- Camera integration
- Cloud-based monitoring
- Smart home integration

## 👩‍💻 Developed By
Divya Galbale  
Electronics and Telecommunication Engineering Student
