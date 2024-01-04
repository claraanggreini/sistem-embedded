# 4. EP32 | A. Setting SSID dan Password Wi-Fi ESP32 melalui Web Server

## 1. Keterangan Singkat (Abstrak)

<p align="justify">Praktikum ini dilakukan dengan pengaturan SSID dan password Wi-Fi pada ESP32 melalui Web Server. Script Arduino IDE memungkinkan penyimpanan konfigurasi pada EEPROM, dengan ESP32 mencoba terhubung ke jaringan Wi-Fi terlebih dahulu. Hasil praktikum menunjukkan koneksi sukses dengan SSID "infinix GT10". Praktikum ini memberikan pemahaman praktis dalam mengimplementasikan konfigurasi jaringan nirkabel pada ESP32 melalui pendekatan Web Server.

## 3. Rangkaian
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/a33422d8-7ac3-4c71-a0e4-ae7316f23112" width="500">

## 4. Flow Chart

<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/ee9e85e0-9a7c-472e-b901-0737c83038aa" width="500">

## 5. Source Code
### Source Code Setting SSID dan Password Wi-Fi ESP32 melalui Web Server

Program dapat dilihat <a href="https://github.com/claraanggreini/sistem-embedded/blob/master/JOB%204/JOB%204A/JOB4_A/JOB4_A.ino"> disini </a> atau dibawah ini

<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/97c137aa-6da6-456d-96c6-b2bc1fea5b69" width="500">


## 6. Hasil dan Pembahasan
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/4d627f1c-bdcd-420a-9a5d-1b86a91cbb15" width="500">

<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/a1d84a90-e48e-4361-9f82-09f4a91edd9d" width="500">

Pembahasan:<br> 

<p align="justify">Langkah pertama dari percobaan ini adalah mengatur SSID dan password Wi-Fi pada ESP32 melalui Web Server. Script Arduino IDE yang disediakan berfungsi untuk membaca dan menyimpan SSID serta password pada EEPROM, selain itu juga menangani koneksi Wi-Fi. Setelah mengunggah script, ESP32 akan mencoba terhubung ke jaringan Wi-Fi yang telah disimpan sebelumnya. Jika tidak berhasil, ESP32 akan menjadi HotSpot dan memungkinkan pengguna untuk mengatur ulang SSID dan password melalui Web Server. Pada tahap kedua, setelah mengunggah script, perlu membuka serial monitor Arduino IDE. Jika ESP32 belum terhubung dengan jaringan, ESP32 akan menampilkan daftar SSID Wi-Fi yang tersedia. Kemudian, pengguna dapat mengakses alamat IP yang ditampilkan di serial monitor pada browser dan mengisi formulir yang disediakan dengan SSID dan password yang sesuai. Hasil dari percobaan ini menunjukkan bahwa ESP32 berhasil terhubung ke jaringan Wi-Fi dengan SSID "infinix GT10" secara sukses dengan keterangan "connected to infinix GT 10 Pro Successfully" <br>
