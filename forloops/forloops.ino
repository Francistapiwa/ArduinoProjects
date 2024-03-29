int yellowLed = 6;
int redLed = 9;
int del = 200;
int yellowBlink = 3;
int redBlink = 5;
int j;

void setup() {
  // put your setup code here, to run once:
pinMode (yellowLed,OUTPUT);
pinMode (redLed, OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
for(j=1;j<=yellowBlink;j=j+1){
digitalWrite (yellowLed,HIGH);
delay(del);
digitalWrite (yellowLed,LOW);
delay(del);
}
for (j=1;j<=redBlink;j=j+1){
digitalWrite (redLed,HIGH);
delay (del);
digitalWrite (redLed,LOW);
delay (del);
}



}
