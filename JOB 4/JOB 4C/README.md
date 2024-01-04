# 4. EP32 | C. Transmisi Data Menggunakan Protokol HTTP

## 1. Keterangan Singkat (Abstrak)

<p align="justify">Abstrak:
Pada praktikum ini, dilakukan implementasi protokol MQTT dengan menggunakan server broker EMQX. Setelah berhasil mengunggah program, tahap pemantauan dilakukan melalui serial monitor guna memverifikasi koneksi, sementara debugging dilakukan melalui Node-RED. Output dari percobaan ini mencakup data yang dipublikasikan ke topik "flood/node1". Selain itu, data tersebut juga divisualisasikan secara grafis pada dashboard Node-RED. Hasil ini menunjukkan keberhasilan implementasi MQTT dalam mentransmisikan data dan efektifitas visualisasi pada  Node-RED.

## 2. Source Code
Program dapat dilihat <a href="https://github.com/claraanggreini/sistem-embedded/blob/master/JOB%204/JOB%204C/job_4C.ino"> disini </a> atau dibawah ini

<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/2ef7ee38-6327-454b-baa2-5aa3b65516ca" width="700">

## 3. Flow Program
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/868203dd-f135-4405-8f0e-f97fd8f660ec" width="500">

## 4. Flow Chart
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/649faec9-9147-4243-86e6-b99e350d3dcf" width="500">

## 5. Hasil dan Pembahasan
1. Serial monitor<br>
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/11848a43-2cbe-442f-8201-411d9f85a527" width="500"><br>

2. Debug pada Node Red<br>
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/9dd30260-95bc-4cab-8f5e-383b2d9a3e79" width="500"><br>

3. Dashboard Node-Red<br>
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/85bcf148-1c89-4375-8847-8ff4a03e1d42" width="500"><br>

4. Tabel<br>
<img src="https://github.com/claraanggreini/sistem-embedded/assets/150989360/aeded00f-8096-41d6-a80b-de6347fe2f0d" width="500"><br>

Pembahasan:<br> 
<p align="justify">Pada praktikum Transmisi Data Menggunakan Protokol MQTT, dilakukan menggunakan protokol MQTT dengan server broker EMQX. EMQX dirancang khusus untuk mengelola dan mendukung komunikasi publikasi-berlangganan (publish-subscribe) seperti MQTT, yang sangat relevan dalam konteks Internet of Things (IoT). Setelah berhasil mengunggah program, data dummy seperti dev_id, level, rainfall, dan flow dipublish ke topik "flood/node1". Pada serial monitor, akan muncul informasi "Wifi connected" beserta alamat IP yang telah berhasil terhubung. Selanjutnya, pada tabel dan debug di Node-RED, terdapat output yang mencakup dev_id: 28, level: 25, rainfall: 5.25, dan flow: 10. Informasi tersebut juga ditampilkan dalam bentuk grafik pada dashboard Node-RED yang dapat diakses melalui web. Seluruh proses ini mencerminkan keberhasilan implementasi protokol MQTT menggunakan server broker EMQX dalam mentransmisikan data secara efisien antar perangkat dalam konteks IoT.
