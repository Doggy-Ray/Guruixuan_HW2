#include <Arduino.h>

void setup() {
   
  // put your setup code here, to run once:
   pinMode(13,OUTPUT);
   pinMode(12,OUTPUT);
   pinMode(14,OUTPUT);
   pinMode(27,OUTPUT);
   pinMode(26,OUTPUT);
   pinMode(25,OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH);//LED1亮起
  delay(500);
  digitalWrite(13,LOW);
  delay(500);
  digitalWrite(12,HIGH);//LED2亮起
  delay(500);
  digitalWrite(12,LOW);
  delay(500);
  digitalWrite(14,HIGH);//LED3亮起
  delay(500);
  digitalWrite(14,LOW);
  delay(500);
  digitalWrite(27,HIGH);//LED4亮起
  delay(500);
  digitalWrite(27,LOW);
  delay(500);
  digitalWrite(26,HIGH);//LED5亮起
  delay(500);
  digitalWrite(26,LOW);
  delay(500);
  digitalWrite(25,HIGH);//LED6亮起
  delay(500);
  digitalWrite(25,LOW);
  delay(500);
}