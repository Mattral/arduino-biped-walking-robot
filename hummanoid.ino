#include <PS2X_lib.h>
#include <Servo.h>
PS2X ps2x;
int Q;
Servo HipL, HipR, KneeL, KneeR;
int X, Y, x, y, a1, b1, a2, b2;

const int in1 = 5;
const int in2 = 6;
const int in3 = 7;
const int in4 = 8;
const int enA = 3;
const int enB = 9;
int fspeed = 255;
int rspeed, lspeed;
byte PS2 = 0;
void setup() {
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  PS2 = ps2x.config_gamepad(13, 11, 10, 12, false, false);
  x = 0;
  y = 0;
  Serial.begin(57600);
}

void loop() {
  ps2x.read_gamepad();
  Serial.print("read");Serial.println(PS2);
  
  if (ps2x.Button(PSB_GREEN)) {
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH );
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    analogWrite(enB, fspeed);
    analogWrite(enA, fspeed);
    Serial.println("full speed");
    delay(10);
  }
  if (ps2x.Button(PSB_BLUE)) {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW );
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    analogWrite(enB, fspeed);
    analogWrite(enA, fspeed);
    Serial.println("full speed back");
    delay(10);
  }
  if (ps2x.Analog(PSS_RY) > 129) {
    rspeed = map(ps2x.Analog(PSS_RY), 129, 255, 0, 155);
    Serial.println(rspeed);
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    analogWrite(enA, rspeed);
    delay(10);
  }

  if (ps2x.Analog(PSS_RY) < 127) {
    rspeed = map(ps2x.Analog(PSS_RY), 0, 127, 155, 0);
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    Serial.println(rspeed);
    analogWrite(enA, rspeed);
    delay(10);
  }

  if (ps2x.Analog(PSS_LY) < 127)  {
    lspeed = map(ps2x.Analog(PSS_LY), 0, 127, 155, 0);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    analogWrite(enB, lspeed);
   Serial.print(lspeed);Serial.println("lspeed");
    delay(10);

  }
  if (ps2x.Analog(PSS_LY) > 129)  {
    lspeed = map(ps2x.Analog(PSS_LY), 129, 255, 0, 155);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    analogWrite(enB, lspeed);
    Serial.print(lspeed);Serial.println("lspeed");
    delay(10);
  }

  else {
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW );
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
    analogWrite(enA, 0);
    analogWrite(enB, 0);
    delay(10);
  }


  if (ps2x.Button(PSB_L2)) {
    analogWrite(A0,255);   delay(10);
  }
  else {
    analogWrite(A0,0);   delay(10);
  }
  if (ps2x.Button(PSB_L1)) {
    analogWrite(A1,255);   delay(10);
  
  }
  else {
    analogWrite(A1,0);   delay(10);
    
  }
  if (ps2x.Button(PSB_R1)) {
    analogWrite(A2,255);   delay(10);
   
  }
  else {
    analogWrite(A2,0);   delay(10);
    
  }
  if (ps2x.Button(PSB_R2)) {
    analogWrite(A3,255);   delay(10);
   
  }
  else {
   analogWrite(A3,0);   delay(10);
  }

  }
