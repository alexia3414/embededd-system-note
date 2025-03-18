// Traffic
int redPin = 13;
int yellowPin = 12;
int greenPin = 11;
const int redDuration = 100; 
const int yellowDuration = 100; 
const int greenDuration = 100; 
void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}
void loop() {
  digitalWrite(redPin, HIGH);
  delay(redDuration);
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, HIGH);
  delay(yellowDuration);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, HIGH);
  delay(greenDuration);
  digitalWrite(greenPin, LOW);
}
