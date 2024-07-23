#include <DHT.h>

#define DHTPIN 8        // Pino digital onde o sensor está conectado
#define DHTTYPE DHT11   // Tipo do sensor, pode ser DHT11, DHT21 ou DHT22

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  // Lê a temperatura em graus Celsius
  float tempC = dht.readTemperature();

  // Verifica se a leitura foi bem-sucedida
  if (isnan(tempC)) {
    Serial.println("Erro ao ler o sensor DHT!");
    return;
  }

  // Converte a temperatura para Fahrenheit, Kelvin e exibe os valores
  float tempF = (tempC * 9.0 / 5.0) + 32.0;
  float tempK = tempC + 273.15;

  Serial.print("Temperatura em Celsius: ");
  Serial.print(tempC);
  Serial.print(" °C\t");

  Serial.print("Temperatura em Fahrenheit: ");
  Serial.print(tempF);
  Serial.print(" °F\t");

  Serial.print("Temperatura em Kelvin: ");
  Serial.print(tempK);
  Serial.println(" K");

  delay(2000);
}
