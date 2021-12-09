#include<Servo.h>

int abrir = 6, fechar = 7;
int pos;
Servo servo;

void setup() {

Serial.begin(9600);
servo.attach(11);
servo.write(0);
pinMode(fechar, OUTPUT);
pinMode(abrir, OUTPUT);
digitalWrite(abrir, LOW);
digitalWrite(fechar, HIGH);
}

void loop() {

if (Serial.available())
{
  const int estado = Serial.parseInt();
  if (estado) {
    digitalWrite(fechar, LOW);
    digitalWrite(abrir, HIGH);
    servo.write(90);
  }
  else {
    digitalWrite(abrir, LOW);
    digitalWrite(fechar, HIGH);
    servo.write(15);
  }
}
}
