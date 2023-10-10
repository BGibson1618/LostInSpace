int LED = 12;
int S1 = 2;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(S1, INPUT);
}

void loop() {
  if(digitalRead(S1) == HIGH) {
    digitalWrite(LED, HIGH);
    delay(500);
    digitalWrite(LED, LOW);
    delay(500);
  } 
  else {
    digitalWrite(LED, LOW);
  }

}
