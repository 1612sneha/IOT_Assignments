#include<ESP8266WiFi.h>
#include<WiFiClient.h>

const char *ssid = "AKSHU";
const char *password = "Akshu@2200";


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  Serial.println("Connecting to WiFi ......");
  while(WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi is connected !!!");
  Serial.print("IP Address : ");
  Serial.println(WiFi.localIP());

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Inside loop()");
  delay(2000);
}



