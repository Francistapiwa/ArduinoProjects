
int j = 1;
int timedelay = 750;
String myString = "j =  ";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(j);
Serial.print(myString);
j=j+1;
delay(timedelay);
}
