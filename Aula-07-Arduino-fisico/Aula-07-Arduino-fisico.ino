void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH); // liga led 13
  delay(500);

  digitalWrite(13, LOW); // desliga led 13
  digitalWrite(12, HIGH); // liga led 12
  delay(500);
  
  digitalWrite(12, LOW); // desliga led 12
}
