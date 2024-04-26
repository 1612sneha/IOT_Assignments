void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  float temp = analogRead(A0);
  Serial.printf("Temperature = %f\n", temp);
  delay(2000);
}
