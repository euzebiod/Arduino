
/*
 * BOTÃO ACENDE LED
 * ================
 * 
 * AUTOR: EUZEBIO E LAURA
 * ----------------------
 * 
 * 06/04/2019
 * ----------
 */

const int ledPin = 13;
const int buttonPin = 2;
int buttonState = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH); 
  }
  else {
    digitalWrite(ledPin, LOW); 
  }

}
