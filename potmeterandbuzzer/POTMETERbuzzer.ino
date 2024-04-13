int readVal;
int potPin = A1;
int buzzPin=8;
int dt = 2000;


void setup() {
  // put your setup code here, to run once:
pinMode(buzzPin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

readVal=analogRead(potPin);
Serial.println(readVal);
if(readVal>600){
  digitalWrite(buzzPin,HIGH);
}else if(readVal<600){
  digitalWrite(buzzPin,LOW);
}
}
