# B. SP-NOW One-Way Point-to-Point Communication

## 1. Keterangan Singkat (Abstrak)

<p align="justify">

## 2. Rangkaian
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/16a434f2-adc4-4dcd-860d-d47b2940a058" width="500">


## 3. Source Code
### 3.1. Source Code Sender
Program dapat dilihat <a href="https://github.com/claraanggreini/sistem-embedded/blob/master/JOB%202%20.1/JOB%202.1%20B/2.1_B_percobaan/2.1_B_percobaan.ino"> disini </a> atau dibawah ini

<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/3312d7bb-e7e1-406a-944d-4fd41252a0f3" width="500">

### 3.1. Source Code Receiver
Program dapat dilihat <a href="https://github.com/claraanggreini/sistem-embedded/blob/master/JOB%202%20.1/JOB%202.1%20B/2.1_B_percobaan_receiver/2.1_B_percobaan_receiver.ino"> disini </a> atau dibawah ini

<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/9c725f14-2cef-4b1c-bc55-e9ac4d7318b8" width="500">

## 4. Hasil dan Pembahasan

### 4.1. Percobaan
https://github.com/claraanggreini/sistem-embedded/assets/150989360/26f85a36-4669-4e8d-ae89-50c3972b773b

Pembahasan:<br> 
<p align="justify">Kode sender dan receiver dirancang untuk menciptakan komunikasi dua arah antara dua modul ESP32 menggunakan protokol ESP-NOW. Pada bagian inisialisasi dan setup, kedua kode memastikan bahwa ESP-NOW diinisialisasi dengan benar dan ESP32 diatur sebagai station. Kedua kode juga menggunakan struktur data `struct_message` yang sama untuk mengirim dan menerima data. Sender membuat objek `myData` dari struktur tersebut dan menginisialisasi informasi peer untuk penerima. Penerima juga mempersiapkan struktur data dan mendaftarkan fungsi callback `OnDataRecv` untuk menangani data yang diterima. Pada bagian loop, kode sender mengisi objek `myData` dengan nilai acak untuk karakter, integer, float, dan boolean. Selanjutnya, kode sender menggunakan fungsi `esp_now_send` untuk mengirim data ke alamat MAC penerima (broadcastAddress). Pesan yang mencetak ke Serial Monitor memberikan informasi apakah pengiriman berhasil atau gagal. Kode receiver, di dalam loop utamanya yang kosong, menunggu dan menangani data secara asinkron melalui fungsi callback `OnDataRecv`. Ketika data diterima, fungsi callback ini akan dijalankan, dan nilai-nilai dari struktur `myData` akan dicetak ke Serial Monitor, termasuk karakter yang diatur menjadi "INI ADALAH CHAR".

Dengan demikian, pada Serial Monitor sender, dihasilkan pesan "Data berhasil terkirim" jika pengiriman berhasil, sedangkan pada Serial Monitor receiver, nilai-nilai dari struktur `myData` akan dicetak dengan karakter "INI ADALAH CHAR" yang diatur pada kode sender. Keberhasilan komunikasi antara sender dan receiver dapat dipastikan dengan melihat output yang sesuai di kedua Serial Monitor.<br>

### 4.1. Tugas
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/c5099319-dfad-43c8-b23a-319cb390ff73" width="500">

Pembahasan:<br> 
<p align="justify">.<br>
