void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH); // liga
  delay(500);
  digitalWrite(13, LOW); // desliga
  digitalWrite(12, HIGH); // liga outro
  delay(500);
  digitalWrite(12, LOW); // desliga outro
}
