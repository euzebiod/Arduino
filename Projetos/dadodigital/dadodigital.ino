/*
   DADO DIGITAL
   ============

   AUTORES: EUZEBIO
   ----------------

   13/04/2019
*/

int led1 = 12;
int led2 = 11;
int led3 = 10;
int led4 = 9;
int led5 = 8;
int led6 = 7;
int led7 = 6;
long nDado = 0;

const int buttonPin = 2;
int buttonState = 0;
char *pinos[6];

void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(buttonPin, INPUT);
  randomSeed(analogRead(0));
}

void apagaLeds() {
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    apagaLeds();
    digitalWrite(led1, HIGH);
    delay(95);
    digitalWrite(led1, LOW);
    delay(95);
    digitalWrite(led2, HIGH);
    delay(95);
    digitalWrite(led2, LOW);
    delay(95);
    digitalWrite(led3, HIGH);
    delay(95);
    digitalWrite(led3, LOW);
    delay(95);
    digitalWrite(led4, HIGH);
    delay(95);
    digitalWrite(led4, LOW);
    delay(95);
    digitalWrite(led5, HIGH);
    delay(95);
    digitalWrite(led5, LOW);
    delay(95);
    digitalWrite(led6, HIGH);
    delay(95);
    digitalWrite(led6, LOW);
    delay(95);
    digitalWrite(led7, HIGH);
    delay(95);
    digitalWrite(led7, LOW);
    delay(95);
    nDado = random(1, 7);
  }
  else {
    if (nDado) {
      apagaLeds();
      Serial.println(nDado);
      switch (nDado) {
        case 1:
          digitalWrite(led1, LOW ); digitalWrite(led2, LOW); digitalWrite(led3, LOW);
          digitalWrite(led4,  HIGH);
          digitalWrite(led5, LOW); digitalWrite(led6 , LOW); digitalWrite(led7,  LOW);
          break;
        case 2:
          digitalWrite(led1, HIGH ); digitalWrite(led2, LOW); digitalWrite(led3, LOW);
          digitalWrite(led4,  LOW);
          digitalWrite(led5, LOW); digitalWrite(led6 , LOW); digitalWrite(led7,  HIGH);
          break;
        case 3:
          digitalWrite(led1, HIGH ); digitalWrite(led2, LOW); digitalWrite(led3, LOW);
          digitalWrite(led4,  HIGH);
          digitalWrite(led5, LOW); digitalWrite(led6 , LOW); digitalWrite(led7,  HIGH);
          break;
        case 4:
          digitalWrite(led1, HIGH ); digitalWrite(led2, LOW); digitalWrite(led3, HIGH);
          digitalWrite(led4,  LOW);
          digitalWrite(led5, HIGH); digitalWrite(led6 , LOW); digitalWrite(led7,  HIGH);
          break;
        case 5:
          digitalWrite(led1, HIGH ); digitalWrite(led2, LOW); digitalWrite(led3, HIGH);
          digitalWrite(led4,  HIGH);
          digitalWrite(led5, HIGH); digitalWrite(led6 , LOW); digitalWrite(led7,  HIGH);
          break;
        case 6:
          digitalWrite(led1, HIGH ); digitalWrite(led2, HIGH); digitalWrite(led3, HIGH);
          digitalWrite(led4,  LOW);
          digitalWrite(led5, HIGH); digitalWrite(led6 , HIGH); digitalWrite(led7,  HIGH);
          break;
      }
    }
    nDado = 0;
  }
}
