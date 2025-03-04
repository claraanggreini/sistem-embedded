# 2. EP32 | A. Capacitive Touch Sensor

## 1. Keterangan Singkat (Abstrak)

<p align="justify">Percobaan ini bertujuan untuk memahami cara kerja protokol komunikasi yang terdapat pada ESP32, seperti UART, I2C, OneWire, SPI. Dilakukan dengan menguji sensor sentuhan pada modul ESP32 melalui serangkaian program. Pertama, nilai sensor sentuhan diukur dengan perubahan nilai pada pin sentuhan. Penggunaan serial plotter memungkinkan visualisasi grafik dinamis terhadap perubahan nilai sensor sentuhan seiring waktu, mengarah ke bawah saat disentuh dan ke atas saat dilepas. Selanjutnya, program mengintegrasikan sensor sentuhan dengan kontrol LED. Saat sensor mendeteksi sentuhan, LED menyala, dan sebaliknya. Variabel isTouched digunakan untuk melacak status sentuhan. Program juga memberikan respons visual berupa kedipan LED setiap 0.5 detik saat sensor disentuh dan memastikan LED mati jika tidak ada sentuhan. Pada eksperimen lainnya, program mencatat jumlah sentuhan dan menampilkannya di serial monitor. Dengan variabel isTouched, jumlah sentuhan hanya dicatat saat sentuhan pertama kali terdeteksi. Terakhir, program menciptakan efek visual dengan LED bergerak dari kiri ke kanan secara berurutan jika sensor sentuhan terdeteksi, menciptakan respons visual yang menarik dan berguna dalam pengembangan proyek dengan interaksi sentuhan.

## 2. Rangkaian
### 2.1 Rangkaian 1 (Untuk langkah 1 hingga 8)
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/bd015340-79f7-4462-a202-e6803af2b103" width="500">

### 2.2 Rangkaian 2 (Untuk langkah 9)
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/8616c7bd-1c72-40bf-8b93-2ee3ceff0fbb" width="500">

## 3. Source Code
### 3.1. Source Code Langkah 1-4

Program dapat dilihat <a href="https://github.com/claraanggreini/sistem-embedded/blob/master/JOB%202/JOB%202%20A/JOB2_A_langkah_2/JOB2_A_langkah_2.ino"> disini </a> atau dibawah ini

<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/323398a8-2da6-4771-a14a-549a836b2daf" width="500">

### 3.2. Source Code Langkah 5-6

Program dapat dilihat <a href="https://github.com/claraanggreini/sistem-embedded/blob/master/JOB%202/JOB%202%20A/JOB2_A_langkah_6/JOB2_A_langkah_6.ino"> disini </a> atau dibawah ini

<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/0851e50e-c98e-41d6-bdf8-52a30ba59cbe" width="500">

### 3.3. Source Code Langkah 7

Program dapat dilihat <a href="https://github.com/claraanggreini/sistem-embedded/blob/master/JOB%202/JOB%202%20A/JOB2_A_langkah_7/JOB2_A_langkah_7.ino"> disini </a> atau dibawah ini

<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/c39988e0-863e-48b5-b9c6-705151433dce" width="500">

### 3.4. Source Code Langkah 8

Program dapat dilihat <a href="https://github.com/claraanggreini/sistem-embedded/blob/master/JOB%202/JOB%202%20A/JOB2_A_langkah_8/JOB2_A_langkah_8.ino"> disini </a> atau dibawah ini

<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/413a1578-6c03-4c05-9218-e105fd99c418" width="500">

### 3.5. Source Code Langkah 9

Program dapat dilihat <a href="https://github.com/claraanggreini/sistem-embedded/blob/master/JOB%202/JOB%202%20A/JOB2_A_langkah_9/JOB2_A_langkah_9.ino"> disini </a> atau dibawah ini

<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/d2bbb386-8d18-4875-8b17-84aa3a1eb765" width="500">

