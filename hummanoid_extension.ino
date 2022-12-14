#include <Servo.h>
Servo W;
Servo H;

Servo HipL, HipR, KneeL, KneeR;

int S1 = 5;
int S2 = 6;
const int buttonPin = 2; 
const int bottonPin2= 3;
int buttonState = 0;
int buttonState2 = 0;
int buttonState3 = 0;
const int wipe = 4;

int pos = 180;
int pos1 =0;
int C1,C2,Z,z;
void setup() {  
  W.attach(9);
  H.attach(8);
  pinMode(buttonPin, INPUT);
  pinMode(wipe,INPUT);
  HipL.attach(A0);
  HipR.attach(A1);
  KneeL.attach(A2);
  KneeR.attach(A3);

  HipL.write(175);   //180 // 135 //65
  HipR.write(5);     // 5  // 45  //95
 KneeL.write(180);  //180 // 150  //75 sit
  KneeR.write(10);   // 15 // 40  //90  Sit
    
  Serial.begin(57600);
 }                           


//////////////////////////Sweep/////////////////////////////
void sweep()
{
  for (pos = 0; pos <= 180; pos += 1) { 
    // in steps of 1 degree
    W.write(pos);              
    delay(15);                       
  }
}

void loop() {

  
  buttonState = digitalRead(buttonPin);
    if (buttonState == HIGH) {
  HipL.write(135);
  HipR.write(45);
  KneeL.write(150);
  KneeR.write(40);
   
  } else {
 
  HipL.write(175);   //180 // 135 //65
  HipR.write(5);     // 5  // 45  //95
 KneeL.write(180);  //180 // 150  //75 sit
  KneeR.write(10);   // 15 // 40  //90  Sit
  }

  buttonState2 = digitalRead(bottonPin2);
    if (buttonState2 == HIGH) {

  HipL.write(65);
  HipR.write(95);
  KneeL.write(75);
  KneeR.write(90);
   
  } else {

  HipL.write(175);   //180 // 135 //65
  HipR.write(5);     // 5  // 45  //95
 KneeL.write(180);  //180 // 150  //75 sit
  KneeR.write(10);   // 15 // 40  //90  Sit
  }
  
  ////////////////////////////////////////////////////////////////////////
 
  buttonState3 = digitalRead(wipe);
    if (buttonState3 == HIGH) 
  {
  sweep();
  delay(100);
  }
  else
  {
    W.write(90);
  }
 
  if(S1==HIGH){
    C1=1;
  }
  else{
    C1=0;
  }
  if(C1==1){
    Z=++z;
    delay(5);
    if (Z > 90 ) {
    Z=90;
    }
    else if (Z < 0) {
    Z = 0;
  }
  else {
    Z = Z;
  }
  }
  if(S2==HIGH){
    C2=1;
  }
  else{
    C2=0;
  }
  if(C2==1){
    Z=--z;
    delay(5);
    if (Z > 90 ) {
    Z=90;
    }
    else if (Z < 0) {
    Z = 0;
  }
  else {
    Z = Z;
  }
  }
  H.write(Z);
  z = Z;
  delay(5);
  }

  /*
  2 = knee bend  --- A0
  3 = sit        --- A1
  4 = wiping     ---
  5 = hand up    --- A2
  6 = hand down  --- A3
  */
