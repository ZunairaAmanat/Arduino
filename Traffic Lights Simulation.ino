int redLed = 13;
int yellowLed = 12;
int greenLed = 11;

void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
}

void loop() {
  // Red LED ON
  digitalWrite(redLed, HIGH);
  delay(5000);
  digitalWrite(redLed, LOW);
  
  // Yellow LED ON
  digitalWrite(yellowLed, HIGH);
  delay(2000);
  digitalWrite(yellowLed, LOW);
  
  // Green LED ON
  digitalWrite(greenLed, HIGH);
  delay(5000);
  digitalWrite(greenLed, LOW);
}