## 4. Hasil dan Pembahasan

### 4.1 Video Langkah 1-2
https://github.com/claraanggreini/sistem-embedded/assets/150989360/3ab6735d-a1a3-42bc-8573-f29020c89050

Pembahasan:<br> 
<p align="justify">Program di atas adalah kode untuk menguji sensor sentuhan pada modul ESP32. Modul ini memiliki pin sentuhan yang dapat mendeteksi sentuhan fisik. Kode ini menggunakan pin sentuhan T0 (Touch0), yang sesuai dengan GPIO 4 pada ESP32.<br>
  
  1. void setup(): Fungsi ini dijalankan sekali saat mikrokontroler pertama kali dinyalakan. Pada kode ini, Serial diinisialisasi dengan kecepatan 115200 bps, kemudian terdapat delay 1000 milidetik (1 detik) untuk memberikan waktu bagi pengguna membuka serial monitor. Terakhir, pesan "ESP32 Touch Test" dicetak ke serial monitor.<br>
  2. void loop(): Fungsi ini berjalan terus-menerus setelah fungsi setup selesai dijalankan. Pada kode ini, nilai dari pin sentuhan (Touch0) yang terhubung ke GPIO 4 dibaca menggunakan fungsi touchRead(4). Nilai yang dibaca kemudian dicetak ke serial monitor. Terdapat juga delay 1000 milidetik (1 detik) sebelum membaca nilai lagi.<br>

<p align="justify">Dengan menjalankan program ini dan membuka serial monitor, maka dapat melihat nilai yang dibaca dari pin sentuhan. Nilai ini akan bervariasi tergantung pada seberapa kuat atau lemah sentuhan yang diberikan pada pin sentuhan tersebut, semakin kuat sentuhannya maka nilainya semakin kecil, begitu pula sebaliknya. Program ini berguna untuk menguji fungsi sensor sentuhan pada modul ESP32 dan dapat membantu dalam pengembangan proyek-proyek yang melibatkan interaksi sentuhan.

### 4.2 Video Langkah 3-4
https://github.com/claraanggreini/sistem-embedded/assets/150989360/600a2cfe-b6ab-4730-b8a7-89d684f6a751

Pembahasan:<br> 
<p align="justify">Dengan menggunakan serial plotter maka akan menampilkan plot grafik yang menunjukkan perubahan nilai sensor sentuhan seiring waktu. Hal ini dapat membantu untuk memahami pola dan variasi nilai sensor sentuhan secara dinamis. Hasilnya adalah Jika sensor disentuh grafiknya mengarah ke bawah dan jika di lepas maka grafiknya mengarah ke atas.

### 4.3 Video Langkah 5-6
https://github.com/claraanggreini/sistem-embedded/assets/150989360/05842439-eead-45c7-a514-7aba4a3adf00

Pembahasan:<br> 
<p align="justify">Program di atas adalah kode untuk menguji sensor sentuhan pada modul ESP32 dan mengendalikan sebuah LED berdasarkan nilai yang dibaca dari pin sentuhan. Modul ini memiliki pin sentuhan yang dapat mendeteksi sentuhan fisik. Kode ini menggunakan pin sentuhan T0 (Touch0), yang sesuai dengan GPIO 4 pada ESP32.<br>
  
  1. const int led = 16;: Mendefinisikan variabel konstan led dengan nilai 16, yang merujuk pada pin GPIO 16 pada ESP32. LED akan dihubungkan ke pin ini.<br>
  2. void setup(): Fungsi ini dijalankan sekali saat mikrokontroler pertama kali dinyalakan. Pada kode ini, Serial diinisialisasi dengan kecepatan 115200 bps, terdapat delay 1000 milidetik (1 detik) untuk memberikan waktu bagi pengguna membuka serial monitor, kemudian pesan "ESP32 Touch Test" dicetak ke serial monitor. Selain itu, pin yang terhubung ke LED (led) diatur sebagai OUTPUT menggunakan pinMode().<br>
   3. void loop(): Fungsi ini berjalan terus-menerus setelah fungsi setup selesai dijalankan. Pada loop, nilai dari pin sentuhan (Touch0) yang terhubung ke GPIO 4 dibaca menggunakan fungsi touchRead(4). Jika nilai yang dibaca kurang dari 20, maka LED yang terhubung ke pin GPIO 16 akan dinyalakan (digitalWrite(led, HIGH)); sebaliknya, jika nilai lebih besar atau sama dengan 20, LED akan dimatikan (digitalWrite(led, LOW)).<br>

