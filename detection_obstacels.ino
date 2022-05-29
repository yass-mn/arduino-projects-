const int trigPin = 11;  
const int echoPin = 12;  

long duree;   
int distance; 
void setup() {
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT);  
Serial.begin(9600); // 
}
void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Écoute de l'écho 
  duree = pulseIn(echoPin, HIGH);
  distance = duree*0.034/2;
 Serial.print("Distance : ");
 Serial.print(distance);
 Serial.println("cm");
}
