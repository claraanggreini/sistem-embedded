# C. ESP-NOW | One-Way, One-to-Many Communication

## 1. Mengirim Pesan yang Sama ke Beberapa Board ESP32

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![rangkaian](https://github.com/FerdyRino/Embedded/assets/151800680/da044986-7b8a-4055-80a2-f1b39760c55a)



### b. Source Code

![code1](https://github.com/FerdyRino/Embedded/assets/151800680/36261cc0-23e8-416c-9692-8d7954d05ca5)



### c. Hasil dan Pembahasan
Pada percobaan ini, digunakan empat buah ESP32, di mana satu ESP berperan sebagai Master (pengirim) dan tiga ESP lainnya berfungsi sebagai Slave (penerima). Peran utama Master adalah sebagai pengendali komunikasi yang menginisiasi dan mengatur aliran instruksi atau data kepada tiga perangkat slave. Proses dimulai dengan master memasukkan MAC Address dari setiap ESP yang menjadi slave. Setelah itu, master mengirimkan data yang sama kepada ketiga slave tersebut. Dengan demikian, komunikasi antara master dan slave terjadi melalui pengiriman data yang disinkronkan, memungkinkan tiga perangkat slave untuk menerima instruksi atau data yang serupa secara bersamaan dari master. Konsep inilah yang membentuk dasar dari pengujian dan eksperimen yang dilakukan dalam percobaan ini, memungkinkan pengembangan sistem komunikasi yang efisien dan terkoordinasi antara ESP32 yang berperan sebagai master dan slave.

##### Master



https://github.com/FerdyRino/Embedded/assets/151800680/a4aed1fb-97fa-471f-b0c5-6c6115f3664f



##### Slave



https://github.com/FerdyRino/Embedded/assets/151800680/b87c6bba-a361-42cf-8e2b-e5c8a11a3c02



##### Salah satu board slave dimatikan
Jika salah satu board slave dimatikan=, maka komunikasi antara master dan slave tersebut akan terputus. Master tidak akan dapat mengirimkan instruksi atau data ke perangkat slave yang dimatikan tersebut, dan slave yang dimatikan juga tidak akan dapat merespons atau menerima data.



https://github.com/FerdyRino/Embedded/assets/151800680/ad3ebe74-4caf-44f9-9b36-dba499605afc



## 2. Mengirim Pesan yang Berbeda ke Beberapa Board ESP32

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![rangakain2](https://github.com/FerdyRino/Embedded/assets/151800680/7ca0efcb-2aaf-4ba3-89b1-865e4fb51b7f)


### b. Source Code

![code2](https://github.com/FerdyRino/Embedded/assets/151800680/5f8e28eb-740b-402a-8145-294249707017)


### c. Hasil dan Pembahasan
Pada percobaan ini, konfigurasi tetap mengadopsi satu ESP sebagai Master dan tiga ESP sebagai Slave, mirip dengan pengaturan sebelumnya. Namun, perbedaan terletak pada jenis data yang dikirimkan kepada setiap Slave. Slave 1 menerima data yang mengandung variabel dengan tipe data integer, sementara Slave 2 menerima data dengan variabel berjenis float, dan terakhir Slave 3 menerima data dengan variabel bertipe string. Perbedaan ini mencerminkan variasi dalam jenis informasi yang dikirimkan kepada setiap perangkat Slave, menunjukkan kemampuan sistem untuk menangani berbagai tipe data. Eksplorasi pengiriman data dengan tipe yang berbeda ini dapat memberikan wawasan yang berharga terkait dengan fleksibilitas dan kemampuan komunikasi antarperangkat dalam suatu jaringan ESP32.

##### Master



https://github.com/FerdyRino/Embedded/assets/151800680/ba790af5-d6e6-4f0c-a056-2efee312d562



##### Slave 1


https://github.com/FerdyRino/Embedded/assets/151800680/7f0d8a18-be46-4813-b019-e01f6093b643




##### Slave 2



https://github.com/FerdyRino/Embedded/assets/151800680/568bad9c-0ce7-4d69-a304-717e28c11ee0



##### Slave 3



https://github.com/FerdyRino/Embedded/assets/151800680/4ed1d371-1d27-4b2f-a564-49d04cdc4080

