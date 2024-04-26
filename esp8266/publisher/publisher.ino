#include<ESP8266WiFi.h>
#include<ArduinoMqttClient.h>
#include<WiFiClient.h>
const char *ssid = "SUNBEAM";
const char *password  = "1010101010";

const char *broker = "172.18.7.93";
const int port = 1883;

WiFiClient wific;
MqttClient mqttc(wific);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(A0, INPUT);

  WiFi.begin(ssid, password);
  while(WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");
    delay(1000);
  }
  Serial.println("Connected to WiFi");

  if(!mqttc.connect(broker, port))
    while(1);

  Serial.println("Connected to Broker");
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(A0);
  mqttc.beginMessage("sensor/ldr");
  mqttc.print(value);
  mqttc.endMessage();

  delay(5000);
}


