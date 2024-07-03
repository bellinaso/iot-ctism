// Simulação no tinkercad

// Define os pinos dos LEDs
const int ledPinos[] = {13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2};
const int numLEDs = 12;

void setup() {
  // Configura os pinos dos LEDs como saída
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPinos[i], OUTPUT);
  }
}

void loop() {
  // Faz os LEDs acenderem um por um
  delay(100);
  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(ledPinos[i], HIGH); // Liga o LED
    delay(100); // Espera um pouco
    digitalWrite(ledPinos[i], LOW); // Desliga o LED
  }
}