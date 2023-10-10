int light = 12;

void setup() {
  pinMode(light, OUTPUT);
  digitalWrite(light, LOW);
}

void loop() {
  digitalWrite(light, HIGH);
  delay(1000);
  digitalWrite(light, LOW);
  delay(1000);
}
