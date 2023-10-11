/*Making a simple binary adder with DIP switch. The switch has 3 toggles, and I have 7 LED's connected. 
Switch 1 corresponds to 2^0, Switch 2 2^1, and Switch 3 2^2.  As the switches are flipped, their values 
are added together and will turn on the corresponding light. (000 == all off, 001 == light 1, 111 == light 7, etc.)
*/

int LED1 = 7;
int LED2 = 8;
int LED3 = 9;
int LED4 = 10;
int LED5 = 11;
int LED6 = 12;
int LED7 = 13;
int SW1 = 2;
int SW2 = 3;
int SW3 = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(SW1, INPUT);
  pinMode(SW2, INPUT);
  pinMode(SW3, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if ((digitalRead(SW1) == HIGH) && (digitalRead(SW2) == LOW) && (digitalRead(SW3) == LOW)){
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, LOW);
    digitalWrite(LED6, LOW);
    digitalWrite(LED7, LOW);
  }
  else if((digitalRead(SW1) == LOW) && (digitalRead(SW2) == HIGH) && (digitalRead(SW3) == LOW)){
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, LOW);
    digitalWrite(LED6, LOW);
    digitalWrite(LED7, LOW);
  }
  else if((digitalRead(SW1) == HIGH) && (digitalRead(SW2) == HIGH) && (digitalRead(SW3) == LOW)){
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, LOW);
    digitalWrite(LED6, LOW);
    digitalWrite(LED7, LOW);
  }
  else if((digitalRead(SW1) == LOW) && (digitalRead(SW2) == LOW) && (digitalRead(SW3) == HIGH)){
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, HIGH);
    digitalWrite(LED5, LOW);
    digitalWrite(LED6, LOW);
    digitalWrite(LED7, LOW);
  }
  else if((digitalRead(SW1) == HIGH) && (digitalRead(SW2) == LOW) && (digitalRead(SW3) == HIGH)){
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, HIGH);
    digitalWrite(LED6, LOW);
    digitalWrite(LED7, LOW);
  }
  else if((digitalRead(SW1) == LOW) && (digitalRead(SW2) == HIGH) && (digitalRead(SW3) == HIGH)){
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, LOW);
    digitalWrite(LED6, HIGH);
    digitalWrite(LED7, LOW);
  }
  else if((digitalRead(SW1) == HIGH) && (digitalRead(SW2) == HIGH) && (digitalRead(SW3) == HIGH)){
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, LOW);
    digitalWrite(LED6, LOW);
    digitalWrite(LED7, HIGH);
  }
  else{
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, LOW);
    digitalWrite(LED6, LOW);
    digitalWrite(LED7, LOW);
  }
}