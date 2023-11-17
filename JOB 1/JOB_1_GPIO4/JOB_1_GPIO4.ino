const int buttonPin1 = 4;  // Nomor pin push button pertama
const int buttonPin2 = 27;  // Nomor pin push button kedua
const int ledPin1 = 5;    // Nomor pin LED pertama
const int ledPin2 = 33;    // Nomor pin LED kedua

int buttonState1 = 0;      // Variabel untuk menyimpan status push button pertama
int buttonState2 = 0;      // Variabel untuk menyimpan status push button kedua

void setup() {
  Serial.begin(115200);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);



 // read the state of the pushbutton value
 buttonState1 = digitalRead(buttonPin1);
 Serial.println(buttonState1);
 // check if the pushbutton is pressed.
 // if it is, the buttonState is HIGH
 if (buttonState1 == HIGH) {
 // turn LED on
 digitalWrite(ledPin1, HIGH);
 } else {
 // turn LED off
 digitalWrite(ledPin1, LOW);
 }

 
  // Tambahkan kode untuk LED pertama di sini
  // ...

  // Periksa apakah push button kedua ditekan.
  // Jika ditekan, buttonState2 akan HIGH
  if (buttonState2 == HIGH) {
    // Aktifkan LED kedua untuk blink setiap 500ms
    digitalWrite(ledPin2, HIGH);
    delay(500);
    digitalWrite(ledPin2, LOW);
    delay(500);
  } else {
    // Matikan LED kedua jika push button tidak ditekan
    digitalWrite(ledPin2, LOW);
  }
}
