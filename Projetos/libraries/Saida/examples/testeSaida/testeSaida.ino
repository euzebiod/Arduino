#include <Saida.h>

Saida saida(13);
void setup() {
}

void loop() {
  saida.liga();
  delay(1000);
  saida.desliga();
  delay(1000);
}
