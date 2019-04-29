/*
 * AUTOR: Euzebio O A Silva
 * PROGRAMA: Testa LDR
 * DESCRIÇÃO: Testa um LDR ativando um led e um buzzer quando a iluminação diminui.
 */

int ledPin = 7;
int ldrPin = 0;
int ldrValor = 0;
int bzzPin = 9;

float seno;
int frequencia;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  pinMode(bzzPin, OUTPUT);
}

void loop() {
  ldrValor = analogRead(ldrPin);

  if (ldrValor >= 800) {
    digitalWrite(ledPin, HIGH);
    for (int x = 0; x < 180; x++) {
      seno = sin((x * 3.1416 / 180));
      frequencia = 2000 + (int (seno * 1000));
      tone(bzzPin, frequencia);
      delay(2);
    }
  }
  else {
    digitalWrite(ledPin, LOW);
    noTone(bzzPin);
  }

  Serial.println(ldrValor);
}
