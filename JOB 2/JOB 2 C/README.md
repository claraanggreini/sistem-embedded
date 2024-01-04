# 2. EP32 | C. Mengakses Sensor RFID (SPI Communication)

## 1. Keterangan Singkat (Abstrak)

<p align="justify">Dalam percobaan ini program dibuat untuk dapat memahami implementasi kontrol akses berbasis RFID pada platform ESP32 dengan menggunakan modul MFRC522, yaitu dengan memberikan kontrol akses yang responsif dan sesuai dengan UID yang telah ditentukan sebelumnya. Dalam hal ini melakukan pembacaan dan pembandingan UID kartu RFID, memberikan akses atau menolak akses, dan memberikan respons visual menggunakan servo motor dan LED sebagai indikator. 

## 2. Rangkaian
### 2.1 Rangkaian 1 (Untuk langkah 1 hingga 4)
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/852dfd8d-f117-4256-a09f-c3b379a7cea7" width="500">

### 2.2 Rangkaian 2 (Untuk langkah 5 hingga 6)
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/76e1b6fc-9977-47bb-8894-c6508fc61148" width="500">

## 3. Source Code
### 3.1. Source Code Langkah 1-4

Program dapat dilihat <a href="https://github.com/claraanggreini/sistem-embedded/blob/master/JOB%202/JOB%202%20C/JOB2_C_langkkah_1-4/JOB2_C_langkkah_1-4.ino"> disini </a> atau dibawah ini

<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/366e3b94-1fae-4f4c-8559-1c62fa9f7e5f" width="500">

### 3.2. Source Code Langkah 5-6

Program dapat dilihat <a href="https://github.com/claraanggreini/sistem-embedded/blob/master/JOB%202/JOB%202%20C/JOB2_C_langkah_5-6/JOB2_C_langkah_5-6.ino"> disini </a> atau dibawah ini

<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/7c9dc9f1-a061-4b7f-b5c6-f08b79305ff5" width="500">

## 4. Hasil dan Pembahasan

### 4.1 Video Langkah 1-4
https://github.com/claraanggreini/sistem-embedded/assets/150989360/7225a76a-bcf6-4ee5-9cdb-1e51f97309bf

Pembahasan:<br> 
<p align="justify">Program ini adalah sebuah kode untuk membaca dan mengenali kartu RFID/NFC menggunakan modul MFRC522 pada ESP32.<br>
  
  1. Inisialisasi Perangkat dan Variabel<br>
      1.	Kode ini menggunakan pustaka SPI dan MFRC522, yang diinisialisasi dengan menyertakan            pustaka dan mendefinisikan pin SS (Slave Select) dan RST            (Reset) pada ESP32.
      2.	Sebuah array byte keyTagUID digunakan untuk menyimpan UID (Unique Identifier) dari            kartu RFID yang diizinkan.
     
  2. Setup<br>
      1.	Fungsi setup() berisi inisialisasi serial communication, inisialisasi bus SPI, dan            inisialisasi modul MFRC522.
      2.	Pesan "Tap RFID/NFC Tag on reader" dicetak ke Serial Monitor.
     
  3. Loop<br>
      1.	Fungsi loop() berisi logika utama program yang terus diulang.
      2.	Jika kartu baru terdeteksi (rfid.PICC_IsNewCardPresent()), maka membaca serial kartu          (rfid.PICC_ReadCardSerial()).
      3.	Memeriksa UID kartu yang dibaca dengan UID yang diizinkan (keyTagUID).
      4.	Jika UID kartu sesuai dengan UID yang diizinkan, mencetak "Access is granted".
      5.	Jika UID kartu tidak sesuai, mencetak "Access denied for user with UID" dan menampilkan         UID kartu yang mencoba akses.
      6.	Menjalankan perintah untuk menghentikan kartu (rfid.PICC_HaltA()) dan menghentikan            enkripsi pada PCD (Proximity Coupling Device)          (rfid.PCD_StopCrypto1()).
     
<p align="justify">Dengan menggunakan kode ini, diperoleh hasil bahwa saat kartu belum didaftarkan keytagnya maka ketika didekatkan dengan RFID maka pada serial monitor tertulis "Access denied for user with UID" oleh karena itu sistem ini dapat mengendalikan akses berbasis RFID pada suatu sistem, dengan memberikan akses kepada kartu yang memiliki UID sesuai dengan nilai yang telah ditentukan dalam array `keyTagUID`.

### 4.2 Video Langkah 5-6
https://github.com/claraanggreini/sistem-embedded/assets/150989360/263b3611-a94e-41c4-9bde-8392d44bcf00

Pembahasan:<br> 
<p align="justify">Program ini adalah implementasi kontrol akses berbasis RFID pada ESP32 menggunakan modul MFRC522 dan servo motor.<br>
  
  1. Inisialisasi Perangkat dan Variabel:<br>
      1.	Program menggunakan pustaka SPI, MFRC522, dan ESP32Servo.
      2.	Dua pin (SS_PIN dan RST_PIN) ditentukan untuk komunikasi SPI dengan modul MFRC522.
      3.	Sebuah objek rfid dari kelas MFRC522 dibuat untuk berkomunikasi dengan modul RFID.
      4.	Sebuah array byte keyTagUID digunakan untuk menyimpan UID (Unique Identifier) dari            kartu RFID yang diizinkan.
      5.	Sebuah objek myservo dari kelas Servo digunakan untuk mengendalikan servo motor.
      6.	Dua pin (greenLEDPin dan redLEDPin) ditentukan untuk mengendalikan LED hijau dan   merah sebagai indikator akses.

  2. Setup:<br>
      1.	Fungsi setup() berisi inisialisasi serial communication, inisialisasi bus SPI,                inisialisasi modul MFRC522, dan mengatur pin untuk servo   dan LED.
      2.	Pesan "Tap RFID/NFC Tag on reader" dicetak ke Serial Monitor.
      3.	LED hijau dan merah dimatikan.

  3. Loop: <br>
      1.	Fungsi loop() berisi logika utama program yang terus diulang.
      2.	Jika kartu baru terdeteksi (rfid.PICC_IsNewCardPresent()), maka membaca serial kartu          (rfid.PICC_ReadCardSerial()).
      3.	Memeriksa UID kartu yang dibaca dengan UID yang diizinkan (keyTagUID).
      4.	Jika UID kartu sesuai, mencetak "AKSES DITERIMA", menyalakan LED hijau, menggerakkan             servo ke posisi tertentu, menunggu 3 detik, mengembalikan servo ke posisi awal, dan             mematikan LED hijau.
      5.	Jika UID kartu tidak sesuai, mencetak "AKSES DITOLAK", menampilkan UID kartu yang               mencoba akses, menyalakan LED merah, menunggu 3 detik, dan mematikan LED merah.
      6.	Menjalankan perintah untuk menghentikan kartu (rfid.PICC_HaltA()) dan menghentikan            enkripsi pada PCD (rfid.PCD_StopCrypto1()`).

<p align="justify">Dengan menggunakan kode ini, sistem dapat memberikan akses atau menolak akses berdasarkan kartu RFID yang ditempatkan di dekat pembaca, dengan memberikan respons visual menggunakan LED dan gerakan servo motor.<br>

