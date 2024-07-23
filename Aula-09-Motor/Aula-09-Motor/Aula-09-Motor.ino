#include <Servo.h>

Servo s;
int pos;

void setup() {
  s.attach(8);
  s.write(2);
}

void loop() {
  for(pos=2; pos<170; pos++) {
    s.write(pos);
    delay(10);
  }
  for(pos=170; pos>=2; pos--) {
    s.write(pos);
    delay(10);
  }
}
