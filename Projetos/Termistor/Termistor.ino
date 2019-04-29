
/*
 * SENSOR TEMPERATURA TERMISTOR NTC 
 * --------------------------------
 * 
 * AUTOR: EUZEBIO
 * --------------
 */

#include <Thermistor.h>

Thermistor temp(0);
int frequencia = 95;

int pino7 = 7;
void setup() {
  Serial.begin(9600);
  pinMode(pino7, OUTPUT);
}
void loop() {
  int temperature = temp.getTemp();

  if (temperature >= 25) {
    if (temperature >= 27 && temperature <= 29 ) {
      frequencia = 10;
    }

    if (temperature > 29 ) {
      frequencia = 5;
    }

    if (temperature < 27 ) {
      frequencia = 95;
    }
  }

  digitalWrite(pino7, HIGH);
  delay(frequencia);
  digitalWrite(pino7, LOW);
  delay(frequencia);

  Serial.print("Temperatura: ");
  Serial.print(temperature);
  Serial.println("°C");
  delay(1000);
}
