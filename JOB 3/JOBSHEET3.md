2. JUDUL : TOPOLOGI JARINGAN LOKAL DAN WIFI
3. TUJUAN
  1) Mahasiswa dapat memahami cara kerja protokol topologi jaringan lokal yang 
     memanfaatkan Wi-Fi untuk berkomunikasi.
  2) Mahasiswa dapat merancang topologi jaringan yang memanfaatkan Wi-Fi untuk 
     penerapan Wireless Sensor Network (WSN) dan Internet of Things (IoT).
  3) Mahasiswa dapat memilih dan menggunakan topologi jaringan yang tepat sesuai 
     dengan kondisi lapangan untuk penerapan WSN dan IoT.
4. ALAT DAN BAHAN
  1) ESP32
  2) Breadboard
  3) Kabel jumper
  4) Sensor DHT 11, RFID
  5) LED (5) dan Push Button (3)
  6) Servo
  7) Resistor 330,1K, 10K Ohm (@ 3)
5. TEORI SINGKAT
Wireless Fidelity atau yang lebih awam kita sebut wifi adalah suatu teknologi
yang menggunakan gelombang radio dalam rentang 2,4GHz sampai dengan 5GHz
untuk menghubungkan perangkat seperti PC/laptop, smartphone, dan perangkat
microcontroller seperti ESP32 dan ESP8266 ke jaringan lokal wireless untuk bisa
mengakses internet. Untuk dapat melakukan akses internet tersebut,maka
perangkat elektronik diatas perlu berada dalam satu titik akses atau hotspot
jaringan nirkabel sehingga terhubung dengan wifi. Pada umumnya jaringan wifi
dapat menjangkau hingga 20 meter didalam ruangan dan lebih dari 20 meter untuk
di luar ruangan. Pada awal kemunculannya, wifi hanya digunakan sebagai
perangkat nirkabel pada jaringan LAN (Local Area Network) akan tetapi karena
pesatnya teknologi di zaman sekarang wifi menjadi kebutuhan sehari-hari untuk
akses jaringan internet dan IoT.

Berbagai data yang kita minta atau kirimkan melalui wifi didistribusikan
melalui gelombang radio di udara. Supaya data tersebut bisa terbaca maka harus
ada yang namanya wireless adaptor yang menghubungkan ke wifi. Gelombang
radio yang berwujud sinyal ini lalu dikirim menuju router yang fungsinya untuk
memecahkan kode. Setelah terbaca maka data dikirim ke jaringan internet yang
memanfaatkan koneksi ethernet. Karena jaringan wifi ini bekerja dua arah maka
tiap data yang diterima dalam waktu yang sama menjadi kode pada tiap paket data
lalu dikirim kembali dalam bentuk sinyal radio yang diterima adaptor komputer
nirkabel.

LANGKAH PERCOBAAN
A. ESP32 Wi-Fi Modes dan Wifi-Scan
1. Pada ESP32, terdapat 3 mode akses untuk Wifi, yaitu WIFI_STA (station
mode : ESP32 sebagai client yang terkoneksi ke access point), WIFI_AP
(access point mode : ESP32 berperan sebagai access point), WIFI_STA_AP
(access point and station : ESP32 dapat terkoneksi dengan access point yang
lain).
2. Buka Arduino IDE dan upload script program berikut ke ESP32 untuk
melakukan scan jaringan Wi-Fi.
![3A](https://github.com/ahnafha/sistembedded/assets/154432108/8b1f4c18-52a4-4b0c-9cd6-56e246f6a446)

3. Buka serial monitor dan dokumentasikan outputnya.
![3Ahasil](https://github.com/ahnafha/sistembedded/assets/154432108/6cdbdfcd-45dd-477d-bba2-5032ef424f7a)

4. Buatlah flow chart program diatas.

B. Menghubungkan ESP32 dengan Jaringan Wi-Fi
1. Buatlah program seperti script dibawah ini, kemudian upload program
tersebut ke ESP32.
![3B](https://github.com/ahnafha/sistembedded/assets/154432108/766a05d0-fe18-4658-8527-ee174356f59d)

2. Buka serial monitor, kemudian dokumentasikan outputnya.
![3Bhasil](https://github.com/ahnafha/sistembedded/assets/154432108/bfb9acf4-e3e9-42ec-9661-a7d489c98819)


https://github.com/ahnafha/sistembedded/assets/154432108/019a5cbc-f479-4e7f-b304-e57f0a38ba37


3. Buatlah flow chart program diatas.

C. Menghubungkan Kembali (Re-connect) ESP32 dengan Jaringan Wi-Fi
1. Buatlah program seperti script dibawah ini, kemudian upload program
tersebut ke ESP32.
![3C](https://github.com/ahnafha/sistembedded/assets/154432108/00671558-f0f6-4bdb-8362-a431c5225fb4)

2. Buka serial monitor, kemudian matikan paket data sebentar hingga koneksi
ESP32 dengan jaringna Wi-Fi terputus. Setelah itu, nyalakan lagi paket data.
Dokumentasikan proses yang terjadi.
3. Buatlah flow chart program diatas.

D. Mengganti Hostname ESP32
1. Buatlah program seperti script dibawah ini, kemudian upload program
tersebut ke ESP32.
![3D](https://github.com/ahnafha/sistembedded/assets/154432108/75681bce-e64a-49d2-8412-fc11fcab5909)

2. Buka serial monitor, kemudian aktifkan mode koneksi Wi-Fi pada Smart-
Phone atau Laptop. Lakukan scan dan lihat daftar jaringan Wi-Fi yang
tersedia. Dokumentasikan hasil keluarannya.
![3DHasil](https://github.com/ahnafha/sistembedded/assets/154432108/182c235c-8afe-4b22-b684-dd08556eb4e9)


https://github.com/ahnafha/sistembedded/assets/154432108/78732b7a-d032-47c0-af5b-99aff07081f4

![Screenshot 2023-12-21 064039](https://github.com/ahnafha/sistembedded/assets/154432108/4308146e-d427-4ab8-b4b6-7e7375891281)

3. Buatlah flow chart program diatas.
E. Mengirim Data Sensor ke Database
![Uploading Screenshot 2023-12-21 064039.png…]()

1. Buatlah rangkaian seperti Gambar di bawah ini.
   1. Install library Asynch Web Server dan Asycnh TCP untuk ESP 32 dengan
cara download dari link berikut ini.
a. https://github.com/me-no-dev/ESPAsyncWebServer
b. https://github.com/me-no-dev/AsyncTCP/archive/master.zip
Install library tersebut secara manual dengan cara menyalin folder hasil
ekstraksi file.zip ke direktori libarary Arduino di folder Document.
2. Buatlah script program seperti berikut ini
![3E](https://github.com/ahnafha/sistembedded/assets/154432108/fc0c0fd1-248b-4c27-a354-00b40833490c)

3. Upload program di atas. Kemudian buka serial monitor untuk mengetahui IP
Address ESP32.


https://github.com/ahnafha/sistembedded/assets/154432108/60fb302e-345c-4f30-aa51-a5e34dd3aa07


4. Akses IP Address ESP32 pada browser laptop. Dokumentasikan hasilnya dan
buatlah flow chart dari program tersebut.
