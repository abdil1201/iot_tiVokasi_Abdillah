#include <Arduino.h>


#define RED_LED 14
#define YELLOW_LED 27
#define GREEN_LED 26

void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
}

void loop() {
  // Lampu Hijau menyala selama 5 detik
  digitalWrite(GREEN_LED, HIGH);
  delay(2000);
  digitalWrite(GREEN_LED, LOW);

  // Lampu Kuning menyala selama 2 detik
  digitalWrite(YELLOW_LED, HIGH);
  delay(1000);
  digitalWrite(YELLOW_LED, LOW);

  // Lampu Merah menyala selama 5 detik
  digitalWrite(RED_LED, HIGH);
  delay(2000);
  digitalWrite(RED_LED, LOW);
}