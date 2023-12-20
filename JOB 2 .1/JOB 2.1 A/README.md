# A. Memperoleh MAC Address ESP32 Receiver

## 1. Keterangan Singkat (Abstrak)

<p align="justify">

## 2. Source Code
### 2.1. Source Code

Program dapat dilihat <a href="https://github.com/claraanggreini/sistem-embedded/blob/master/JOB%202/JOB%202%20A/JOB2_A_langkah_2/JOB2_A_langkah_2.ino"> disini </a> atau dibawah ini

<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/dfb04a79-e597-48cb-b34e-d996d0b5e63c" width="500">

## 3. Hasil dan Pembahasan

### 3.1 Video 
https://github.com/claraanggreini/sistem-embedded/assets/150989360/3ab6735d-a1a3-42bc-8573-f29020c89050

Pembahasan:<br> 
<p align="justify">Program di atas adalah kode untuk menguji sensor sentuhan pada modul ESP32. Modul ini memiliki pin sentuhan yang dapat mendeteksi sentuhan fisik. Kode ini menggunakan pin sentuhan T0 (Touch0), yang sesuai dengan GPIO 4 pada ESP32.<br>
  
  1. void setup(): Fungsi ini dijalankan sekali saat mikrokontroler pertama kali dinyalakan. Pada kode ini, Serial diinisialisasi dengan kecepatan 115200 bps, kemudian terdapat delay 1000 milidetik (1 detik) untuk memberikan waktu bagi pengguna membuka serial monitor. Terakhir, pesan "ESP32 Touch Test" dicetak ke serial monitor.<br>
  2. void loop(): Fungsi ini berjalan terus-menerus setelah fungsi setup selesai dijalankan. Pada kode ini, nilai dari pin sentuhan (Touch0) yang terhubung ke GPIO 4 dibaca menggunakan fungsi touchRead(4). Nilai yang dibaca kemudian dicetak ke serial monitor. Terdapat juga delay 1000 milidetik (1 detik) sebelum membaca nilai lagi.<br>

<p align="justify">Dengan menjalankan program ini dan membuka serial monitor, maka dapat melihat nilai yang dibaca dari pin sentuhan. Nilai ini akan bervariasi tergantung pada seberapa kuat atau lemah sentuhan yang diberikan pada pin sentuhan tersebut, semakin kuat sentuhannya maka nilainya semakin kecil, begitu pula sebaliknya. Program ini berguna untuk menguji fungsi sensor sentuhan pada modul ESP32 dan dapat membantu dalam pengembangan proyek-proyek yang melibatkan interaksi sentuhan.

