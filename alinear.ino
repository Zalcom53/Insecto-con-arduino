// sketch Alinear
// Programa que posiciona los servos a 90 grados cuando lo volvemos a ensamblar para no tener errores.
#include <Servo.h>
int pinServoManos = 3;	//Pin digital con PWM para el servo
int pinServoPatas = 2;
int pulsoMin = 650; 	//Pulso en milisegundos para girar un angulo
int pulsoMax = 2550;	//Pulso en ms para girar un angulo de 180°

Servo manosServo;
Servo patasServo;

int posCentro = 90;



void setup() {
  // put your setup code here, to run once:
  manosServo.attach(pinServoManos);
  patasServo.attach(pinServoPatas);
  manosServo.write(posCentro);
  patasServo.write(posCentro);

}

void loop() {
  // put your main code here, to run repeatedly:

}
