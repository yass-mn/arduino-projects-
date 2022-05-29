int const red=6;
int const ylw=5;
int const green=4;
int const red1=10;
int const ylw1=9;
int const green1=8;

void setup() {
  // put your setup code here, to run once:
  pinMode ( red,OUTPUT);
  pinMode ( ylw,OUTPUT);
  pinMode ( green,OUTPUT);
  pinMode ( red1,OUTPUT);
  pinMode ( ylw1,OUTPUT);
  pinMode ( green1,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (red , HIGH);
  digitalWrite (ylw1,HIGH);
  digitalWrite (ylw,LOW);
  digitalWrite (green,LOW);
  digitalWrite (green1,LOW);
  digitalWrite (red1,LOW);
  delay (200);
  digitalWrite (green1,HIGH);
  digitalWrite (ylw1,LOW);
  delay(3000);
  digitalWrite (ylw,HIGH);
  digitalWrite (red1,HIGH);
  digitalWrite (red,LOW);
  digitalWrite (green1,LOW);
  delay (2000);
  digitalWrite (green,HIGH);
  digitalWrite (red1,HIGH);
  digitalWrite (ylw,LOW);
  delay(3000);
  
  
  
  
  
  
  
 
  
  
  

}
