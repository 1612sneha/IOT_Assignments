void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  Serial.begin(115200);
  Serial.println("Setup is completed");
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(A0);
  Serial.printf("LDR value = %d\n", value);
  delay(2000);
}