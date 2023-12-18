![2  B (3)](https://github.com/claraanggreini/sistem-embedded/assets/150989360/299acd56-2ad3-46ae-aa0a-d73c8708e5b3)# 1. EP32 | B. Mengakses Sensor DHT 11 (Single Wire / BUS)

## 1. Keterangan Singkat (Abstrak)

<p align="justify">Percobaan ini bertujuan untuk memahami cara kerja protokol komunikasi menggunakan sensor DHT 11 yang terdiri dari dua bagian terpisah, dengan setiap bagian bertanggung jawab untuk fungsi tertentu. Bagian pertama menekankan penggunaan ESP32 dan sensor sentuh yang terhubung ke pin GPIO tertentu. Selain itu, juga memanfaatkan variabel isTouched untuk menyimpan status apakah sensor disentuh sebelumnya. 

## 2. Rangkaian
### 2.1 Rangkaian 1 (Untuk langkah 3)
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/9374e1b6-7046-4baa-9b58-ffccb34a0bc3" width="500">

### 2.2 Rangkaian 2 (Untuk langkah 4)
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/32125933-927f-4358-a0ae-4aa975b1096d" width="500">

## 3. Source Code
### 3.1. Source Code Langkah 1-3

Program dapat dilihat <a href="https://github.com/claraanggreini/sistem-embedded/blob/master/JOB%202/JOB%202%20B/JOB2_B_langkah_3/JOB2_B_langkah_3.ino"> disini </a> atau dibawah ini

<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/da062124-8752-42ed-8b75-90f9ff95f191" width="500">

### 3.2. Source Code Langkah 4

Program dapat dilihat <a href="https://github.com/claraanggreini/sistem-embedded/blob/master/JOB%202/JOB%202%20B/JOB2_B_langkah_4/JOB2_B_langkah_4.ino"> disini </a> atau dibawah ini

<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/ed65d795-1505-4bbb-8bfb-5a116fa2e439" width="500">


## 4. Hasil dan Pembahasan

### 4.1 Video Langkah 1-3
https://github.com/claraanggreini/sistem-embedded/assets/150989360/7aa65f52-94b2-4164-a02e-280385ab2a18

Pembahasan:<br> 
<p align="justify">Program ini terdiri dari dua bagian yang terpisah, masing-masing bertanggung jawab untuk fungsi tertentu. Pada bagian Pertama (Touch Sensor dan LED) menggunakan ESP32 untuk membaca nilai dari sensor sentuh (Touch Sensor) yang terhubung ke pin GPIO 4. Terdapat tiga LED yang terhubung ke pin GPIO 16, 17, dan 18. Jika nilai yang dibaca dari sensor sentuh kurang dari 20, program akan mengatur running LED untuk bergerak dari kiri ke kanan dengan memberikan jeda 500 milidetik antara perubahan keadaan LED. Jika sensor tidak disentuh, semua LED dimatikan dan diberi jeda 10 milidetik. Program menggunakan variabel `isTouched` untuk menyimpan status apakah sensor disentuh sebelumnya. Pada bagian Kedua menggunakan DHT11 Sensor untuk Suhu dan Kelembaban).Ada tiga library yang digunakan yakni DHT Sensor Library, Adafruit Unified Sensor Lib, dan DHT.h. Dalam loop, program menunggu selama 2 detik sebelum membaca data dari sensor. Program mencetak nilai kelembaban, suhu dalam derajat Celsius, dan suhu dalam derajat Fahrenheit ke serial monito dan jika pembacaan sensor gagal, program mencetak pesan kesalahan.

### 4.2 Video Langkah 4
https://github.com/claraanggreini/sistem-embedded/assets/150989360/899ad4b5-dadf-48aa-abdf-d14bb39dedbd

Pembahasan:<br> 
<p align="justify">Program ini terdiri dari dua bagian yang terpisah, masing-masing bertanggung jawab untuk fungsi tertentu. Bagian Pertama (Touch Sensor dan LED). Program ini menggunakan ESP32 dengan tiga LED yang terhubung ke pin GPIO 16, 17, dan 18. Sensor sentuh (Touch Sensor) terhubung ke pin GPIO 4. Program membaca nilai dari sensor sentuh dan mencetak nilainya ke serial monitor. Jika nilai sensor sentuh kurang dari 20, program mengatur variabel isTouched menjadi 1. Jika isTouched sama dengan 1, program mengatur urutan LED dengan memberikan jeda 500 milidetik antara perubahan keadaan LED. Jika tidak disentuh, semua LED dimatikan. Terdapat duplikasi fungsi setup() yang harus diatasi. Bagian Kedua (DHT11 Sensor untuk Suhu dan Kelembaban). Program ini menggunakan sensor suhu dan kelembaban DHT11. Ada tiga LED (ledh, ledk, ledm) dan sebuah buzzer yang terhubung ke pin GPIO 5, 18, 19, dan 21. Program mencetak pesan ke serial monitor dan membaca nilai kelembaban dan suhu dari sensor DHT11. Jika pembacaan sensor berhasil, program menghitung indeks panas dalam Fahrenheit dan Celsius. Jika suhu lebih dari 32°C, program menyalakan LEDM dan menghidupkan buzzer selama 500 milidetik, kemudian mematikan buzzer selama 500 milidetik. Jika suhu kurang dari atau sama dengan 32°C, program mengatur urutan LEDH, LEDK, LEDM, LEDK secara bergantian dengan jeda 500 milidetik antara perubahan keadaan.

