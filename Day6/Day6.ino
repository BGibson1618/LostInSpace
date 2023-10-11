int sensorPin = A0;
int sensorValue = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // sensorValue = analogRead(sensorPin);
  // digitalWrite(LED_BUILTIN, HIGH);
  // delay(sensorValue);
  // digitalWrite(LED_BUILTIN, LOW);
  // delay(sensorValue);

  // Serial.println(sensorValue);
  // delay(sensorValue);
}
