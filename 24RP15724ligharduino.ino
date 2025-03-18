// Traffic Light Simulation
int redPin = 13;
int yellowPin = 12;
int greenPin = 11;
const int redDuration = 1000; 
const int yellowDuration = 1000; 
const int greenDuration = 1000; 
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
