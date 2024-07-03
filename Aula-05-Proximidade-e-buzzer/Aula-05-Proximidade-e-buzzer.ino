
#define echo 6
#define trig 7
float tempo, distancia;

void setup()
{
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  tempo = pulseIn(echo,HIGH);
  distancia = tempo/58.2;
  
  Serial.print("Distancia: ");
  Serial.println(distancia);
  
  if (distancia <= 50) {
  	Serial.println("Muito perto");
  }
  else if (distancia <= 70) {
  	Serial.println("Perto");
  }
  else if (distancia <= 100) {
  	Serial.println("Aproximando");
  }
  else {
  	Serial.println("Longe");
  }
  tone(5,600);
}