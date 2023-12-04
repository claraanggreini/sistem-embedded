//KELOMPOK 1
//Ahnaf Haris           4.31.21.0.01
//Clara Silvia Anggreni 4.31.21.0.10
//Ferdy Rino Damara     4.31.21.0.12


const int led = 16; // Mendefinisikan variabel konstan led dan memberikan nilai 16 sebagai nomor pin LED.
bool isTouched = false; // Variabel boolean untuk menyimpan status apakah sensor disentuh sebelumnya.
bool isLedOn = false; // Variabel boolean untuk menyimpan status apakah LED sedang menyala.

void setup() {
  Serial.begin(115200); // Mengaktifkan komunikasi serial dengan kecepatan 115200 bps.
  delay(1000); // Menunda eksekusi program selama 1000 milidetik (1 detik) untuk memberikan waktu membuka serial monitor.
  Serial.println("ESP32 Touch Test"); // Mencetak teks "ESP32 Touch Test" ke serial monitor.
  pinMode(led, OUTPUT); // Mengatur pin LED sebagai pin keluaran.
}

void loop() {
  int touchValue = touchRead(4); // Membaca nilai sentuh pada pin GPIO 4.

  if (touchValue < 20) {
    isTouched = true; // Jika sensor disentuh, set isTouched menjadi true.
  } else {
    isTouched = false; // Jika sensor tidak disentuh, set isTouched menjadi false.
  }

  // Toggle LED sesuai dengan status isTouched
  if (isTouched) {
    if (!isLedOn) {
      digitalWrite(led, HIGH); // Nyalakan LED jika belum menyala.
      isLedOn = true;
    } else {
      digitalWrite(led, LOW); // Matikan LED jika sudah menyala.
      isLedOn = false;
    }
    delay(500); // Tunggu selama 500ms antara setiap blink LED.
  } else {
    digitalWrite(led, LOW); // Matikan LED jika sensor tidak disentuh.
    isLedOn = false; // Pastikan isLedOn juga false jika sensor tidak disentuh.
  }
}
