# 1. EP32 | A. Capacitive Touch Sensor

## 1. Keterangan Singkat (Abstrak)

Percobaan ini bertujuan untuk memahami cara kerja protokol komunikasi yang terdapat pada ESP32, seperti UART, I2C, OneWire, SPI. Dilakukan dengan menguji sensor sentuhan pada modul ESP32 melalui serangkaian program. Pertama, nilai sensor sentuhan diukur dengan perubahan nilai pada pin sentuhan. Penggunaan serial plotter memungkinkan visualisasi grafik dinamis terhadap perubahan nilai sensor sentuhan seiring waktu, mengarah ke bawah saat disentuh dan ke atas saat dilepas. Selanjutnya, program mengintegrasikan sensor sentuhan dengan kontrol LED. Saat sensor mendeteksi sentuhan, LED menyala, dan sebaliknya. Variabel 'isTouched' digunakan untuk melacak status sentuhan. Program juga memberikan respons visual berupa kedipan LED setiap 0.5 detik saat sensor disentuh dan memastikan LED mati jika tidak ada sentuhan. Pada eksperimen lainnya, program mencatat jumlah sentuhan dan menampilkannya di serial monitor. Dengan variabel 'isTouched', jumlah sentuhan hanya dicatat saat sentuhan pertama kali terdeteksi. Terakhir, program menciptakan efek visual dengan LED bergerak dari kiri ke kanan secara berurutan jika sensor sentuhan terdeteksi, menciptakan respons visual yang menarik dan berguna dalam pengembangan proyek dengan interaksi sentuhan.

## 2. Rangkaian
### Rangkaian 1 (Untuk langkah 1 hingga 8)
<img src="https://github.com/sabrinavirry/Sistem-Embedded/assets/151721571/a175edaa-7eb8-41b2-aad1-dbb8a9c13f3f" width="500">

### Rangkaian 2 (Untuk langkah 9)
<img src="https://github.com/sabrinavirry/Sistem-Embedded/assets/151721571/a175edaa-7eb8-41b2-aad1-dbb8a9c13f3f" width="500">

## 3. Source Code
Program dapat dilihat <a href="https://github.com/sabrinavirry/Sistem-Embedded/blob/master/jobsheet%202/a.%20EP32%20Capacitive%20Touch%20Sensor/1.%20program%20contoh%20touch%20test/touch_1.ino"> disini </a> atau dibawah ini
<img src="https://github.com/sabrinavirry/Sistem-Embedded/assets/151721571/a7fa7af9-3a41-4f59-b262-d289d74a95a7" width="800">

## 4. Hasil dan Pembahasan

### Video Langkah 1-2
Pembahasan: 
Program di atas adalah kode untuk menguji sensor sentuhan pada modul ESP32. Modul ini memiliki pin sentuhan yang dapat mendeteksi sentuhan fisik. Kode ini menggunakan pin sentuhan T0 (Touch0), yang sesuai dengan GPIO 4 pada ESP32.
•	void setup(): Fungsi ini dijalankan sekali saat mikrokontroler pertama kali dinyalakan. Pada kode ini, Serial diinisialisasi dengan kecepatan 115200 bps, kemudian terdapat delay 1000 milidetik (1 detik) untuk memberikan waktu bagi pengguna membuka serial monitor. Terakhir, pesan "ESP32 Touch Test" dicetak ke serial monitor.<br>
•	void loop(): Fungsi ini berjalan terus-menerus setelah fungsi setup selesai dijalankan. Pada kode ini, nilai dari pin sentuhan (Touch0) yang terhubung ke GPIO 4 dibaca menggunakan fungsi touchRead(4). Nilai yang dibaca kemudian dicetak ke serial monitor. Terdapat juga delay 1000 milidetik (1 detik) sebelum membaca nilai lagi.<br>
Dengan menjalankan program ini dan membuka serial monitor, maka dapat melihat nilai yang dibaca dari pin sentuhan. Nilai ini akan bervariasi tergantung pada seberapa kuat atau lemah sentuhan yang diberikan pada pin sentuhan tersebut, semakin kuat sentuhannya maka nilainya semakin kecil, begitu pula sebaliknya. Program ini berguna untuk menguji fungsi sensor sentuhan pada modul ESP32 dan dapat membantu dalam pengembangan proyek-proyek yang melibatkan interaksi sentuhan.

