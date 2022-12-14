

#include <Servo.h>
Servo hipL;
Servo hipR;
Servo kneeL;
Servo kneeR;          

int posL = 0;
int posR = 180;


void setup() {
Serial.begin(9600);
hipL.attach(9);
hipR.attach(10);
kneeL.attach(4);
kneeR.attach(3);

  hipL.write(0);
  hipR.write(180);
  kneeL.write(0);
  kneeR.write(180);
  

}

void loop() {
  
 Forward();

}



void Forward()
{ 
for (posL = 0; posL <= 25; posL += 1) { 
 
    hipL.write(posL); 
    delay(15);
    for (posR = 180; posR >= 155; posR -= 1) { 
    
    hipR.write(posR); 
    delay(15);
    }
    Serial.print("         posR =");Serial.println(posR); 
 }
    Serial.print("posL =");Serial.println(posL);         
  
delay(500);
for (posL = 25; posL >= 0; posL -= 1) { 
    hipL.write(posL);  
    delay(15); 
  for (posR = 155; posR <= 180; posR += 1) { 
 
    hipR.write(posR);  
    delay(15);
               
    Serial.print("         posR =");Serial.println(posR); 
  }
    Serial.print("posL =");Serial.println(posL); 
 }
  
}
