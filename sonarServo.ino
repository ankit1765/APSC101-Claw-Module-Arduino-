

#include <NewPing.h>
#include <Servo.h>

#define TRIGGER_PIN  12  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     11  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 200

Servo servo1;
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

int distanceInCm;
unsigned int uS;

void setup(){
  servo1.attach(9);
  Serial.begin(9600);
}

void loop(){
  us = sonar.ping();
  Serial.print(uS / US_ROUNDTRIP_CM);
}

