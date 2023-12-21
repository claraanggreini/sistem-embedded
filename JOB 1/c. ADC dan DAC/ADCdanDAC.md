# C. ADC (Analog to Digital Converter) dan DAC (Digital to Analog Converter)

## 1. Membaca Nilai Analog dari Potensiometer

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![rangkaian](https://github.com/FerdyRino/SistemEmbedded/assets/151800680/b1346fa5-ae9c-4646-ae3a-4571b5c2cb35)


### b. Code

![c-1](https://github.com/FerdyRino/SistemEmbedded/assets/151800680/9681c0d5-31d7-4592-92f7-1c70be95a174)


### c. Hasil dan Pembahasan
Percobaan ini melibatkan pembacaan nilai potensiometer yang terhubung ke pin GPIO 34 (ADC1_CH6) pada platform ESP32. Setiap 500 milidetik, nilai potensiometer dibaca dan kemudian dicetak ke Serial Monitor. Output yang terlihat pada Serial Monitor berupa deretan nilai-nilai potensiometer yang berkisar antara 0 hingga 4095, mengingat bahwa ADC pada ESP32 memiliki resolusi sebesar 12-bit.

https://github.com/FerdyRino/SistemEmbedded/assets/151800680/359e8cd0-b2cd-4bfa-8cac-36e1d485cf64




## 2. ADC dan DAC | Mengatur Kecerahan LED Menggunakan Potensiometer

### a. Langkah
Buatlagh program dengan menambahkan LED pada GPIO 5, kemudian putar potensiometer dari nilai terendah hingga 
nilai tertinggi. Amati yang terjadi, analisis dan dokumentasikan hasilnya.



### b. Code

![c-2](https://github.com/FerdyRino/SistemEmbedded/assets/151800680/b03f5eed-240a-44ae-a572-043a096e16d0)


### c. Hasil dan Pembahasan
Program ini memiliki dua output utama yang ditampilkan pada Serial Monitor. Pertama, nilai pembacaan dari potensiometer (sensorValue) yang berkisar antara 0 hingga 4095 karena resolusi ADC pada ESP32 adalah 12-bit. Kedua, nilai keluaran yang diatur pada LED menggunakan PWM (outputValue), yang telah dipetakan ke rentang 0 hingga 255

https://github.com/FerdyRino/SistemEmbedded/assets/151800680/83b7a431-4ce4-4368-8ea0-83529f2e8f2f