Dengan program ini, LED akan menyala saat sensor sentuhan mendeteksi sentuhan dengan tingkat kepekaan tertentu dan LED akan mati jika tidak mendeteksi sentuhan pada sensor.<br>

### 4.4 Video Langkah 7
https://github.com/claraanggreini/sistem-embedded/assets/150989360/806e8629-5429-4198-afc4-86a905844999

Pembahasan:<br> 
<p align="justify">Program di atas adalah kode untuk menguji sensor sentuhan pada modul ESP32 dan mengendalikan LED berdasarkan nilai yang dibaca dari pin sentuhan. <br>
  
  1. const int led = 16;: Mendefinisikan variabel konstan led dan memberikan nilai 16 sebagai nomor pin LED.<br>
  2. bool isTouched = false;: Variabel boolean untuk menyimpan status apakah sensor disentuh sebelumnya.<br>
  3. bool isLedOn = false;: Variabel boolean untuk menyimpan status apakah LED sedang menyala.<br>
  4. void setup(): Fungsi ini dijalankan sekali saat mikrokontroler pertama kali dinyalakan. Mengaktifkan komunikasi serial dengan kecepatan 115200 bps, memberikan delay 1000 milidetik (1 detik) untuk memberikan waktu membuka serial monitor, mencetak teks "ESP32 Touch Test" ke serial monitor, dan mengatur pin LED sebagai pin keluaran.<br>
  5. void loop(): Fungsi ini berjalan terus-menerus setelah fungsi setup selesai dijalankan. Pada loop, nilai dari pin sentuhan (Touch0) yang terhubung ke GPIO 4 dibaca menggunakan fungsi touchRead(4).<br>
  6. Jika nilai sentuhan (touchValue) kurang dari 20, variabel isTouched diatur menjadi true, dan sebaliknya diatur menjadi false.<br>
  7. Selanjutnya, LED diatur berdasarkan status isTouched dan isLedOn. Jika isTouched true dan isLedOn false, LED dinyalakan; sebaliknya, jika isTouched true dan isLedOn true, LED dimatikan. Terdapat juga delay 500 milidetik (0.5 detik) antara setiap blink LED.<br>
  8. Jika isTouched false, LED dimatikan dan isLedOn diatur menjadi false.<br>

Program ini memberikan respons visual pada LED berdasarkan sentuhan pada sensor. Jika sensor disentuh, LED akan berkedip setiap 0.5 detik dan jika tidak disentuh, LED akan mati. Variabel isTouched dan isLedOn digunakan untuk melacak status sentuhan dan status LED saat ini.<br>

### 4.5 Video Langkah 8
https://github.com/claraanggreini/sistem-embedded/assets/150989360/48a4fbf8-2cd4-4f36-b936-8e2f33faa7e5

