//KELOMPOK 1
//Ahnaf Haris           4.31.21.0.01
//Clara Silvia Anggreni 4.31.21.0.10
//Ferdy Rino Damara     4.31.21.0.12

#include <esp_now.h>
#include <WiFi.h>

// Ganti dengan Mac Address ESP32 Receiver
uint8_t broadcastAddress[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};

// Struktur pesan sender dan receiver harus sama
typedef struct struct_message {
  char a[32];
  int b;
  float c;
  bool d;
} struct_message;

// Driver untuk struktur pesan
struct_message myData;

esp_now_peer_info_t peerInfo;

// fungsi callback
void OnDataSent(const uint8_t *mac_addr, esp_now_send_status_t status) {
  Serial.print("\r\nStatus Paket Terakhir :\t");
  Serial.println(status == ESP_NOW_SEND_SUCCESS ? "Sukses Terkirim" : "Gagal Terkirim");
}

void setup() {
  // Init Serial Monitor
  Serial.begin(115200);
  
  // Set ESP32 sebagai station
  WiFi.mode(WIFI_STA);
  
  // Init ESP-NOW
  if (esp_now_init() != ESP_OK) {
    Serial.println("Gagal menginisialisasi ESP-NOW");
    return;
  }

  // Fungsi akses register cb untuk perintah mengirim data
  esp_now_register_send_cb(OnDataSent);
 
  // Register peer
  memcpy(peerInfo.peer_addr, broadcastAddress, 6);
  peerInfo.channel = 0; 
  peerInfo.encrypt = false;

  // Add peer 
  if (esp_now_add_peer(&peerInfo) != ESP_OK){
    Serial.println("Gagal menambahkan peer");
    return;
  }
}

void loop() {
  // Set values to send
  strcpy(myData.a, "INI ADALAH CHAR");
  myData.b = random(1,20);
  myData.c = 1.2;
  myData.d = false;
 
  // Send message via ESP-NOW
  esp_err_t result = esp_now_send(broadcastAddress, (uint8_t *) &myData, sizeof(myData));
 
  if (result == ESP_OK) {
    Serial.println("Data berhasil terkirim");
  }
  else {
    Serial.println("Gagal mengirim data");
  }
  delay(2000);
}

#include <esp_now.h>
#include <WiFi.h>

// Struktur pesan sender dan receiver harus sama
typedef struct struct_message {
  char a[32];
  int b;
  float c;
  bool d;
} struct_message;

// Driver struktur pesan
struct_message myData;

// fungsi callback yang akan dieksekusi ketika ada pesan diterima
void OnDataRecv(const uint8_t * mac, const uint8_t *incomingData, int len) {
  memcpy(&myData, incomingData, sizeof(myData));
  Serial.print("Bytes received: ");
  Serial.println(len);
  Serial.print("Char: ");
  Serial.println(myData.a);
  Serial.print("Int: ");
  Serial.println(myData.b);
  Serial.print("Float: ");
  Serial.println(myData.c);
  Serial.print("Bool: ");
  Serial.println(myData.d);
  Serial.println();
}

void setup() {
  // Initialize Serial Monitor
  Serial.begin(115200);
  
  // Set ESP32 sebagai station
  WiFi.mode(WIFI_STA);
  
  // Init ESP-NOW
  if (esp_now_init() != ESP_OK) {
    Serial.println("Error initializing ESP-NOW");
    return;
  }
  
  // Fungsi akses register cb untuk proses penerimaan data
  esp_now_register_recv_cb(OnDataRecv);
}

void loop() {
  // Loop kosong, karena penerimaan data akan ditangani oleh callback
}
