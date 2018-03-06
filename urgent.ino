// the setup function runs once when you press reset or power the board
int ledPin1 = 9;   
int ledPin2 = 5; 
int ledPin3 = 6; 

void setup() {
  // initialize digital pin 13 as an output.
  
}
 
// the loop function runs over and over again forever

void loop() {
  digitalWrite(ledPin1, HIGH);   // sets the LED on
  delay(10);                  // waits for a second
  digitalWrite(ledPin2, HIGH);    // sets the LED off
  delay(10);  
  digitalWrite(ledPin1, LOW);   // sets the LED on
  delay(10);                  // waits for a second
  digitalWrite(ledPin2, LOW);    // sets the LED off
  delay(10); 
}
