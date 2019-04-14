/*
 * ACENDE LEDES
 * ============
 * 
 * AUTORES: EUZEBIO E LAURA
 * ------------------------
 * 
 * 31/03/2019
 */

int led = 9;
int led2 = 7;
void setup() {
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
}
void loop() {
  digitalWrite(led, HIGH);
  delay(95);
  digitalWrite(led2, LOW);
  delay(95);
  digitalWrite(led, LOW);
  delay(95);
  digitalWrite(led2, HIGH);
  delay(95);
}
