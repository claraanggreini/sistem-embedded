# JOBSHEET 2.1 - JARINGAN SENSOR NIRKABEL MENGGUNAKAN ESP-NOW

## Abstrak
<p align="justify">ESP-NOW adalah protokol komunikasi tanpa Wi-Fi yang dikembangkan oleh Espressif untuk ESP32. Protokol ini memungkinkan perangkat saling berkomunikasi pada frekuensi 2.4GHz 
dengan konfigurasi awal menggunakan alamat MAC. Setelah terpasang, jaringan peer-to-peer terbentuk, memungkinkan koneksi tetap ada tanpa perlu melakukan handshaking ulang. 
Jika salah satu perangkat ESP32 mati atau diatur ulang, koneksi otomatis dipulihkan saat restart ke perangkat pasangannya yang telah ditentukan alamatnya.</p>

<p align="justify">Jobsheet ini bertujuan untuk memahami konsep topologi jaringan sensor nirkabel berbasis ESP-NOW, melakukan konfigurasi berbagai topologi ESP-NOW, dan menganalisis dan menentukan topologi ESP-NOW,sesuai dengan
studi kasus proyek.</p>

**Sub-job** pada jobsheet ini, antara lain:
1. <a href="https://github.com/claraanggreini/sistem-embedded/tree/master/JOB%202%20.1/JOB%202.1%20A#readme">Memperoleh MAC Address ESP32 Receiver
2. <a href="https://github.com/claraanggreini/sistem-embedded/tree/master/JOB%202%20.1/JOB%202.1%20B#readme">ESP-NOW One-Way Point-to-Point Communication
3. <a href="https://github.com/claraanggreini/sistem-embedded/blob/master/JOB%202%20.1/JOB%202.1%20C/c.md">One-Way, One-to-Many Communication
4. <a href="https://github.com/claraanggreini/sistem-embedded/blob/master/JOB%202%20.1/JOB%202.1%20D/d.md">One-Way, Many-to-One Communication
5. <a href="https://github.com/claraanggreini/sistem-embedded/blob/master/JOB%202%20.1/JOB%202.1%20E/e.md">Two-Way Communication

## Alat dan Bahan
**Alat dan Bahan** yang digunakan dalam praktikum ini, antara lain:
1) ESP32
2) Breadboard
3) Kabel jumper
4) Resistor 10K Ohm
5) Sensor DHT11

> [!NOTE]  
> *Buka folder-folder subjob untuk melihat laporan percobaan*

