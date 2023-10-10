int LED1 = 10;
int LED2 = 11;
int LED3 = 12;
int S1 = 4;
int S2 = 3;
int S3 = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(S1, INPUT);
  pinMode(S2, INPUT);
  pinMode(S3, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(S1) == HIGH){
    digitalWrite(LED1, HIGH);
  }
  else {
    digitalWrite(LED1, LOW);
  }
  if(digitalRead(S2) == HIGH){
    digitalWrite(LED2, HIGH);
  }
  else {
    digitalWrite(LED2, LOW);
  }
  if(digitalRead(S3) == HIGH){
    digitalWrite(LED3, HIGH);
  }
  else {
    digitalWrite(LED3, LOW);
  }
}