### Video Langkah 3-4
Dengan menggunakan serial plotter maka akan menampilkan plot grafik yang menunjukkan perubahan nilai sensor sentuhan seiring waktu. Hal ini dapat membantu untuk memahami pola dan variasi nilai sensor sentuhan secara dinamis. Hasilnya adalah Jika sensor disentuh grafiknya mengarah ke bawah dan jika di lepas maka grafiknya mengarah ke atas.

### Video Langkah 5-6
Program di atas adalah kode untuk menguji sensor sentuhan pada modul ESP32 dan mengendalikan sebuah LED berdasarkan nilai yang dibaca dari pin sentuhan. Modul ini memiliki pin sentuhan yang dapat mendeteksi sentuhan fisik. Kode ini menggunakan pin sentuhan T0 (Touch0), yang sesuai dengan GPIO 4 pada ESP32.<br>
•	const int led = 16;: Mendefinisikan variabel konstan led dengan nilai 16, yang merujuk pada pin GPIO 16 pada ESP32. LED akan dihubungkan ke pin ini.<br>
•	void setup(): Fungsi ini dijalankan sekali saat mikrokontroler pertama kali dinyalakan. Pada kode ini, Serial diinisialisasi dengan kecepatan 115200 bps, terdapat delay 1000 milidetik (1 detik) untuk memberikan waktu bagi pengguna membuka serial monitor, kemudian pesan "ESP32 Touch Test" dicetak ke serial monitor. Selain itu, pin yang terhubung ke LED (led) diatur sebagai OUTPUT menggunakan pinMode().<br>
•	void loop(): Fungsi ini berjalan terus-menerus setelah fungsi setup selesai dijalankan. Pada loop, nilai dari pin sentuhan (Touch0) yang terhubung ke GPIO 4 dibaca menggunakan fungsi touchRead(4). Jika nilai yang dibaca kurang dari 20, maka LED yang terhubung ke pin GPIO 16 akan dinyalakan (digitalWrite(led, HIGH)); sebaliknya, jika nilai lebih besar atau sama dengan 20, LED akan dimatikan (digitalWrite(led, LOW)).
Dengan program ini, LED akan menyala saat sensor sentuhan mendeteksi sentuhan dengan tingkat kepekaan tertentu dan LED akan mati jika tidak mendeteksi sentuhan pada sensor.<br>

### Video Langkah 7
Program di atas adalah kode untuk menguji sensor sentuhan pada modul ESP32 dan mengendalikan LED berdasarkan nilai yang dibaca dari pin sentuhan. <br>
•	const int led = 16;: Mendefinisikan variabel konstan led dan memberikan nilai 16 sebagai nomor pin LED.<br>
•	bool isTouched = false;: Variabel boolean untuk menyimpan status apakah sensor disentuh sebelumnya.<br>
•	bool isLedOn = false;: Variabel boolean untuk menyimpan status apakah LED sedang menyala.<br>
•	void setup(): Fungsi ini dijalankan sekali saat mikrokontroler pertama kali dinyalakan. Mengaktifkan komunikasi serial dengan kecepatan 115200 bps, memberikan delay 1000 milidetik (1 detik) untuk memberikan waktu membuka serial monitor, mencetak teks "ESP32 Touch Test" ke serial monitor, dan mengatur pin LED sebagai pin keluaran.<br>
•	void loop(): Fungsi ini berjalan terus-menerus setelah fungsi setup selesai dijalankan. Pada loop, nilai dari pin sentuhan (Touch0) yang terhubung ke GPIO 4 dibaca menggunakan fungsi touchRead(4).<br>
•	Jika nilai sentuhan (touchValue) kurang dari 20, variabel isTouched diatur menjadi true, dan sebaliknya diatur menjadi false.<br>
•	Selanjutnya, LED diatur berdasarkan status isTouched dan isLedOn. Jika isTouched true dan isLedOn false, LED dinyalakan; sebaliknya, jika isTouched true dan isLedOn true, LED dimatikan. Terdapat juga delay 500 milidetik (0.5 detik) antara setiap blink LED.<br>
•	Jika isTouched false, LED dimatikan dan isLedOn diatur menjadi false.
Program ini memberikan respons visual pada LED berdasarkan sentuhan pada sensor. Jika sensor disentuh, LED akan berkedip setiap 0.5 detik dan jika tidak disentuh, LED akan mati. Variabel isTouched dan isLedOn digunakan untuk melacak status sentuhan dan status LED saat ini.<br>

