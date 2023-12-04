//KELOMPOK 1
//Ahnaf Haris           4.31.21.0.01
//Clara Silvia Anggreni 4.31.21.0.10
//Ferdy Rino Damara     4.31.21.0.12

const int touchPin = 4; // Pin sentuh (Touch 0) di GPIO 4
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
// REQUIRES the following Arduino libraries:
// - DHT Sensor Library: https://github.com/adafruit/DHT-sensor-library
// - Adafruit Unified Sensor Lib: https://github.com/adafruit/Adafruit_Sensor
#include "DHT.h" // Mengimpor library DHT untuk sensor suhu dan kelembaban.
#define DHTPIN 4 // Menentukan pin digital yang terhubung ke sensor DHT.
// Uncomment whatever type you're using!
#define DHTTYPE DHT11 // Menentukan jenis sensor DHT yang digunakan (DHT11, DHT22, atau DHT21).

DHT dht(DHTPIN, DHTTYPE); // Membuat objek DHT dengan pin dan jenis yang telah ditentukan.
void setup() {
 Serial.begin(9600); // Mengaktifkan komunikasi serial dengan kecepatan 9600 bps.
 Serial.println(F("DHT11 Embedded System Test!")); // Mencetak pesan ke serial monitor.
 dht.begin(); // Memulai komunikasi dengan sensor DHT.
}
void loop() {
 // Wait a few seconds between measurements.
 delay(2000); // Menunda eksekusi program selama 2000 milidetik (2 detik) untuk membaca data sensor dengan interval tertentu.

 // Reading temperature or humidity takes about 250 milliseconds!
 // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
 float h = dht.readHumidity(); // Membaca nilai kelembaban dari sensor DHT.
 // Read temperature as Celsius (the default)
 float t = dht.readTemperature(); // Membaca nilai suhu dalam derajat Celsius dari sensor DHT.
 // Read temperature as Fahrenheit (isFahrenheit = true)
 float f = dht.readTemperature(true); // Membaca nilai suhu dalam derajat Fahrenheit dari sensor DHT.

 // Check if any reads failed and exit early (to try again).
 if (isnan(h) || isnan(t) || isnan(f)) { // Memeriksa apakah pembacaan sensor gagal. Jika ya, mencetak pesan dan keluar dari loop.
 Serial.println(F("Failed to read from DHT sensor!"));
 return;
 }

 // Compute heat index in Fahrenheit (the default)
 float hif = dht.computeHeatIndex(f, h); // Menghitung indeks panas dalam Fahrenheit dari suhu dan kelembaban.
 // Compute heat index in Celsius (isFahreheit = false)
 float hic = dht.computeHeatIndex(t, h, false); // Menghitung indeks panas dalam Celsius dari suhu dan kelembaban.

 Serial.print(F("Humidity: ")); // Mencetak pesan awal ke serial monitor.
 Serial.print(h); // Mencetak nilai kelembaban.
 Serial.print(F("% Temperature: ")); // Mencetak pesan ke serial monitor.
 Serial.print(t); // Mencetak nilai suhu dalam Celsius.
 Serial.print(F("°C "));
 Serial.print(f); // Mencetak nilai suhu dalam Fahrenheit.
 Serial.print(F("°F Heat index: "));
 Serial.print(hic); // Mencetak indeks panas dalam Celsius.
 Serial.print(F("°C "));
 Serial.print(hif); // Mencetak indeks panas dalam Fahrenheit.
 Serial.println(F("°F")); // Mencetak pesan akhir ke serial monitor.
}
