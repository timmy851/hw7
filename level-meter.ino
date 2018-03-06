
int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin1 = 9; 
int ledPin2 = 6;
int ledPin3 = 5;// select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  // read the value from the sensor:

  sensorValue = analogRead(sensorPin);
  // turn the ledPin on
  
  if  (sensorValue > 200) {
     digitalWrite(ledPin1, HIGH);
  } else {
  digitalWrite(ledPin1, LOW);
  }
  
  if  (sensorValue > 600) {
     digitalWrite(ledPin2, HIGH);
  } else {
  digitalWrite(ledPin2, LOW);
  }
  
  if  (sensorValue > 1000) {
     digitalWrite(ledPin3, HIGH);
  } else {
  digitalWrite(ledPin3, LOW);
  }
  
  // stop the program for for <sensorValue> milliseconds:
  delay(sensorValue);
}