### Video Langkah 8
Program di atas adalah kode untuk menguji sensor sentuhan pada modul ESP32 dan mengendalikan sebuah LED. <br>
•	const int led = 16;: Mendefinisikan variabel konstan led dan memberikan nilai 16 sebagai nomor pin LED.<br>
•	bool isTouched = false;: Mendeklarasikan variabel boolean isTouched dan menginisialisasinya sebagai false. Variabel ini menyimpan status apakah sensor disentuh sebelumnya.<br>
•	'int touchCount = 0 : Mendeklarasikan variabel integer 'touchCount dan menginisialisasinya sebagai 0. Variabel ini menyimpan jumlah sentuhan.<br>
•	'void setup(): Fungsi ini dijalankan sekali saat mikrokontroler pertama kali dinyalakan. Pada kode ini, Serial diinisialisasi dengan kecepatan 115200 bps, terdapat delay 1000 milidetik (1 detik) untuk memberikan waktu membuka serial monitor, kemudian pesan ESP32 Touch Test dicetak ke serial monitor. Selain itu, pin yang terhubung ke LED ('led') diatur sebagai OUTPUT menggunakan pinMode().<br>
•	void loop(): Fungsi ini berjalan terus-menerus setelah fungsi setup selesai dijalankan. Pada setiap iterasi loop, nilai dari pin sentuhan (Touch0) yang terhubung ke GPIO 4 dibaca menggunakan fungsi touchRead(4). Jika nilai yang dibaca kurang dari 20, LED akan dinyalakan dan jumlah sentuhan akan ditambah satu. Informasi ini kemudian dicetak ke serial monitor. Jika nilai lebih besar atau sama dengan 20, LED dimatikan dan status isTouched diatur kembali menjadi false.
Program ini dirancang untuk memberikan respons visual (LED menyala) dan pencatatan jumlah sentuhan setiap kali sensor sentuhan mendeteksi sentuhan dan jumlah sentuhan tersebut akan ditampilkan pdi serial monitor. Variabel isTouched digunakan untuk memastikan bahwa pencatatan jumlah sentuhan hanya terjadi saat sentuhan pertama kali terdeteksi.<br>

### Video Langkah 9
Program ini dirancang untuk menguji sensor sentuhan pada modul ESP32 dan mengendalikan tiga buah LED. 
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






