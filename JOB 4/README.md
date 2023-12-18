# JOBSHEET 4 - TRANSMISI DATA MENGGUNAKAN PROTOKOL HTTP DAN MQTT


## Abstrak
<p align="justify">HTTP) Praktikum ini bertujuan untuk memahami dan menerapkan protokol HTTP dan MQTT dalam transmisi data pada Platform IoT Node-Red. Dengan fokus pada akuisisi data dan kendali, selain itu praktikum ini juga bertujuan untuk memahami cara kerja protokol HTTP dan MQTT untuk memonitor dan mengendalikan perangkat IoT. Melibatkan konfigurasi perangkat IoT, dimana peran IoT sebagai lingkungan yang efisien untuk mengumpulkan, menyimpan, dan menampilkan data dari berbagai sumber. Praktikum menyoroti penggunaan HTTP sebagai protokol aplikasi yang melayani permintaan data dari pengguna dan manajemen website, sementara MQTT, sebagai protokol komunikasi M2M, memiliki overhead rendah dan cocok untuk transmisi data dari Node Sensor ke Server. Percobaan praktis mencakup langkah-langkah seperti pengaturan SSID dan password Wi-Fi ESP32, transmisi data dengan protokol HTTP dan MQTT, akuisisi data, dan kendali perangkat IoT. Selain itu, praktikum menantang untuk membuat Multi-Protocol Server (HTTP dan MQTT) pada Node-Red untuk aplikasi Smart-Home dengan dua node pada dashboard, satu untuk memantau suhu dan kelembapan, dan yang lainnya untuk mengendalikan lampu LED menggunakan protokol MQTT. </p>

Terdapat 5 percobaan dalam jobsheet ini yaitu :
1. <a href="https://github.com/claraanggreini/sistem-embedded/tree/master/JOB%204/JOB%204A#readme">Setting SSID dan Password Wi-Fi ESP32 melalui Web Server</a>
2. **Transmisi Data Menggunakan Protokol HTTP**
3. <a href="https://github.com/claraanggreini/sistem-embedded/tree/master/JOB%204/JOB%204C">Transmisi Data Menggunakan Protokol MQTT</a>
4. **Akuisi Data dan Kendali Perangkat IoT Menggunakan Protokol MQTT**
5. **Pertanyaan dan Tugas**

## Alat dan Bahan

Alat dan bahan yang digunakan dalam jobsheet ini, antara lain:
  1. ESP32 dan Server Node-Red
  2. Breadboard
  3. Kabel jumper
  4. Sensor DHT 11
  5. LED (5) 
  7. Resistor 330, 1K, 10K Ohm (3)


# 1. Setting SSID dan Password Wi-Fi ESP32 melalui Web Server

## Flow Chart

<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/6ac11528-263c-4209-ac74-5e1cb9fc3509" width="500">

## Source Code
### Source Code Setting SSID dan Password Wi-Fi ESP32 melalui Web Server

Program dapat dilihat <a href="https://github.com/claraanggreini/sistem-embedded/blob/master/JOB%204/JOB%204A/JOB4_A/JOB4_A.ino"> disini </a> atau dibawah ini

<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/97c137aa-6da6-456d-96c6-b2bc1fea5b69" width="500">


## Hasil dan Pembahasan
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/4d627f1c-bdcd-420a-9a5d-1b86a91cbb15" width="500">

<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/a1d84a90-e48e-4361-9f82-09f4a91edd9d" width="500">

Pembahasan:<br> 
<p align="justify">Langkah pertama dari percobaan ini adalah mengatur SSID dan password Wi-Fi pada ESP32 melalui Web Server. Script Arduino IDE yang disediakan berfungsi untuk membaca dan menyimpan SSID serta password pada EEPROM, selain itu juga menangani koneksi Wi-Fi. Setelah mengunggah script, ESP32 akan mencoba terhubung ke jaringan Wi-Fi yang telah disimpan sebelumnya. Jika tidak berhasil, ESP32 akan menjadi HotSpot dan memungkinkan pengguna untuk mengatur ulang SSID dan password melalui Web Server. Pada tahap kedua, setelah mengunggah script, perlu membuka serial monitor Arduino IDE. Jika ESP32 belum terhubung dengan jaringan, ESP32 akan menampilkan daftar SSID Wi-Fi yang tersedia. Kemudian, pengguna dapat mengakses alamat IP yang ditampilkan di serial monitor pada browser dan mengisi formulir yang disediakan dengan SSID dan password yang sesuai. Hasil dari percobaan ini menunjukkan bahwa ESP32 berhasil terhubung ke jaringan Wi-Fi dengan SSID "infinix GT10" secara sukses.<br>

