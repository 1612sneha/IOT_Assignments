
int count = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("UART setup is done");
}

void loop() {
  // put your main code here, to run repeatedly:
  //static int count = 0;
  delay(10000);
  Serial.println("Inside loop()");
  count++;
  Serial.printf("count : %d\n", count);
  delay(2000);
}