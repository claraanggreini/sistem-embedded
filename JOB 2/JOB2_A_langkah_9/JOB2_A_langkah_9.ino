//KELOMPOK 1
//Ahnaf Haris           4.31.21.0.01
//Clara Silvia Anggreni 4.31.21.0.10
//Ferdy Rino Damara     4.31.21.0.12

const int touchPin = 4;  // Pin sentuh (Touch 0) di GPIO 4
const int led1 = 16;    // LED pertama di GPIO 16
const int led2 = 17;    // LED kedua di GPIO 17
const int led3 = 18;    // LED ketiga (Running LED) di GPIO 18

int runningLedState = 0;  // Menyimpan status dari running LED
int isTouched = 0;   // Menyimpan status apakah sensor disentuh sebelumnya

void setup() {
  Serial.begin(115200); // Mengaktifkan komunikasi serial dengan kecepatan 115200 bps.
  delay(1000); // Beri waktu untuk membuka serial monitor.
  Serial.println("ESP32 Touch Test"); // Mencetak pesan "ESP32 Touch Test" ke serial monitor.
  pinMode(touchPin, INPUT); // Mengatur pin sentuh sebagai pin input.
  pinMode(led1, OUTPUT); // Mengatur pin LED pertama sebagai pin keluaran.
  pinMode(led2, OUTPUT); // Mengatur pin LED kedua sebagai pin keluaran.
  pinMode(led3, OUTPUT); // Mengatur pin LED ketiga sebagai pin keluaran.
}

void loop() {
  int touchValue = touchRead(touchPin); // Membaca nilai sentuh dari pin sentuh.
  Serial.println(touchValue); // Mencetak nilai sentuh ke serial monitor.

  if (touchValue < 20) {
    // Ketika sensor disentuh, atur running LED menjadi bergerak dari kiri ke kanan
    isTouched = 1; // Mengatur status isTouched menjadi 1.
  }
  else {
    isTouched = 0; // Jika tidak disentuh, mengatur status isTouched menjadi 0.
  }

  // Atur running LED sesuai dengan runningLedState
  if (isTouched == 1) {
    // Jika sensor disentuh, atur urutan LED sesuai dengan runningLedState
    // dan beri jeda 500 milidetik antara perubahan keadaan LED.
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    delay(500);
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    delay(500);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    delay(500);
  }
  else {
    // Jika tidak disentuh, matikan semua LED dan beri jeda 10 milidetik.
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    delay(10);
  }
}
