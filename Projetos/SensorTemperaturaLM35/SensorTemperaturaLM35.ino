
/*
 * AUTOR: Euzebio de O A Da Silva
 * DESCRIÇÃO: Teste sensor de temperatura LM35
 *            Aciona um alarme quando a temperatura 
 *            passar de um determinado valor.
 */

const int LM35 = A0;
float temperatura;
const int buzzer = 9;
int temperaturaMap;


void setup() {
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);

}

void loop() {
  temperatura = (float(analogRead(LM35)) * 5 / (1023)) / 0.01;
  Serial.print("Temperatura: ");
  Serial.println(temperatura);
  temperaturaMap = map(analogRead(LM35), 0 , 1023, 0, 500);
  Serial.print("TemperaturaMap: ");
  Serial.println(temperaturaMap);
  if (temperaturaMap > 32)
  {
    tone(buzzer, 440, 1000);
  }
  else
  {
    noTone(buzzer);
  }
  delay(300);
}
