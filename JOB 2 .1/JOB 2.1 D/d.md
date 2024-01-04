# D. ESP-NOW | One-Way, Many-to-One Communication

## One-Way, Many-to-One Communication

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![rangkaian](https://github.com/FerdyRino/Embedded/assets/151800680/52b85418-9c1b-41ac-b001-675da60551a0)


### b. Source Code

![code1](https://github.com/FerdyRino/Embedded/assets/151800680/80c2357a-249c-41ab-8a07-915035591de2)


### c. Hasil dan Pembahasan
Dalam percobaan ini, istilah "One" merujuk pada perangkat penerima tunggal, sementara "Many" mengacu pada banyak perangkat pengirim. Dengan konfigurasi ini, satu perangkat penerima (One) menerima data dari beberapa perangkat pengirim (Many) secara bersamaan atau bergantian, tanpa memberikan respons atau balasan kepada perangkat pengirim. Dalam konteks percobaan ini, satu ESP32 berfungsi sebagai penerima, sementara tiga ESP32 lainnya bertindak sebagai pengirim. Output yang dihasilkan dari eksperimen ini mencerminkan kemampuan perangkat penerima tunggal untuk menerima data dari beberapa sumber pengirim tanpa adanya umpan balik. Hasil dari percobaan ini dapat memberikan pemahaman lebih lanjut tentang efisiensi dan kinerja sistem dalam menangani komunikasi antarperangkat dalam skenario One-to-Many.

##### Master



https://github.com/FerdyRino/Embedded/assets/151800680/5556d924-2192-4b99-983e-d3f3fd0f97a5



##### Slave



https://github.com/FerdyRino/Embedded/assets/151800680/ccb0b1f9-4caa-4bed-af8b-370075de34d0




