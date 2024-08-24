#include <AccelStepper.h>

#define pul1 3
#define dir1 2

#define pul2 5
#define dir2 4

#define en1 6
#define en2 7
#define en3 11

#define magnet 10

AccelStepper extension(1, pul1, dir1);
AccelStepper panning(1, pul2, dir2);

void setParams(){
  pinMode(en1, OUTPUT);
  pinMode(en2, OUTPUT);
  pinMode(en3, OUTPUT);

  pinMode(magnet, OUTPUT);

  extension.setMaxSpeed(3000);
  extension.setAcceleration(1000);

  panning.setMaxSpeed(1000);
  panning.setAcceleration(1000);
}

void panTo(const String& direction) {
  digitalWrite(en1, LOW);
    if (direction == "left") {
        panning.runToNewPosition(-1450);
    } else if (direction == "middle") {
        panning.runToNewPosition(0);
    } else if (direction == "right") {
        panning.runToNewPosition(1440);
    }
}

void extendTo(const String& position) {
    digitalWrite(en2, LOW);
    digitalWrite(en3, LOW);
    if (position == "in") {
        extension.runToNewPosition(0);
    } else if (position == "out") {
        extension.runToNewPosition(-14000);
    }
}

void retrieve(){
  digitalWrite(magnet, LOW);
  extendTo("in");
  panTo("middle");
  extendTo("out");
  delay(500);
  digitalWrite(magnet, HIGH);
  delay(500);
  extendTo("in");
}

void deposit(){
  digitalWrite(magnet, HIGH);
  extendTo("in");
  panTo("right");
  extendTo("out");
  delay(500);
  digitalWrite(magnet, LOW);
  delay(500);
  extendTo("in");
}

void pickup(){
  digitalWrite(magnet, LOW);
  extendTo("in");
  panTo("left");
  extendTo("out");
  delay(500);
  digitalWrite(magnet, HIGH);
  delay(500);
  extendTo("in");
}

void replace(){
  digitalWrite(magnet, HIGH);
  extendTo("in");
  panTo("middle");
  extendTo("out");
  delay(500);
  digitalWrite(magnet, LOW);
  delay(500);
  extendTo("in");
}
void setup() {
  // put your setup code here, to run once:
  setParams();

  retrieve();

  //only retrieve for now to test if steppers are strong enough to pull the build plate out of the printer
  deposit();
  pickup();
  replace(); 
}


void loop() {
  // put your main code here, to run repeatedly:
}
