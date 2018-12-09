
#include <Wire.h>
#include <Adafruit_MotorShield.h>

Adafruit_MotorShield AFMS = Adafruit_MotorShield(); 


// Select which 'port' M1, M2, M3 or M4. In this case, M1
Adafruit_DCMotor *myMotor = AFMS.getMotor(1); // Front left
Adafruit_DCMotor *my2Motor = AFMS.getMotor(2);//Back left
Adafruit_DCMotor *my3Motor = AFMS.getMotor(3);//Back Right
Adafruit_DCMotor *my4Motor = AFMS.getMotor(4);//Front Right
// You can also make another motor on port M2
//Adafruit_DCMotor *myOtherMotor = AFMS.getMotor(2);

void setup() {
  Serial.begin(9600);  // set up Serial library at 9600 bps
  Serial.println("Adafruit Motorshield v2 - DC Motor test!");

  AFMS.begin();  // create with the default frequency 1.6KHz
  //AFMS.begin(1000);  // OR with a different frequency, say 1KHz
  
  // Set the speed to start, from 0 (off) to 255 (max speed)
  myMotor->setSpeed(150);
  myMotor->run(FORWARD);
  // turn on motor
  myMotor->run(RELEASE); 

  my2Motor->setSpeed(150);
  my2Motor->run(FORWARD);
  // turn on motor
  my2Motor->run(RELEASE);

  my3Motor->setSpeed(150);
  my3Motor->run(FORWARD);
  // turn on motor
  my3Motor->run(RELEASE);

  my4Motor->setSpeed(150);
  my4Motor->run(FORWARD);
  // turn on motor
  my4Motor->run(RELEASE);
}
void moveForward() {
  myMotor->run(FORWARD);
  my2Motor->run(FORWARD);
  my3Motor->run(FORWARD);
  my4Motor->run(FORWARD);
  }


void loop() {
  moveForward();
  delay (2000);
  Stop();
  moveRight();
  delay (2000);
  Stop();
  moveBackward();
   delay (2000);
    Stop();
  delay (2000);
  moveLeft();
  delay (2000);
   Stop();
  rotateLeft();
  delay(2000);
  Stop();
  moveLeft();
  delay(1000);
  Stop();
   rotateRight();
   delay(2000);
   Stop();
   delay(5000);
  
  //uint8_t i;
  
//  Serial.println("tick");
//
//  myMotor->run(FORWARD);
//  for (i=0; i<255; i++) {
//    myMotor->setSpeed(i);  
//    delay(10);
//  }
//  for (i=255; i!=0; i--) {
//    myMotor->setSpeed(i);  
//    delay(10);
//  }
//  
//  Serial.println("tock");
//
//  myMotor->run(BACKWARD);
//  for (i=0; i<255; i++) {
//    myMotor->setSpeed(i);  
//    delay(10);
//  }
//  for (i=255; i!=0; i--) {
//    myMotor->setSpeed(i);  
//    delay(10);
//  }
//
//  Serial.println("tech");
//  myMotor->run(RELEASE);
//  delay(1000);
}

void Stop() {
  myMotor->run(RELEASE);
  my2Motor->run(RELEASE);
  my3Motor->run(RELEASE);
  my4Motor->run(RELEASE);
  }

void moveForward(byte spd) {
  myMotor->run(FORWARD);
  my2Motor->run(FORWARD);
  my3Motor->run(FORWARD);
  my4Motor->run(FORWARD);
  }

void moveBackward(){
  myMotor->run(BACKWARD);
  my2Motor->run(BACKWARD);
  my3Motor->run(BACKWARD);
  my4Motor->run(BACKWARD);
  }

void moveLeft() {
  myMotor->run(BACKWARD);
  my2Motor->run(FORWARD);
  my3Motor->run(BACKWARD);
  my4Motor->run(FORWARD);
  }

void moveRight() {
  myMotor->run(FORWARD);
  my2Motor->run(BACKWARD);
  my3Motor->run(FORWARD);
  my4Motor->run(BACKWARD);
  }

void moveLeftFoward() {
  myMotor->run(RELEASE);
  my2Motor->run(FORWARD);
  my3Motor->run(RELEASE);
  my4Motor->run(FORWARD);
  }

void moveRightFoward() {
  myMotor->run(FORWARD);
  my2Motor->run(RELEASE);
  my3Motor->run(FORWARD);
  my4Motor->run(RELEASE);
}

void moveLeftBackward(){
  myMotor->run(BACKWARD);
  my2Motor->run(RELEASE);
  my3Motor->run(BACKWARD);
  my4Motor->run(RELEASE);
}

void moveRightBackward(){
  myMotor->run(RELEASE);
  my2Motor->run(BACKWARD);
  my3Motor->run(RELEASE);
  my4Motor->run(BACKWARD);
}

void rotateLeft(){
  myMotor->run(BACKWARD);
  my2Motor->run(BACKWARD);
  my3Motor->run(FORWARD);
  my4Motor->run(FORWARD);
}

void rotateRight(){
  myMotor->run(FORWARD);
  my2Motor->run(FORWARD);
  my3Motor->run(BACKWARD);
  my4Motor->run(BACKWARD);
}
  


