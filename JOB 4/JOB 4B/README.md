# 4. EP32 | B. Transmisi Data Menggunakan Protokol HTTP

## 1. Keterangan Singkat (Abstrak)

<p align="justify">Praktikum "Transmisi Data Menggunakan Protokol HTTP" melibatkan pembuatan database lokal "banjir_db" dan tabel "smartwater" melalui phpMyAdmin. Eksperimen ini mengintegrasikan kode JSON pada program Multi-Protocol IoT Server ke Node-RED. Pada tahap selanjutnya, ESP32 melakukan transmisi data dummy ke Node-Red menggunakan protokol HTTP (GET dan POST). Hasil eksperimen mencakup output dari serial monitor, debugging Node-Red, dan tampilan dashboard Node-RED. Praktikum ini bertujuan mendemonstrasikan penggunaan protokol HTTP dalam mentransmisikan data antara perangkat dan Node-RED dengan metode GET dan POST.

## 2. Source Code
### 2.1. Source Code Langkah 1-6 ( transmisi data dummy menuju Node-Red menggunakan protokol HTTP metode Get)

Program dapat dilihat <a href="https://github.com/claraanggreini/sistem-embedded/blob/master/JOB%204/JOB%204B/job_4b.ino"> disini </a> atau dibawah ini

<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/1084b9dd-6d50-4745-af5d-6ed44ee9c3f3" width="700">

### 2.2. Source Code Langkah 7-9 ( transmisi data dummy menuju Node-Red menggunakan protokol HTTP metode POST)

Program dapat dilihat <a href="https://github.com/claraanggreini/sistem-embedded/blob/master/JOB%204/JOB%204B/job_4b-2.ino"> disini </a> atau dibawah ini

<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/a692464a-a1ed-4075-b28b-768bb465777d" width="700">

## 3. Flow Program
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/868203dd-f135-4405-8f0e-f97fd8f660ec" width="500">

## 4. Flow Chart
### 4.1 Flow Chart Langkah 1-6 ( transmisi data dummy menuju Node-Red menggunakan protokol HTTP metode Get)
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/f007e59f-dce4-42b4-8066-99ac169b720f" width="500">

### 4.2 Flow Chart Langkah 7-9 ( transmisi data dummy menuju Node-Red menggunakan protokol HTTP metode POST)
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/add2f1b0-a5ba-4fd6-a01a-ea76ed9f217e" width="500">

## 5. Hasil dan Pembahasan
### 5.1 Hasil dan Pembahasan transmisi data dummy menuju Node-Red menggunakan protokol HTTP metode Get
1. Serial monitor<br>
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/7574a82b-7634-434e-93c5-8c59d19f2f03" width="500"><br>

2. Debug pada Node Red<br>
      <img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/c222603a-ca58-4b6b-bb8d-8825aba194d4" width="500"><br>

3. Dashboard Node-Red<br>
      <img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/c308f98a-f506-4921-96a5-e9b920c7c3d5" width="500"><br>

4. Tabel<br>
      <img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/00b7cc7d-5732-4785-bfc7-98c086ec91f7" width="500"><br>

Pembahasan:<br> 
<p align="justify">Praktikum "Transmisi Data Menggunakan Protokol HTTP (GET)" melibatkan langkah-langkah mulai dari pembuatan dan pengisian database "banjir_db" dengan tabel "smartwater" sesuai panduan jobsheet. Node-Red-dashboard diinstal, dan kode JSON Multi-Protocol IoT Server diimpor ke Node-Red untuk menampilkan flow rangkaian. Selanjutnya, dilakukan instalasi library JSON5 pada Arduino, diikuti dengan mengunggah program protokol HTTP (GET). Setelah sukses diunggah, dilakukan klik "Deploy" pada Node-Red. Hasil praktikum mencakup munculnya keterangan dev_id: 28, level: 5, rainfall: 10.2, flow: 12, dan status: 1 pada serial monitor, tabel, dan debug di Node-Red, serta terpantau pada dashboard Node-Red melalui tampilan web dalam bentuk flow. Praktikum ini berhasil mendemonstrasikan transmisi data menggunakan protokol HTTP (GET) antara perangkat dan Node-Red dengan integrasi yang efektif.

### 5.2 Hasil dan Pembahasan transmisi data dummy menuju Node-Red menggunakan protokol HTTP metode POST
1. Serial monitor<br>
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/3a2f9ec5-1bd4-4465-852f-8a6e5bfc1f32" width="500"><br>

2. Debug pada Node Red<br>
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/07ef68d8-8256-4308-9744-1f30c41a67e2" width="500"><br>

3. Dashboard Node-Red<br>
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/6e510932-5eac-4544-b2c5-50d113a73a8b" width="500"><br>

4. Tabel<br>
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/156991a3-0440-4e18-a813-99c98c24910e" width="500"><br>

Pembahasan:<br> 
<p align="justify">Transmisi Data Menggunakan Protokol HTTP (POST) melibatkan langkah-langkah seperti pembuatan database "banjir_db", pengisian tabel "smartwater", instalasi node-red-dashboard, dan impor kode JSON Multi-Protocol IoT Server ke Node-Red. Selanjutnya, dilakukan instalasi library JSON5 pada Arduino, diikuti dengan mengunggah program protokol HTTP (POST).
Setelah berhasil diunggah, dilakukan klik "Deploy" pada Node-Red. Hasil praktikum mencakup tampilan "HTTP response code is: 200" pada serial monitor, serta munculnya keterangan "dev_id: 28, level: 58, rainfall: 9.2, flow: 10, dan status: 1" pada debug di Node-Red, sesuai dengan data tabel yang diakses. Pada dashboard Node-Red, data tersebut tergambar dalam bentuk grafik dan flow pada tampilan web. Praktikum ini berhasil mendemonstrasikan transmisi data menggunakan protokol HTTP (POST), di mana data yang dikirim dari perangkat dapat diakses dan divisualisasikan dengan baik melalui Node-Red, termasuk tampilan dalam bentuk grafik pada dashboard yang memudahkan pemantauan dan analisis. Keberhasilan ini menunjukkan efektivitas protokol HTTP (POST) dalam transmisi data IoT pada lingkungan Node-Red.
