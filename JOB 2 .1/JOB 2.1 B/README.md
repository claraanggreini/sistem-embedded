# A. Memperoleh MAC Address ESP32 Receiver

## 1. Keterangan Singkat (Abstrak)

<p align="justify">

## 2. Source Code
### 2.1. Source Code Percobaan
Program dapat dilihat <a href="https://github.com/claraanggreini/sistem-embedded/blob/master/JOB%202/JOB%202%20A/JOB2_A_langkah_2/JOB2_A_langkah_2.ino"> disini </a> atau dibawah ini

<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/3312d7bb-e7e1-406a-944d-4fd41252a0f3" width="500">

### 2.1. Source Code Tugas
Program dapat dilihat <a href=""> disini </a> atau dibawah ini

<img src="" width="500">

## 3. Hasil dan Pembahasan

### 3.1 Video 
https://github.com/claraanggreini/sistem-embedded/assets/150989360/287c7157-47da-42d6-b696-88fb71558a41

Pembahasan:<br> 
<p align="justify">Program di atas menggunakan ESP32 dan pustaka WiFi untuk mendapatkan alamat MAC perangkat dan mencetaknya ke Serial Monitor. Pada tahap setup(), komunikasi serial diinisiasi dengan kecepatan baud 115200, mode WiFi diatur sebagai mode Station (penerima), dan kemudian alamat MAC perangkat diambil menggunakan fungsi WiFi.macAddress() dan dicetak ke Serial Monitor. Hasilnya, pada saat program dijalankan, Serial Monitor akan menampilkan alamat MAC ESP32, yakni dalam hal ini adalah "C8:F0:9E:F5:2E:6C". Program ini berguna untuk memantau alamat MAC yang unik untuk identifikasi perangkat ESP32 tertentu, memfasilitasi manajemen jaringan dan debugging.<br>
