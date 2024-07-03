// Define a "entrada do usuário"
const int led = 5;

void setup()
{
  // pinMode(led, OUTPUT);
  // Define todas as portas entre 2 e 11
  for(int i=2; i<12; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  // digitalWrite(led, HIGH);
  if(led >= 2 && led <= 13) {
    for(int i=2; i<12; i++) {
      if(i==led) {
        digitalWrite(i+1, HIGH);
      }
    }
  }
  delay(1000);
}