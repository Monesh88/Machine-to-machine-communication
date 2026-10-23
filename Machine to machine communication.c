#include <WiFi.h> 
#include <FirebaseESP32.h> 
#include <DHT.h> 
 
#define WIFI_SSID "Your_SSID" 
#define WIFI_PASSWORD "Your_PASSWORD" 
#define API_KEY "Your_API_Key" 
#define DATABASE_URL "https://your-database.firebaseio.com/" 
 
FirebaseData fbdo; 
FirebaseAuth auth; FirebaseConfig config; 
 
DHT dht(4, DHT11);  // DHT11 connected to GPIO4 
 
void setup() { 
  Serial.begin(115200); 
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);   while (WiFi.status() != WL_CONNECTED) { 
    delay(500);     Serial.print(".");   } 
  config.api_key = API_KEY;   config.database_url = DATABASE_URL;   Firebase.begin(&config, &auth);   dht.begin(); 
} 
 void loop() { 
  float temperature = dht.readTemperature();   float humidity = dht.readHumidity(); 
   if (Firebase.RTDB.setFloat(&fbdo, "/Sensor/Temperature", temperature) && 
      Firebase.RTDB.setFloat(&fbdo, "/Sensor/Humidity", humidity)) { 
    Serial.println("Data updated successfully"); 
  } else { 
    Serial.println("Error updating data"); 
  } 
  delay(2000); } 
