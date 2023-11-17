const int led = 16;
bool isTouched = false; // Menyimpan status apakah sensor disentuh sebelumnya
int touchCount = 0; // Menyimpan jumlah sentuhan

void setup() {
  Serial.begin(115200);
  delay(1000); // Beri waktu untuk membuka serial monitor
  Serial.println("ESP32 Touch Test");
  pinMode(led, OUTPUT);
}

void loop() {
  int touchValue = touchRead(4);

  if (touchValue < 20) {
    digitalWrite(led, HIGH);
    if (!isTouched) {
      touchCount++; // Tambahkan jumlah sentuhan jika sensor disentuh baru
      Serial.print("Jumlah Sentuhan: ");
      Serial.println(touchCount);
    }
    isTouched = true; // Set isTouched menjadi true saat sensor disentuh
  } else {
    digitalWrite(led, LOW);
    isTouched = false; // Set isTouched menjadi false saat sensor tidak disentuh
  }
}
