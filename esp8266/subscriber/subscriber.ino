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
  pinMode(D0, OUTPUT);

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

  mqttc.subscribe("room1/light");
  Serial.println("Subscribed to topic : room1/light");
}

void loop() {
  // put your main code here, to run repeatedly:
  int size = mqttc.parseMessage();
  if(size)
  {
    char str[size];
    for(int i = 0 ; i < size ; i++)
      str[i] = (char)mqttc.read();

    if(strcmp(str, "ON") == 0)
    {
      digitalWrite(D0, HIGH);
      Serial.println("Received Msg : ON");
    }
    else if(strcmp(str, "OFF") == 0)
    {
      digitalWrite(D0, LOW);
      Serial.println("Received Msg : OFF");
    }
  }

  
}
