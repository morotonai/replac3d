#include <AccelStepper.h>

#define pul1 3
#define dir1 2

#define pul2 5
#define dir2 4

#define pul3 9
#define dir3 8

#define en1 6
#define en2 7
#define en3 11

#define magnet 10

AccelStepper extensionR(1, pul1, dir1);
AccelStepper extensionL(1, pul3, dir3);
AccelStepper panning(1, pul2, dir2);

void setParams(){
  pinMode(en1, OUTPUT);
  pinMode(en2, OUTPUT);
  pinMode(en3, OUTPUT);

  pinMode(magnet, OUTPUT);

  extensionL.setMaxSpeed(500);
  extensionL.setAcceleration(500);
  extensionR.setMaxSpeed(1000);
  extensionR.setAcceleration(1000);
  
  panning.setMaxSpeed(1000);
  panning.setAcceleration(1000);
}

void panTo(const String& direction) {
  digitalWrite(en1, LOW);
    if (direction == "left") {
        panning.runToNewPosition(-1440);
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
        extensionL.moveTo(0);
        extensionR.moveTo(0);
    } else if (position == "out") {
        extensionL.moveTo(12800);
        extensionR.moveTo(-12800);
    }
}

void setup() {
  // put your setup code here, to run once:
  setParams();
  extensionL.moveTo(12800);
  extensionR.moveTo(-12800);


  digitalWrite(magnet, LOW);
  extensionL.moveTo(0);
  extensionR.moveTo(0);
  //panTo("middle");
  extensionL.moveTo(12800);
  extensionR.moveTo(-12800);
  delay(500);
  digitalWrite(magnet, HIGH);
  delay(500);
  extensionL.moveTo(0);
  extensionR.moveTo(0);

  digitalWrite(magnet, HIGH);
  extensionL.moveTo(0);
  extensionR.moveTo(0);
  //panTo("right");
  extensionL.moveTo(12800);
  extensionR.moveTo(-12800);
  delay(500);
  digitalWrite(magnet, LOW);
  delay(500);
  extensionL.moveTo(0);
  extensionR.moveTo(0);

  digitalWrite(magnet, LOW);
  extensionL.moveTo(0);
  extensionR.moveTo(0);
  //panTo("left");
  extensionL.moveTo(12800);
  extensionR.moveTo(-12800);
  delay(500);
  digitalWrite(magnet, HIGH);
  delay(500);
  extensionL.moveTo(0);
  extensionR.moveTo(0);

  digitalWrite(magnet, HIGH);
  extensionL.moveTo(0);
  extensionR.moveTo(0);
  //panTo("middle");
  extensionL.moveTo(12800);
  extensionR.moveTo(-12800);
  delay(500);
  digitalWrite(magnet, LOW);
  delay(500);
  extensionL.moveTo(0);
  extensionR.moveTo(0);
}


void loop() {
  // put your main code here, to run repeatedly:
          extensionL.run();
          extensionR.run();
        
}
