// sketch CaminaHaciaDelante
//Programar posiciones en un Micro Servo Tower Pro SG90 9G.Z
//incluir libreria Servo
#include <Servo.h>

int pinServoManos = 3;	//Pin digital con PWM para el servo
int pinServoPatas = 2;
int pulsoMin = 650; 	//Pulso en milisegundos para girar un angulo
int pulsoMax = 2550;	//Pulso en ms para girar un angulo de 180°

Servo manosServo;
Servo patasServo;
int posCentro = 90;
int manoDerechaArriba = 72;
int manoIzquierdaArriba = 108;
int pataDerechaAdelante = 75;
int pataIzquierdaAdelante = 105;

void caminaAdelante()
{
  manosServo.write(manoDerechaArriba);
  patasServo.write(pataIzquierdaAdelante);
  delay(125);
  manosServo.write(posCentro);
  patasServo.write(posCentro);
  delay(65);
  
  manosServo.write(manoIzquierdaArriba);
  patasServo.write(pataDerechaAdelante);
  delay(125);
  manosServo.write(posCentro);
  patasServo.write(posCentro);
  delay(65);
  
}


void setup()
{
  
  //Señal del Servo1 conectado a pines digitales (PWM) --> pinServo
  //Calibración del servo para suavizar movimientos -> (pulsoMin,
  //Ejemplo servo1.attach(pinServo,pulsoMin,pulsoMax)
  
  manosServo.attach(pinServoManos);
  patasServo.attach(pinServoPatas);
  manosServo.write(posCentro);
  patasServo.write(posCentro);
}

void loop()
{
  caminaAdelante();
  delay(150); 	//tiempo entre cada paso dado, velocidad de caminado
}