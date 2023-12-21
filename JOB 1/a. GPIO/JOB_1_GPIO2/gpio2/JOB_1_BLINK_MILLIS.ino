const int ledPin = 5;  // Nomor pin untuk LED
unsigned long previousMillis = 0;  // Waktu terakhir LED berkedip
const long interval = 1000;  // Interval waktu (dalam milisecond) untuk berkedip (1 detik)

void setup() {
  pinMode(ledPin, OUTPUT);  // Set pin LED sebagai output
}

void loop() {
  unsigned long currentMillis = millis();  // Dapatkan waktu saat ini

  // Periksa apakah sudah waktunya untuk berkedip LED
  if (currentMillis - previousMillis >= interval) {
    // Simpan waktu terakhir LED berkedip
    previousMillis = currentMillis;

    // Ubah status LED (mati jika sebelumnya menyala, atau sebaliknya)
    if (digitalRead(ledPin) == LOW) {
      digitalWrite(ledPin, HIGH);
    } else {
      digitalWrite(ledPin, LOW);
    }
  }
}
