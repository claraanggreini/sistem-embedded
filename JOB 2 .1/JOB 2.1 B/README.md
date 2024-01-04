# B. SP-NOW One-Way Point-to-Point Communication

## 1. Rangkaian
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/16a434f2-adc4-4dcd-860d-d47b2940a058" width="500">


## 2. Source Code
### 2.1. Source Code Sender
Program dapat dilihat <a href="https://github.com/claraanggreini/sistem-embedded/blob/master/JOB%202%20.1/JOB%202.1%20B/2.1_B_percobaan/2.1_B_percobaan.ino"> disini </a> atau dibawah ini

<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/3312d7bb-e7e1-406a-944d-4fd41252a0f3" width="500">

### 2.2. Source Code Receiver
Program dapat dilihat <a href="https://github.com/claraanggreini/sistem-embedded/blob/master/JOB%202%20.1/JOB%202.1%20B/2.1_B_percobaan_receiver/2.1_B_percobaan_receiver.ino"> disini </a> atau dibawah ini

<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/9c725f14-2cef-4b1c-bc55-e9ac4d7318b8" width="500">

## 3. Hasil dan Pembahasan

### 3.1. Percobaan 2 ESP
https://github.com/claraanggreini/sistem-embedded/assets/150989360/26f85a36-4669-4e8d-ae89-50c3972b773b

Pembahasan:<br> 
<p align="justify">Kode sender dan receiver dirancang untuk menciptakan komunikasi dua arah antara dua modul ESP32 menggunakan protokol ESP-NOW. Pada bagian inisialisasi dan setup, kedua kode memastikan bahwa ESP-NOW diinisialisasi dengan benar dan ESP32 diatur sebagai station. Kedua kode juga menggunakan struktur data `struct_message` yang sama untuk mengirim dan menerima data. Sender membuat objek `myData` dari struktur tersebut dan menginisialisasi informasi peer untuk penerima. Penerima juga mempersiapkan struktur data dan mendaftarkan fungsi callback `OnDataRecv` untuk menangani data yang diterima. Pada bagian loop, kode sender mengisi objek `myData` dengan nilai acak untuk karakter, integer, float, dan boolean. Selanjutnya, kode sender menggunakan fungsi `esp_now_send` untuk mengirim data ke alamat MAC penerima (broadcastAddress). Pesan yang mencetak ke Serial Monitor memberikan informasi apakah pengiriman berhasil atau gagal. Kode receiver, di dalam loop utamanya yang kosong, menunggu dan menangani data secara asinkron melalui fungsi callback `OnDataRecv`. Ketika data diterima, fungsi callback ini akan dijalankan, dan nilai-nilai dari struktur `myData` akan dicetak ke Serial Monitor, termasuk karakter yang diatur menjadi "INI ADALAH CHAR".

<p align="justify">Dengan demikian, pada Serial Monitor sender, dihasilkan pesan "Data berhasil terkirim" jika pengiriman berhasil, sedangkan pada Serial Monitor receiver, nilai-nilai dari struktur `myData` akan dicetak dengan karakter "INI ADALAH CHAR" yang diatur pada kode sender. Keberhasilan komunikasi antara sender dan receiver dapat dipastikan dengan melihat output yang sesuai di kedua Serial Monitor.<br>

### 3.2. Percobaan mengirimkan data dummy dengan ukuran yang terbaca oleh receiver 250 byte
<p align="justify">Diperlukan untuk mengubah nilai char a[] menjadi 236

    typedef struct struct_message {
     char a[236];
     int b;
     float c;
     bool d;
    }

Hasilnya pada receiver adalah sebagai berikut:<br>
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/98cd7831-6042-4f4b-9e2d-a420032925a9" width="500">

Pembahasan:<br> 
<p align="justify">Dengan mengubah ukuran array karakter `a` dalam struktur data `struct_message` menjadi 236 byte, total ukuran struktur tersebut menjadi 245 byte. Ketika data dikirim dari sender ke receiver menggunakan protokol ESP-NOW, receiver akan menerima total 248 byte data, termasuk data dari struktur `struct_message` yang baru dan beberapa byte tambahan yang mungkin terkait dengan protokol komunikasi, seperti overhead atau informasi tambahan yang dibutuhkan untuk proses transfer. Oleh karena itu, output pada Serial Monitor receiver akan menampilkan pesan "Bytes received: 248", mencerminkan ukuran total data yang diterima, yang terdiri dari struktur `struct_message` yang baru dan tambahan byte terkait dengan protokol ESP-NOW.<br>

### 3.3. Percobaan Tugas
Hasilnya adalah sebagai berikut:<br>
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/8aa3de74-c4be-473b-bfff-eac71c13a706" width="500">

Pembahasan:<br> 
<p align="justify">Dari hasil tabel yang disajikan, dapat disimpulkan bahwa proses pengiriman data antara ESP sender dan receiver berjalan dengan baik dalam segala kondisi, dengan persentase packet loss sebesar 0% dan keberhasilan pengiriman sebesar 100%. Hal ini menunjukkan bahwa sistem komunikasi menggunakan protokol ESP-NOW dapat diandalkan dan efisien dalam mengirimkan data antara kedua perangkat.

<p align="justify">Namun, diperhatikan bahwa meskipun keberhasilan pengiriman mencapai 100%, terdapat catatan bahwa semakin jauh jarak antara ESP sender dan receiver akan mengakibatkan peningkatan delay pada penerima. Peningkatan delay ini dapat disebabkan oleh faktor-faktor seperti kelemahan sinyal atau interferensi yang dapat terjadi seiring dengan peningkatan jarak komunikasi.<br>
    
>*Note: Dokumentasi percobaan dapat dilihat pada folder "<a href="https://github.com/claraanggreini/sistem-embedded/tree/master/JOB%202%20.1/JOB%202.1%20B/job%202.1%20B%20dokumentasi%20tugas"> job 2.1 B dokumentasi tugas </a>"*
