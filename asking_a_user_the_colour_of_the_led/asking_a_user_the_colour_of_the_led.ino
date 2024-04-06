 int redPin = 10;
 int bluePin = 12;
 int greenPin = 11;
 String userChoice;
 int del = 500;
 String msg = "Hi, what colour would you like to light up?";
 String msg2 = "Hi, look at the colour you chose how lovely!";
 
 
 void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin,OUTPUT);
pinMode(bluePin,OUTPUT);
pinMode(greenPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while(Serial.available()==0){
  
}
userChoice=Serial.readString();

if (userChoice=="red"){
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
  
}
if(userChoice=="green"){
  digitalWrite(greenPin,HIGH);
  digitalWrite(redPin,LOW);
  digitalWrite(bluePin,LOW);
  }
  
if(userChoice=="blue"){
  digitalWrite(bluePin,HIGH);
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
 }
  

}
