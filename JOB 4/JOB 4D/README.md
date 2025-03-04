# 4. EP32 | D.  Akuisi Data dan Kendali Perangkat IoT Menggunakan Protokol MQTT
## 1. Keterangan Singkat (Abstrak)
<p align="justify">Dalam praktikum ini, program ESP32 menggunakan protokol MQTT untuk akuisisi data dari sensor dan kendali perangkat, seperti LED, melalui topik-topik MQTT. Setelah program diunggah, pemantauan dilakukan melalui serial monitor dan dashboard Node-Red untuk mengendalikan nyala LED menggunakan tombol switch pada dashboard. Praktikum kedua melibatkan kendali LED ESP32 menggunakan layanan MQTT dari Adafruit, dengan fokus pada pengendalian LED melalui dashboard yang tersedia di laman Adafruit.

## 2. Source Code
### 2.1. Source Code Kontrol Nyala LED Melalui Dashboard Node-RED

Program dapat dilihat <a href="https://github.com/claraanggreini/sistem-embedded/blob/master/JOB%204/JOB%204D/job_4_D.ino"> disini </a> atau dibawah ini

<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/025d97ff-1722-4803-be90-1557aa6f2511" width="700">

### 2.2. Source Code Kontrol Nyala LED Melalui Dashboard Adafruit

Program dapat dilihat <a href="https://github.com/claraanggreini/sistem-embedded/blob/master/JOB%204/JOB%204D/job_4D-2.ino"> disini </a> atau dibawah ini

<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/9c365899-9dd0-40cf-8cf5-d31e1fd0d2ff" width="700">

## 3. Flow Program
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/868203dd-f135-4405-8f0e-f97fd8f660ec" width="500">

## 4. Flow Chart
### 4.1 Flow Chart Kontrol Nyala LED Melalui Dashboard Node-RED
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/645aa18b-806a-432d-b73b-2fc021aefcb5)" width="500">

### 4.2 Flow Chart Kontrol Nyala LED Melalui Dashboard Adafruit
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/4d0c51bc-c413-40c5-9e20-d4c96cc62fd5" width="500">

## 5. Hasil dan Pembahasan
### 5.1 Hasil dan Pembahasan Kontrol Nyala LED Melalui Dashboard Node-RED
1. Serial monitor<br>
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/be3d333b-0f28-4d1e-98a0-70b1fb43ec8b" width="500"><br>

2. Debug pada Node Red<br>
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/f050925a-ab2f-4404-bb6b-7bd74c1e8e33" width="500"><br>

3. Dashboard Node-Red<br>
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/cb38ec1a-b956-439c-9660-94d5b9f1960f" width="500"><br>

4. Video Hasil
   
https://github.com/claraanggreini/sistem-embedded/assets/150989360/3e14f20f-2a1e-44de-a0c9-0fb72b0cd66e

Pembahasan:<br> 
<p align="justify">Praktikum Akuisisi Data dan Kendali Perangkat IoT Menggunakan Protokol MQTT melibatkan penggabungan konsep MQTT dengan pengaturan nyala LED pada Node-Red dashboard. Proses dimulai dengan menghubungkan LED ke pin D2, yang dapat dikendalikan melalui tombol switch di dashboard Node-Red. Setelah program diunggah, hasil pemantauan pada serial monitor menunjukkan status MQTT connecting.. connected yang artinya sudah terkoneksi. Selain itu, debug node red dan tabel menampilkan data seperti dev-id: 28, level 25, rainfall 5.25, dan flow: 10. Dashboard Node-Red menampilkan data tersebut dalam bentuk grafik dan flow yang dapat diakses melalui web. Yang menarik, pengguna dapat mengontrol LED melalui switch di dashboard web, di mana LED akan menyala jika switch diaktifkan dan sebaliknya. Praktikum ini berhasil menggabungkan MQTT, Node-Red, dan pengendalian perangkat IoT dalam satu sistem yang responsif dan dapat diakses melalui antarmuka web.

### 5.1 Hasil dan Pembahasan Kontrol Nyala LED Melalui Dashboard Adafruit
1. Serial monitor<br>
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/9c04edd8-2632-48d6-b5b4-991a9e13ca95" width="500"><br>

2. Video Hasil

https://github.com/claraanggreini/sistem-embedded/assets/150989360/ac70b4dc-ed03-4916-947d-fdbfd2b91548

Pembahasan:<br> 
<p align="justify">Praktikum Akuisisi Data dan Kendali Perangkat IoT Menggunakan Protokol MQTT Melalui Dashboard Adafruit.io dilakukan dengan pengaturan nyala LED melalui dashboard Adafruit. Setelah membuat akun di io.adafruit.com dan mengonfigurasi dashboard, kita mendefinisikan IO USERNAME dan IO KEY pada program Arduino. Setelah konfigurasi feed selesai, hasilnya adalah pertama pada serial monitor muncul MQTT connecting.. connected yang artinya sudah terkoneksi. lalu pada switch di dashboard Adafruit.io dapat digunakan untuk mengontrol nyala LED, hal ini akan mempengaruhi nilai pada serial monitor  dengan angka 1 saat menyala dan 0 saat mati . Praktikum ini efektif menunjukkan penerapan MQTT dan kendali IoT melalui antarmuka dashboard Adafruit.io.
