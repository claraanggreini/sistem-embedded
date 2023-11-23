//KELOMPOK 1
//Ahnaf Haris           4.31.21.0.01
//Clara Silvia Anggreni 4.31.21.0.10
//Ferdy Rino Damara     4.31.21.0.12


// Uji Sentuhan ESP32
// Hanya menguji pin sentuhan - Touch0 adalah T0 yang berada pada GPIO 4.
const int led = 16; // Mendefinisikan variabel konstan led dan memberikan nilai 16 sebagai nomor pin LED.

void setup() {
  Serial.begin(115200); // Mengaktifkan komunikasi serial dengan kecepatan 115200 bps.
  delay(1000); // Menunda eksekusi program selama 1000 milidetik (1 detik) untuk memberikan waktu membuka serial monitor.
  Serial.println("ESP32 Touch Test"); // Mencetak teks "ESP32 Touch Test" ke serial monitor.
  pinMode(led, OUTPUT); // Mengatur pin yang ditentukan dalam variabel led sebagai pin keluaran.
}

void loop() {
  if (touchRead(4) < 20) { // Mengecek nilai pembacaan sentuh pada pin GPIO 4. Jika nilainya kurang dari 20,
    digitalWrite(led, HIGH); // Membuat pin LED (yang telah ditentukan sebagai variabel led) HIGH (menyalakan LED).
  } else {
    digitalWrite(led, LOW); // Jika nilai pembacaan sentuh lebih besar atau sama dengan 20, maka pin LED dimatikan (LOW).
  }
}
}
