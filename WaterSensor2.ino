int red=7;
int blue=8;
int yellow=11;
int orange=12;
int buzzer=13;
void setup() {
  
pinMode(red,OUTPUT);
pinMode(blue,OUTPUT);
pinMode(yellow,OUTPUT);
pinMode(orange,OUTPUT);
pinMode(buzzer,OUTPUT);
Serial.begin(9600);
}

void loop() {
int sensor=analogRead(A5);
Serial.println(sensor);


if(sensor<=60){
  digitalWrite(red,HIGH);
  digitalWrite(blue,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(orange,LOW);
  delay(100);
}
else if(sensor>61 && sensor<=120){ 
  digitalWrite(blue,HIGH);
  digitalWrite(red,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(orange,LOW);
  delay(100);
}
else if(sensor>121 && sensor<=220){
  digitalWrite(yellow,HIGH);
  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
  digitalWrite(orange,LOW);
  delay(100);
}
else if(sensor>221 && sensor<=320){
  digitalWrite(orange,HIGH);
  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(buzzer,HIGH);
}
 delay(100);
}