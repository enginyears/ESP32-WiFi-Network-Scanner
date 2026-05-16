# 📶 ESP32 WiFi Network Scanner

> Scan every WiFi network nearby. Signal bars. Live. From a $4 chip with zero extra components.

---

## 💡 The Idea

One function call — `WiFi.scanNetworks()` — and your ESP32 can see every router, phone hotspot, and hidden network within range. This firmware turns that raw data into a clean live dashboard with signal bars, channel info, and encryption type, served from the ESP32's own WiFi hotspot.

---

## 🧰 What You Need

| Item | Cost |
|------|------|
| ESP32 Dev Board | ~$4 |
| USB Cable | Free |
| VS Code + PlatformIO | Free |
| External components | ❌ None |

---

## 🚀 Quick Start

```bash
git clone https://github.com/enginyears/esp32-wifi-scanner
# Open in VS Code with PlatformIO → Click Upload
```

1. Connect phone to WiFi: `ESP32 Scanner` / password: `scanwifi`  
2. Open browser → `http://192.168.4.1`  
3. See every network nearby — auto-refreshes every 4 seconds

---

## 📡 What Each Column Means

| Field | Meaning |
|-------|---------|
| Signal bars | Strength: 4 = excellent, 1 = barely there |
| SSID | Network name (hidden networks show as [Hidden]) |
| dBm | Raw signal value — closer to 0 = stronger |
| Ch | WiFi channel (1–13) |
| WPA2 / OPEN | Encryption type — OPEN means no password |

---

## 🧠 What You Learn

- `WiFi.scanNetworks()` — scanning nearby networks
- Reading RSSI, SSID, BSSID, channel, encryption type
- Converting raw numbers into visual elements (signal bars)
- Auto-refreshing web pages with meta refresh

---

## 📺 Part of the `enginyears` Beginner Series
> *One ESP32. Infinite possibilities. Starting from zero.*

📸 Instagram: [@enginyears.me](https://instagram.com/enginyears.me)  
💻 GitHub: [github.com/enginyears](https://github.com/enginyears)
