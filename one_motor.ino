#include <Wire.h>
#include <Adafruit_MotorShield.h>
Adafruit_MotorShield AFMS = Adafruit_MotorShield();
Adafruit_DCMotor *myMotor1 = AFMS.getMotor(1);
Adafruit_DCMotor *myMotor2 = AFMS.getMotor(2);


void setup() {
  AFMS.begin();
  myMotor1->setSpeed(200);
  myMotor2->setSpeed(200);
}

void loop() {
  myMotor1->run(FORWARD);
  myMotor2->run(RELEASE);
  delay(10000);
  myMotor1->run(RELEASE);
  myMotor2->run(FORWARD);
  delay(10000);
}
