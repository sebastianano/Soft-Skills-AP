#include <ESP8266WiFi.h>
#include <WiFiClient.h>

#define AP_SSID "Smart Mailbox Network"
#define AP_SECRET "abcDEF123!"

const char *ssid = AP_SSID;
const char *password = AP_SECRET;

[[maybe_unused]] void setup() {
    Serial.begin(9600);

    delay(1000);

    Serial.println();
    Serial.print("Configuring access point...");

    WiFi.softAP(ssid, password);

    IPAddress ipAddress = WiFi.softAPIP();
    Serial.print("AP IP address: ");
    Serial.println(ipAddress);
}

[[maybe_unused]] void loop() {}
