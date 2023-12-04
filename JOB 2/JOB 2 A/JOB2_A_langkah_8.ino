//KELOMPOK 1
//Ahnaf Haris           4.31.21.0.01
//Clara Silvia Anggreni 4.31.21.0.10
//Ferdy Rino Damara     4.31.21.0.12


const int led = 16; // Mendefinisikan variabel konstan led dan memberikan nilai 16 sebagai nomor pin LED.
bool isTouched = false; // Mendeklarasikan variabel boolean isTouched dan menginisialisasinya sebagai false. Variabel ini menyimpan status apakah sensor disentuh sebelumnya.
int touchCount = 0; // Mendeklarasikan variabel integer touchCount dan menginisialisasinya sebagai 0. Variabel ini menyimpan jumlah sentuhan.

void setup() {
  Serial.begin(115200); // Mengaktifkan komunikasi serial dengan kecepatan 115200 bps.
  delay(1000); // Menunda eksekusi program selama 1000 milidetik (1 detik) untuk memberikan waktu membuka serial monitor.
  Serial.println("ESP32 Touch Test"); // Mencetak teks "ESP32 Touch Test" ke serial monitor.
  pinMode(led, OUTPUT); // Mengatur pin LED sebagai pin keluaran.
}

void loop() {
  int touchValue = touchRead(4); // Membaca nilai sentuh pada pin GPIO 4 dan menyimpannya dalam variabel touchValue.

  if (touchValue < 20) { // Jika nilai sentuh kurang dari 20,
    digitalWrite(led, HIGH); // Menyalakan LED.
    if (!isTouched) { // Jika sensor sebelumnya tidak disentuh,
      touchCount++; // Menambah jumlah sentuhan.
      Serial.print("Jumlah Sentuhan: ");
      Serial.println(touchCount); // Mencetak jumlah sentuhan ke serial monitor.
    }
    isTouched = true; // Mengatur isTouched menjadi true saat sensor disentuh.
  } else {
    digitalWrite(led, LOW); // Jika nilai sentuh lebih besar atau sama dengan 20, mematikan LED.
    isTouched = false; // Mengatur isTouched menjadi false saat sensor tidak disentuh.
  }
}
