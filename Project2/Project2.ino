//Project 2: Spaceship Interface
int switchState = 0;
void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}
void loop() {
  switchState = digitalRead(2);
  if (switchState == LOW) {
    digitalWrite(3, HIGH); //green led
    digitalWrite(4, LOW); //red led
    digitalWrite(5, LOW); //red led
  }
  else{
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);

    delay(200); //wait for a quarter second
    //toggle the LEDs
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(200);
  }
}
