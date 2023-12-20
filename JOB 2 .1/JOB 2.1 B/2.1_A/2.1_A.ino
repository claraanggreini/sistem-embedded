//KELOMPOK 1
//Ahnaf Haris           4.31.21.0.01
//Clara Silvia Anggreni 4.31.21.0.10
//Ferdy Rino Damara     4.31.21.0.12

#include "WiFi.h" // Mengimpor pustaka WiFi untuk dapat menggunakan fungsi-fungsi terkait WiFi.
void setup(){
  Serial.begin(115200);
  // Memulai komunikasi serial dengan kecepatan baud 115200.

  WiFi.mode(WIFI_MODE_STA);
  // Mengatur mode WiFi ESP32 ke mode Station (penerima).

  Serial.println(WiFi.macAddress());
  // Mencetak alamat MAC WiFi ESP32 ke Serial Monitor.
}

void loop(){
  // Program utama berada di dalam loop(), tetapi dalam contoh ini loop() kosong.
}
