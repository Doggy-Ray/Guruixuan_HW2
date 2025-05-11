#include <Arduino.h>

#define LED1_PIN 27
#define LED2_PIN 26

bool led1State = false;
bool led2State = false;

void setup() {
  Serial.begin(115200);        
  pinMode(LED1_PIN, OUTPUT);   
  pinMode(LED2_PIN, OUTPUT);   
  digitalWrite(LED1_PIN, LOW);
  digitalWrite(LED2_PIN, LOW);
}

void loop() {
  if (Serial.available()) {
    char cmd = Serial.read(); 

    switch (cmd) {
      case '1':
        led1State = !led1State;
        digitalWrite(LED1_PIN, led1State);
        Serial.println(led1State ? "LED1亮" : "LED1灭");
        break;

      case '2':
        led2State = !led2State; 
        digitalWrite(LED2_PIN, led2State);
        Serial.println(led2State ? "LED2亮" : "LED2灭");
        break;

      default:
        Serial.println("无效");
        break;
    }
  }
}