![A1 -GIF](https://github.com/brianrahma/brian-system-embedded/assets/82065700/9c47b131-de2f-461a-8ef7-82372f1d5113)

<p align="justify">Dari praktikum ini merupakan sketsa (sketch) untuk penguji sentuhan (touch test) pada modul ESP32 menggunakan pin sentuh Touch0. Hasilnya saat kabel jumper disentuh (berfungsi sebagai sensor) maka dibaca nilai digital dan tampil pada serial monitor.
<br></br>

# 2. EP32 | LED menyala ketika Sensor disentuh

## 1. Keterangan Singkat (Abstrak)

Dalam percobaan ini program dibuat untuk dapat menghasilkan LED akan memberikan respon menyala apabila sensor disentuh().

## 2. Rangkaian

<img src="https://github.com/sabrinavirry/Sistem-Embedded/assets/151721571/a175edaa-7eb8-41b2-aad1-dbb8a9c13f3f" width="500">

## 3. Source Code

Program dapat dilihat <a href="https://github.com/sabrinavirry/Sistem-Embedded/blob/master/jobsheet%202/a.%20EP32%20Capacitive%20Touch%20Sensor/2.%20LED%20menyala%20ketika%20sensor%20disentuh%2C%20dan%20LED%20akan%20mati%20ketika%20sensor%20tidak%20disentuh/touch_2.ino"> disini </a> atau dibawah ini
<img src="https://github.com/sabrinavirry/Sistem-Embedded/assets/151721571/c6c95bb7-e30f-444d-8647-563d43122433" width="800">

## 4. Hasil dan Pembahasan

### Hasil Percobaan

![A2 -GIF](https://github.com/brianrahma/brian-system-embedded/assets/82065700/cac2a02f-19f3-4078-8398-693716043600)

<p align="justify">Pada percobaan ini merupakan pengujian touch sensor dengan ditambahkan kontrol LED yang akan menyala ketika sentuhan terdeteksi. Hasilnya saat ada sentuhan maka LED akan menyala dan saat tidak ada sentuhan LED akan mati.
<br></br>

# 3. EP32 | Ketika sensor disentuh maka LED Blink akan menyala

## 1. Keterangan Singkat (Abstrak)

Dalam percobaan ini program dibuat untuk dapat melihat ketika sensor disentuh, LED akan menyala Blink dan menampilkan angka yang akan bertambah setiap kali sensor disentuh.

## 2. Rangkaian

<img src="https://github.com/sabrinavirry/Sistem-Embedded/assets/151721571/a175edaa-7eb8-41b2-aad1-dbb8a9c13f3f" width="500">

## 3. Source Code

Program dapat dilihat <a href="https://github.com/sabrinavirry/Sistem-Embedded/blob/master/jobsheet%202/a.%20EP32%20Capacitive%20Touch%20Sensor/3.%20ketika%20sensor%20disentuh%2C%20LED%20menyala%20Blink/touch_3.ino"> disini </a> atau dibawah ini
<img src="https://github.com/sabrinavirry/Sistem-Embedded/assets/151721571/58c30ecc-3956-4c74-baf2-fbbc00b837d9" width="800">

## 4. Hasil dan Pembahasan

### Hasil Percobaaan

![A3 -GIF](https://github.com/brianrahma/brian-system-embedded/assets/82065700/fff6f9c0-11f3-4fad-ac58-d290e9ddfe1c)

<p align="justify">Program ini menggunakan ESP32 yang mengontol LED untuk menyala Blink ketika touch sensor disentuh. 
<br></br>

# 4. EP32 | Saat LED menyala Serial Monitor menampilkan angka yang akan bertambah setiap kali sensor disentuh

## 1. Keterangan Singkat (Abstrak)

Dalam percobaan ini program dibuat untuk menguji sentuhan pada modul ESP32 dengan menambahkan fitur penghitungan sentuhan saat LED menyala

## 2. Rangkaian

<img src="https://github.com/sabrinavirry/Sistem-Embedded/assets/151721571/a175edaa-7eb8-41b2-aad1-dbb8a9c13f3f" width="500">

## 3. Source Code

Program dapat dilihat <a href="https://github.com/sabrinavirry/Sistem-Embedded/blob/master/jobsheet%202/a.%20EP32%20Capacitive%20Touch%20Sensor/4.%20ketika%20LED%20menyala%20Serial%20Monitor%20menampilkan%20angka%20yang%20akan%20bertambah%20setiap%20kali%20sensor%20disentuh/touch_4.ino"> disini </a> atau dibawah ini
<img src="https://github.com/sabrinavirry/Sistem-Embedded/assets/151721571/143daddd-db19-40c0-a695-77d3cc0cf1e1" width="800">

## 4. Hasil dan Pembahasan

### Hasil Percobaan 

![A4 -GIF](https://github.com/brianrahma/brian-system-embedded/assets/82065700/88aab4cf-7d8a-4b73-8a2a-468da4fdc2f5)

<p align="justify">Dalam percobaan ini saat touch sensor disentuh maka LED menyala dan pada Serial Monitor akan menampilkan angka yang akan bertambah setiap kali sensor disentuh.
<br></br>

# 5. EP32 | LED nyala running saat sensor disentuh

## 1. Keterangan Singkat (Abstrak)
Dalam percobaan ini digunakan 3 LED yang akan menyala running saat sensor disentuh. Jika tidak ada sentuhan yang terdeteksi, semua LED dimatikan.

## 2. Rangkaian

<img src="https://github.com/brianrahma/brian-system-embedded/assets/82065700/a2ec94fc-6dae-40a9-9d52-f26ad5704a8e" width="600">

## 3. Source Code

Program dapat dilihat <a href="https://github.com/sabrinavirry/Sistem-Embedded/blob/master/jobsheet%202/a.%20EP32%20Capacitive%20Touch%20Sensor/5.%20LED%20nyala%20running%20saat%20sensor%20disentuh/touch_5.ino"> disini</a> atau dibawah ini
<img src="https://github.com/sabrinavirry/Sistem-Embedded/assets/151721571/83c476ae-a76f-447c-9ecf-2c20fee24fd4" width="800">

## 4. Hasil dan Pembahasan

### Hasil Percobaan

![A5 -GIF](https://github.com/brianrahma/brian-system-embedded/assets/82065700/7dc1c2e8-8bf7-4603-84e6-d7bd56f8a6a0)

<p align="justify">Dengan program di atas dalam percobaan ini yaitu ketika sensor disentuh, LED akan menyala menjadi running LED yang bergerak dari kiri ke kanan, kemudian kanan ke kiri secara kontinyu. Hasil output dari program ini akan menampilkan nilai sensor sentuh pada Serial Monitor. Kesimpulannya, program ini membuat 3 LED untuk menyala menjadi running LED ketika sensor disentuh.
