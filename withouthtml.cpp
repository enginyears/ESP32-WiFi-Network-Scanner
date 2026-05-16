#include "WiFi.h"

void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();

  Serial.println("\nESP32 WiFi Scanner");
}

void loop() {

  // Scan WiFi networks
  int n = WiFi.scanNetworks();

  Serial.println("\n----------------------------");
  Serial.println("Available WiFi Networks:");
  Serial.println("----------------------------");

  if (n == 0) {
    Serial.println("No networks found");
  } else {
    for (int i = 0; i < n; i++) {

      // RSSI = signal strength in dBm
      int strength = WiFi.RSSI(i);

      Serial.print(i + 1);
      Serial.print(". ");
      Serial.print(WiFi.SSID(i));
      Serial.print("  |  Signal: ");
      Serial.print(strength);
      Serial.println(" dBm");
    }
  }

  Serial.println();

  // 5 second countdown on same line
  for (int i = 5; i > 0; i--) {
    Serial.print("\rNext scan in ");
    Serial.print(i);
    Serial.print(" seconds   ");
    delay(1000);
  }

  // Clear line after countdown
  Serial.print("\rScanning again...           \n");

  WiFi.scanDelete();
}
