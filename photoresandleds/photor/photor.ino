

int lightPin =A1;
int lightVal;
int dv=250; //milliseconds
int redLed=8;
int greenLed=7;

void setup() {
  // put your setup code here, to run once:
pinMode(lightPin,INPUT);
pinMode(redLed,OUTPUT);
pinMode(greenLed,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
lightVal=analogRead(lightPin);
Serial.println(lightVal);

if(lightVal>340){
  digitalWrite(redLed,LOW);
  digitalWrite(greenLed,HIGH);
  
} else if(lightVal<340){
  digitalWrite(redLed,HIGH);
  digitalWrite(greenLed,LOW);
}
}
