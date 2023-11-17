const int led = 16;
bool isTouched = false; // Menyimpan status apakah sensor disentuh sebelumnya
bool isLedOn = false; // Menyimpan status apakah LED sedang menyala

void setup() {
  Serial.begin(115200);
  delay(1000); // Beri waktu untuk membuka serial monitor
  Serial.println("ESP32 Touch Test");
  pinMode(led, OUTPUT);
}

void loop() {
  int touchValue = touchRead(4);

  if (touchValue < 20) {
    isTouched = true; // Jika sensor disentuh, set isTouched menjadi true
  } else {
    isTouched = false; // Jika sensor tidak disentuh, set isTouched menjadi false
  }

  // Toggle LED sesuai dengan status isTouched
  if (isTouched) {
    if (!isLedOn) {
      digitalWrite(led, HIGH); // Nyalakan LED jika belum menyala
      isLedOn = true;
    } else {
      digitalWrite(led, LOW); // Matikan LED jika sudah menyala
      isLedOn = false;
    }
    delay(500); // Tunggu selama 500ms antara setiap blink LED
  } else {
    digitalWrite(led, LOW); // Matikan LED jika sensor tidak disentuh
    isLedOn = false; // Pastikan isLedOn juga false jika sensor tidak disentuh
  }
}
