//KELOMPOK 1
//Ahnaf Haris           4.31.21.0.01
//Clara Silvia Anggreni 4.31.21.0.10
//Ferdy Rino Damara     4.31.21.0.12

#include <WiFi.h>
#include <HTTPClient.h>

const char* ssid = "redmi";
const char* password = "iya100103";

//Your Domain name with URL path or IP address with path
const char* serverName = "http://192.168.22.188:1880/flood/node1";

// the following variables are unsigned longs because the time, measured in
// milliseconds, will quickly become a bigger number than can be stored in an int.
unsigned long lastTime = 0;
// Timer set to 10 minutes (600000)
//unsigned long timerDelay = 600000;
// Set timer to 5 seconds (5000)
unsigned long timerDelay = 5000;
void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  Serial.println("Connecting");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to WiFi network with IP Address: ");
  Serial.println(WiFi.localIP());
  Serial.println("Timer set to 5 seconds (timerDelay variable), it will take 5 seconds before publishing the first reading.");
}
void loop() {
  //Send an HTTP POST request every 10 minutes
  String dev_id = "28", level = "8", rainfall = "9.2", flow = "10";
  if ((millis() - lastTime) > timerDelay) {
    //Check WiFi connection status
    if (WiFi.status() == WL_CONNECTED) {
      WiFiClient client;
      HTTPClient http;
      // Your Domain name with URL path or IP address with path
      http.begin(client, serverName);
      // Specify content-type header
      //http.addHeader("Content-Type", "application/x-www-form-urlencoded");
      // Data to send with HTTP POST
      //String httpRequestData =
      "api_key=tPmAT5Ab3j7F9&sensor=BME280&value1=24.25&value2=49.54&value3=1005.14";
      // Send HTTP POST request
      //int httpResponseCode = http.POST(httpRequestData);
      // If you need an HTTP request with a content type: application/json, use the following:
      http.addHeader("Content-Type", "application/json");
      // JSON data to send with HTTP POST
      String httpRequestData = "{\"dev_id\":\"" + dev_id + "\",\"level\":\"" + level +
                               "\",\"rainfall\":\"" + rainfall + "\",\"flow\":\"" + flow + "\"}";
      // Send HTTP POST request
      int httpResponseCode = http.POST(httpRequestData);
      Serial.print("HTTP Response code is: ");
      Serial.println(httpResponseCode);
      http.end();
    }
    else {
      Serial.println("WiFi Disconnected");
    }
    lastTime = millis();
  }
}
