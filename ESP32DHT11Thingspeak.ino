/*
 * Temperature Data Logger 
 * by : Asep Nurul Haq - Robotik SIKL
 * 
 * Description : Using ESP32 & multiple DHT11 to upload temperature and humidity data to Thingspeak
 * 
 * Hardware:
 * - DHT11 are connected to pin 18 & 19
 * 
 * Note:
 * - When uploading, hold BOOT button on the ESP32 when connecting is shown.
 * - After upload completed, press EN on the ESP32 to reset and run the code
 * 
 */

// Bahagian Pustaka
#include <WiFi.h>
#include "DHT.h"
#include "ThingSpeak.h"

// Tetapan Sensor DHT
#define DHTTYPE DHT11
const int sensorDHT1 = 18;
const int sensorDHT2 = 19;
DHT dht1(sensorDHT1, DHTTYPE);
DHT dht2(sensorDHT2, DHTTYPE);

// Tetapan Thingspeak
char * ssid = "rumah kami";   // your network SSID (name) 
char * pass = "0178795869";   // your network password
int keyIndex = 0;            // your network key Index number (needed only for WEP)
WiFiClient  client;

unsigned long myChannelNumber = 1342645;
const char * myWriteAPIKey = "KJK6UCQ8FNQRF5IG";

long previousMillis = 0;
long interval = 20000;

void setup() 
{
  //Initialize serial
  Serial.begin(115200);  
  
  // Tetapan untuk DHT
  dht1.begin();
  dht2.begin();
   
  // Tetapan Thingspeak
  WiFi.mode(WIFI_STA);   
  ThingSpeak.begin(client);    
}
 
void loop() 
{
  // Membuat sambungan ke WiFi
  if(WiFi.status() != WL_CONNECTED)
  {
    Serial.print("Attempting to connect to SSID: ");
    Serial.println(ssid);
    while(WiFi.status() != WL_CONNECTED)
    {
      WiFi.begin(ssid, pass); // Connect to WPA/WPA2 network. Change this line if using open or WEP network
      Serial.print(".");
      delay(5000);     
    } 
    Serial.println("\nConnected.");
  }
    
  delay(2000);

  float t1 = dht1.readTemperature();
  float h1 = dht1.readHumidity();
  float t2 = dht1.readTemperature();
  float h2 = dht1.readHumidity();
  
  // Menghantar data ke Thingspeak setiap 20 saat
  unsigned long currentMillis = millis();
  if(currentMillis - previousMillis > interval)
  {
    previousMillis = currentMillis; 
    ThingSpeak.setField(1, t1);
    ThingSpeak.setField(2, h1);
    ThingSpeak.setField(3, t2);
    ThingSpeak.setField(4, h2);    
    int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
    if(x == 200)
    {
      Serial.println("Channel update successful.");
    }
    else
    {
      Serial.print("Problem updating channel. HTTP error code ");  
      Serial.println(String(x));    
    }
    delay(1000);
  }      
}
