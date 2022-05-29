#include<Servo.h>

Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
int pot0 = 0;
int pot1 = 1;
int pot2 = 2;
int pot3 = 3;
int val;

void setup() {
  // put your setup code here, to run once:
myservo1.attach(3);
myservo2.attach(5);
myservo3.attach(6);
myservo4.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
val =analogRead(pot0);
val = map(val, 0,1023,0,180);
myservo1.write(val); 
  val =analogRead(pot1);
val = map(val, 1,1023,0,180);
myservo2.write(val);
  val =analogRead(pot2);
val = map(val, 2,1023,0,180);
myservo3.write(val); 
  val =analogRead(pot3);
val = map(val, 3,1023,0,180);
myservo4.write(val);                
  delay(15);         
}
