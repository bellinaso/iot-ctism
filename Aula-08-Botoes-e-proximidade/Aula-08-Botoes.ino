void setup() {
  pinMode(3, INPUT_PULLUP); // Botão
  pinMode(4, OUTPUT); // Led vermelho
  pinMode(5, OUTPUT); // Led verde
  pinMode(6, INPUT); // Sensor de movimento
  Serial.begin(9600);
}

void loop() {
  // Se o sensor detectar ou apertar o botão: ligar vermelho
  if(digitalRead(6) == 1 || digitalRead(3) == 0) {
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
  }
  // Se não: verde
  else {
    digitalWrite(5, HIGH);
    digitalWrite(4, LOW);
  }
  Serial.println(digitalRead(6));
}
