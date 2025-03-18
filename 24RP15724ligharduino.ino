// Traffic Light Simulation
int bluePin = 13;
int yellowPin = 12;
int greenPin = 11;

const int blueDuration = 1000; 
const int yellowDuration = 1000; 
const int greenDuration = 1000; 
void setup() {
  pinMode(bluePin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}
void loop() {
  
  digitalWrite(bluePin, HIGH);
  delay(blueDuration);
  digitalWrite(bluePin, LOW);
  
  digitalWrite(yellowPin, HIGH);
  delay(yellowDuration);
  digitalWrite(yellowPin, LOW);
  
  digitalWrite(greenPin, HIGH);
  delay(greenDuration);
  digitalWrite(greenPin, LOW);
}
