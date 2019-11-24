#include "OTAProtocol.h"

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  iniciar();
}

void loop() {
  handle();

  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
  delay(100);
}
