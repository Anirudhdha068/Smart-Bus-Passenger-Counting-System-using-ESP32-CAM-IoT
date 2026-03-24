<h1 align="center">Smart Bus Passenger Counting System</h1>

<p align="center">
  <b>IoT + AI Powered Real-Time Passenger Monitoring System</b>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/IoT-System-blue?style=for-the-badge">
  <img src="https://img.shields.io/badge/AI-Computer%20Vision-red?style=for-the-badge">
  <img src="https://img.shields.io/badge/ESP32-CAM-orange?style=for-the-badge">
  <img src="https://img.shields.io/badge/OpenCV-Detection-green?style=for-the-badge">
</p>

<p align="center">
  <img src="https://img.shields.io/github/stars/Anirudhdha068/Smart-Bus-Passenger-Counting-System-using-ESP32-CAM-IoT?style=social">
  <img src="https://img.shields.io/github/forks/Anirudhdha068/Smart-Bus-Passenger-Counting-System-using-ESP32-CAM-IoT?style=social">
  <img src="https://img.shields.io/github/license/Anirudhdha068/Smart-Bus-Passenger-Counting-System-using-ESP32-CAM-IoT">
</p>

---

## 🧠 Overview

The **Smart Bus Passenger Counting System** is a real-time embedded IoT solution designed to monitor passenger occupancy inside buses using **sensor fusion and computer vision**.

This system combines:

* 📡 IoT-based entry/exit tracking
* 📷 Real-time video streaming
* 🧠 AI-based face detection
* 📊 Live data visualization

---

## ⚙️ System Architecture

```plaintext
Entry Sensor  → Count++
Exit Sensor   → Count--

ESP32-CAM → WiFi → Python (OpenCV)

NodeMCU → OLED → Display Count
```

---

## 🔥 Core Features

* 🚍 Real-time passenger counting
* 📷 Live video monitoring (ESP32-CAM)
* 🧠 AI-based face detection (OpenCV)
* 🚶 Bidirectional entry/exit tracking
* 📊 OLED display output
* ⚡ Lightweight & cost-efficient

---

## 🛠️ Tech Stack

| Layer    | Technology            |
| -------- | --------------------- |
| Hardware | ESP32-CAM, NodeMCU    |
| Sensors  | Ultrasonic            |
| AI       | OpenCV (Haar Cascade) |
| Language | Python, Embedded C    |
| Network  | WiFi                  |

---

## 📸 Visuals

### 🔧 Hardware Setup

![Setup](assets/images/setup.jpg)

### 🔌 Circuit Diagram

![Circuit](assets/images/circuit.png)

### 📊 Output

![Output](assets/images/output.png)

---

## ⚙️ Working Logic

1. **Entry Detection**

   * Ultrasonic Sensor triggers → Count++

2. **Exit Detection**

   * Second sensor triggers → Count--

3. **Video Streaming**

   * ESP32-CAM streams live feed over WiFi

4. **Face Detection**

   * Python processes frames using OpenCV

5. **Display**

   * OLED shows real-time passenger count

---

## ⚠️ Design Insight

> The system uses **sensor-based counting for accuracy** and **vision-based detection for monitoring**, ensuring reliability in real-world conditions.

---

## 💻 Setup & Installation

### 🔹 Clone Repository

```bash
git clone https://github.com/Anirudhdha068/Smart-Bus-Passenger-Counting-System-using-ESP32-CAM-IoT.git
cd Smart-Bus-Passenger-Counting-System
```

---

## 🐍 Python Environment (Best Practice)

### Create Virtual Environment

```bash
python -m venv venv
```

### Activate

**Windows**

```bash
venv\Scripts\activate
```

**Linux/Mac**

```bash
source venv/bin/activate
```

---

### Install Dependencies

```bash
pip install -r requirements.txt
```

---

### Run Application

```bash
python software/python/face_detection.py
```

---

## 📡 ESP32-CAM Setup

* Upload firmware using Arduino IDE
* Connect to WiFi
* Open IP in browser

---

## 📊 Output

* OLED → Passenger count
* Python → Detection window
* Browser → Live stream

---

## 🎥 Demo

📁 Add demo video inside:

```plaintext
assets/videos/demo.mp4
```

---

## 🚀 Future Enhancements

* YOLOv8-based detection
* Cloud dashboard (Firebase)
* Mobile application
* GPS integration
* Real-time analytics

---

## 👨‍💻 Author

**Anirudhdha Poriya**<br>
🚀 IoT Developer | Embedded Systems Enthusiast

---

## 🤝 Contributions

Contributions are welcome!
Feel free to fork and improve the system.

---

## ⭐ Support

If this project helped you:

⭐ Star this repository
📢 Share with the community

---

## 📜 License

Licensed under the MIT License.
