#include <WiFi.h>

// Replace with your network credentials (STATION)
const char* ssid = "redmi";
const char* password = "clara100103";
String hostname = "KEDAPKEDIP";

void initWiFi() {
  WiFi.mode(WIFI_STA);
  WiFi.config(INADDR_NONE, INADDR_NONE, INADDR_NONE, INADDR_NONE);
  WiFi.setHostname(hostname.c_str()); //define hostname
  //wifi_station_set_hostname( hostname.c_str() );
  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi ..");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print('.');
    delay(1000);
  }
  Serial.println(WiFi.localIP());
}

void setup() {
  Serial.begin(115200);
  initWiFi();
  Serial.print("RRSI: ");
  Serial.println(WiFi.RSSI());
  Serial.print("New Hostname: ");
  Serial.println(WiFi.getHostname());
}

void loop() {
  // put your main code here, to run repeatedly:
}
