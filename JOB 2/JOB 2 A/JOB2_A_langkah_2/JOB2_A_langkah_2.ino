//KELOMPOK 1
//Ahnaf Haris           4.31.21.0.01
//Clara Silvia Anggreni 4.31.21.0.10
//Ferdy Rino Damara     4.31.21.0.12


// Uji Sentuhan ESP32
// Hanya menguji pin sentuhan - Touch0 adalah T0 yang berada pada GPIO 4.
void setup() {
  Serial.begin(115200);               // Inisialisasi komunikasi serial dengan kecepatan 115200 bps
  delay(1000);                        // Beri waktu 1 detik untuk membuka serial monitor
  Serial.println("ESP32 Touch Test"); // Cetak pesan "ESP32 Touch Test" ke serial monitor
}

void loop() {
  Serial.println(touchRead(4));       // Membaca nilai sentuhan pada pin Touch 0 = GPIO 4 dan mencetaknya ke serial monitor
  delay(1000);                        // Tunggu selama 1 detik sebelum membaca nilai sentuhan lagi
}
