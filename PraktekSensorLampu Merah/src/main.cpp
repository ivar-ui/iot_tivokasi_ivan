#include <Arduino.h>

const int lampuMerah = 33;
const int lampuKuning = 25;
const int lampuHijau = 26;

void setup() {

  pinMode(lampuMerah, OUTPUT);
  pinMode(lampuKuning, OUTPUT);
  pinMode(lampuHijau, OUTPUT);
}

void loop() {
  digitalWrite(lampuMerah, HIGH);
  digitalWrite(lampuKuning, LOW);
  digitalWrite(lampuHijau, LOW);
  delay(5000);

  digitalWrite(lampuMerah, LOW);
  digitalWrite(lampuKuning, HIGH);
  digitalWrite(lampuHijau, LOW);
  delay(2000);

  digitalWrite(lampuMerah, LOW);
  digitalWrite(lampuKuning, LOW);
  digitalWrite(lampuHijau, HIGH);
  delay(5000);
}
