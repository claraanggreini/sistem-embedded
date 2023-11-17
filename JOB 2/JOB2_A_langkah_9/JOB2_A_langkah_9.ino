const int touchPin = 4;  // Pin sentuh (Touch 0) di GPIO 4
const int led1 = 16;    // LED pertama di GPIO 16
const int led2 = 17;    // LED kedua di GPIO 17
const int led3 = 18;    // LED ketiga (Running LED) di GPIO 18

int runningLedState = 0;  // Menyimpan status dari running LED
int isTouched = 0;   // Menyimpan status apakah sensor disentuh sebelumnya

void setup() {
  Serial.begin(115200);
  delay(1000); // Beri waktu untuk membuka serial monitor
  Serial.println("ESP32 Touch Test");
  pinMode(touchPin, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  int touchValue = touchRead(touchPin);
  Serial.println(touchValue);
  if (touchValue < 20) {
    // Ketika sensor disentuh, atur running LED menjadi bergerak dari kiri ke kanan
    isTouched = 1;
  }
  else {
    isTouched = 0;
  }

  // Atur running LED sesuai dengan runningLedState
  if (isTouched == 1) {
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
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    delay(10);
  }



}
