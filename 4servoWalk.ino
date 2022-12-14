  #include <Servo.h>
  

  Servo servo1;
  Servo servo2;
  Servo servo3;
  Servo servo4;
  Servo servo5;
                                                                                                                                                                                                                                                                          
void setup() {
  servo1.attach(8);
  servo2.attach(7);
  servo4.attach(6);
  servo3.attach(9);
  servo5.attach(10);
         

  servo1.write(115);
  servo2.write(115);
  
  servo3.write(140);
  servo4.write(140);

  delay(2000);

//stage #1
  
  servo1.write(90);
  servo2.write(90);
  
  servo3.write(120);
  servo4.write(120);

 // servo5.write(90);
  
  delay(2000);
  
 // servo5.write(130);

//stage #2

  servo1.write(140);
  servo4.write(180);

  delay(500);

//stage #3

servo4.write(140);

  delay(500);

//stage #4

  servo1.write(120);
  servo2.write(70);
  servo3.write(90);  

  delay(500);

//stage #5

  servo1.write(110);
  servo2.write(130);
  
  servo3.write(180);
  servo4.write(120);

  delay(500);
  
  servo2.write(110);
  
  servo3.write(120);

  delay(1000);

//step#2






//stage #1
  
  servo1.write(90);
  servo2.write(90);
  
  servo3.write(120);
  servo4.write(120);

  servo5.write(90);
 
  delay(1000);
  
  servo5.write(50);

//stage #2

  servo2.write(140);
  servo3.write(180);

  delay(500);

//stage #3

servo3.write(140);

  delay(500);

//stage #4

  servo2.write(120);
  servo1.write(70);
  servo4.write(90);  

  delay(500);

//stage #5




  //stage #1
  
  servo1.write(90);
  servo2.write(90);
  
  servo3.write(120);
  servo4.write(120);

  servo5.write(90);

  delay(1000);
  
  servo5.write(130);

//stage #2

  servo1.write(140);
  servo4.write(180);

  delay(500);

//stage #3

servo4.write(140);

  delay(500);

//stage #4

  servo1.write(120);
  servo2.write(70);
  servo3.write(90);  

  delay(500);

//stage #5

  servo1.write(110);
  servo2.write(130);
  
  servo3.write(180);
  servo4.write(120);

  delay(500);
  
  servo2.write(110);
  
  servo3.write(120);
 
  delay(1000);

//step#4




//stage #1
  
  servo1.write(90);
  servo2.write(90);
  
  servo3.write(120);
  servo4.write(120);

  servo5.write(90);
 
  delay(1000);
  
  servo5.write(50);

//stage #2

  servo2.write(140);
  servo3.write(180);
  
  delay(500);

//stage #3

servo3.write(140);

  delay(500);

//stage #4

  servo2.write(120);
  servo1.write(70);
  servo4.write(90);  

  delay(500);

//stage #5

  servo1.write(90);
  servo2.write(90);
  
  servo3.write(120);
  servo4.write(120);


delay(1000);



  servo1.write(140);
  servo4.write(180);

  delay(500);

//stage #3

servo4.write(140);

  delay(500);

//stage #4

  servo1.write(120);
  servo2.write(70);
  servo3.write(90);  


  delay(500);

//stage #5

  servo1.write(110);
  servo2.write(130);
  
  servo3.write(180);

  delay(500);
  
  servo2.write(110);
  
  servo3.write(120);
 
  delay(1000);

//step#2






//stage #1
  
  servo1.write(90);
  servo2.write(90);
  
  servo3.write(120);
  servo4.write(120);

  servo5.write(90);
 
  delay(1000);
  
  servo5.write(50);

//stage #2

  servo2.write(140);
  servo3.write(180);
  
  delay(500);

//stage #3

servo3.write(140);


  delay(500);

//stage #4

  servo2.write(120);
  servo1.write(70);
  servo4.write(90);  


  delay(500);

//stage #5




  //stage #1
  
  servo1.write(90);
  servo2.write(90);
  
  servo3.write(120);
  servo4.write(120);

  servo5.write(90);





  
  delay(1000);
  
  servo5.write(130);

//stage #2

  servo1.write(140);
  servo4.write(180);

 
  delay(500);

//stage #3

servo4.write(140);


  delay(500);

//stage #4

  servo1.write(120);
  servo2.write(70);
  servo3.write(90);  


  delay(500);

//stage #5

  servo1.write(110);
  servo2.write(130);
  
  servo3.write(180);
  servo4.write(120);


  delay(500);
  
  servo2.write(110);
  
  servo3.write(120);

 
  delay(1000);

//step#4




//stage #1
  
  servo1.write(90);
  servo2.write(90);
  
  servo3.write(120);
  servo4.write(120);

  servo5.write(90);

  
  delay(1000);
  
  servo5.write(50);

//stage #2

  servo2.write(140);
  servo3.write(180);


  delay(500);

//stage #3

servo3.write(140);


  delay(500);

//stage #4

  servo2.write(120);
  servo1.write(70);
  servo4.write(90);  


  delay(500);

//stage #5

  servo1.write(90);
  servo2.write(90);
  
  servo3.write(120);
  servo4.write(120);

}

void loop() 
{


}
