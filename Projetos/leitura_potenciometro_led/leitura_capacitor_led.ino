/*
 * POTENCIOMETRO E LED
 * -------------------
 * 
 * AUTOR: EUZEBIO E LAURA
 * ----------------------
 * 
 * 06/04/2019
 * 
 */

unsigned int valorLido;
unsigned int pwd;
int led = 11;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  valorLido = analogRead(A0);
  pwd = map(valorLido, 0, 1023, 0, 255);
  analogWrite(led, pwd);
  Serial.println(valorLido);
  //delay(1000);
}
