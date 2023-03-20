/*
  Binoy Das Gupta
  Project Name : Controlling 2 servo motors and
  2 led light blinking using analog value
  25-08-2020
*/

#include<Servo.h>
Servo myservo1;
Servo myservo2;
int value1;
int value2;
int led1 = 6;
int led2 = 5;

void setup()
{
  myservo1.attach(9);
  myservo2.attach(10);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}

void loop()
{
  value1 = analogRead(A0);
  value1 = map(value1,0,512,0,180);
  myservo1.write(value1);
   
  value2 = analogRead(A1);
  value2 = map(value2,513,1023,180,0);
  myservo2.write(value2);
  
  digitalWrite(led1,HIGH);
  delay(value1);
  digitalWrite(led1,LOW);
  delay(value2);
  
  digitalWrite(led2,HIGH);
  delay(value2);
  digitalWrite(led2,LOW);
  delay(value1);
}
  