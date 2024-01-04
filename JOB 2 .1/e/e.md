# E. ESP-NOW | Two-Way Communication

## 1. Cek DHT11

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![rangkaian1](https://github.com/FerdyRino/Embedded/assets/151800680/586f5bca-ad51-49ca-bec2-6767dc70c5eb)


### b. Source Code

![code1](https://github.com/FerdyRino/Embedded/assets/151800680/7ef7168c-8107-43b3-a1ce-c4d59b50519c)


### c. Hasil dan Pembahasan
Percobaan ini bertujuan untuk menguji kinerja sensor DHT11 dengan mengintegrasikannya ke dalam board ESP dan menjalankan program tertentu. Proses pengujian melibatkan pengecekan fungsi sensor dengan mengamati output yang ditampilkan pada serial monitor. Jika sensor DHT11 beroperasi dengan baik, hasil pembacaan suhu dan kelembaban oleh sensor akan ditampilkan secara langsung pada serial monitor. Dengan demikian, percobaan ini tidak hanya memverifikasi keberhasilan koneksi antara sensor dan ESP board, tetapi juga memastikan akurasi dan responsivitas sensor dalam mengukur suhu dan kelembaban lingkungan sekitar. Output yang terlihat pada serial monitor menjadi indikator utama kesuksesan percobaan ini, memastikan bahwa sensor DHT11 dapat diandalkan untuk memantau kondisi lingkungan dengan akurasi yang diperlukan.



https://github.com/FerdyRino/Embedded/assets/151800680/32b5e14a-a5bd-42e3-af7d-7ca5474f6715



## 2. Two-Way Communication

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![rangkaian2](https://github.com/FerdyRino/Embedded/assets/151800680/2ad450f1-da10-4f00-b1d2-80f6c5cb047d)


### b. Source Code

![code2](https://github.com/FerdyRino/Embedded/assets/151800680/4bb14cbd-ccc3-4dae-94bf-5c9d5324000a)


### c. Hasil dan Pembahasan
Percobaan ini melibatkan penggunaan dua board ESP32 yang saling berkomunikasi, menciptakan suatu sistem di mana hasil dari sensor pada ESP A dikirimkan ke ESP B dan sebaliknya, terjadi secara teratur dalam interval waktu tertentu. Program yang dijalankan dalam percobaan ini menggabungkan fungsi pengiriman dan penerimaan data antara kedua perangkat ESP32, sambil juga melibatkan pembacaan sensor pada masing-masing perangkat secara bersamaan. Inti dari percobaan ini adalah menciptakan integrasi yang efisien antara dua ESP32, memungkinkan pertukaran data sensor secara bidirectional dalam suatu jaringan. Dengan adanya fungsi ini, percobaan ini dapat memberikan wawasan tentang kehandalan dan kecepatan komunikasi antar-board ESP32 serta kemampuan sistem untuk melakukan tugas ganda seperti membaca sensor dan mentransfer data secara bersamaan.



https://github.com/FerdyRino/Embedded/assets/151800680/6c3813e9-f8d1-48f0-8a16-9021033c56e2