Pembahasan:<br> 
<p align="justify">Program di atas adalah kode untuk menguji sensor sentuhan pada modul ESP32 dan mengendalikan sebuah LED. <br>
  
  1. const int led = 16;: Mendefinisikan variabel konstan led dan memberikan nilai 16 sebagai nomor pin LED.<br>
  2. bool isTouched = false;: Mendeklarasikan variabel boolean isTouched dan menginisialisasinya sebagai false. Variabel ini menyimpan status apakah sensor disentuh sebelumnya.<br>
  3. int touchCount = 0 : Mendeklarasikan variabel integer 'touchCount dan menginisialisasinya sebagai 0. Variabel ini menyimpan jumlah sentuhan.<br>
  4. void setup(): Fungsi ini dijalankan sekali saat mikrokontroler pertama kali dinyalakan. Pada kode ini, Serial diinisialisasi dengan kecepatan 115200 bps, terdapat delay 1000 milidetik (1 detik) untuk memberikan waktu membuka serial monitor, kemudian pesan ESP32 Touch Test dicetak ke serial monitor. Selain itu, pin yang terhubung ke LED ('led') diatur sebagai OUTPUT menggunakan pinMode().<br>
  5. void loop(): Fungsi ini berjalan terus-menerus setelah fungsi setup selesai dijalankan. Pada setiap iterasi loop, nilai dari pin sentuhan (Touch0) yang terhubung ke GPIO 4 dibaca menggunakan fungsi touchRead(4). Jika nilai yang dibaca kurang dari 20, LED akan dinyalakan dan jumlah sentuhan akan ditambah satu. Informasi ini kemudian dicetak ke serial monitor. Jika nilai lebih besar atau sama dengan 20, LED dimatikan dan status isTouched diatur kembali menjadi false.<br>

<p align="justify">Program ini dirancang untuk memberikan respons visual (LED menyala) dan pencatatan jumlah sentuhan setiap kali sensor sentuhan mendeteksi sentuhan dan jumlah sentuhan tersebut akan ditampilkan pdi serial monitor. Variabel isTouched digunakan untuk memastikan bahwa pencatatan jumlah sentuhan hanya terjadi saat sentuhan pertama kali terdeteksi.<br>

### 4.6 Video Langkah 9
https://github.com/claraanggreini/sistem-embedded/assets/150989360/e8b54d40-b6a0-4ecd-a8fa-7b67e5668738

Pembahasan:<br> 
<p align="justify">Program ini dirancang untuk menguji sensor sentuhan pada modul ESP32 dan mengendalikan tiga buah LED. 
  
1. Inisialisasi Pin dan Variabel:<br>
•  touchPin: Menunjukkan pin sentuhan (Touch 0) yang terhubung ke GPIO 4.<br>
•  led1, led2, led3: Menunjukkan tiga buah LED yang terhubung ke GPIO 16, GPIO 17, dan GPIO 18.<br>
•  runningLedState: Variabel untuk menyimpan status dari LED yang bergerak (running LED).<br>
•  isTouched: Variabel untuk menyimpan status apakah sensor disentuh sebelumnya.<br>
2. Setup:<br>
•	Mengaktifkan komunikasi serial dengan kecepatan 115200 bps.<br>
•	Memberikan waktu 1 detik untuk membuka serial monitor.<br>
•	Mengatur pin sentuhan, LED pertama, LED kedua, dan LED ketiga sebagai input atau output sesuai kebutuhan.<br>
3. Loop:<br>
•	Membaca nilai sensor sentuhan dari pin 'touchPin`' dan mencetaknya ke serial monitor.<br>
•	Jika nilai sentuhan kurang dari 20, menandakan sentuhan terdeteksi, maka 'isTouched' diatur menjadi 1.<br>
•	Jika tidak terdeteksi sentuhan, 'isTouched' diatur menjadi 0.<br>
•	Jika 'isTouched' adalah 1, maka urutan LED 'led1', 'led2', dan 'led3' akan dinyalakan secara bergantian dengan jeda 500 milidetik antara perubahan keadaan LED.<br>
•	Jika 'isTouched' adalah 0, semua LED dimatikan dan diberikan jeda 10 milidetik.<br>
  
Program ini jika sensor sentuhan terdeteksi maka LED akan bergerak secara berurutan dari kiri ke kanan dan berjalan secara loop. 
