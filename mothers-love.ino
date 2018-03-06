int ledPin1 = 9;   
int ledPin2 = 6; 
int ledPin3 = 5;  

void setup() {
  
}

void loop() {
 
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 60) {
    analogWrite(ledPin1, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin1, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

     for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 60) {
    analogWrite(ledPin2, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin2, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

     for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 60) {
    analogWrite(ledPin3, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin3, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
}
