int led = 4;
int sensor=A0;
int threshold = 400;
void setup()
{
  pinMode(4,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
  
}



void loop() {
 int value=analogRead(sensor);
 if(value>=threshold)
 {
  digitalWrite(4,HIGH);
  delay(100);
 }
else
digitalWrite(4,LOW);
Serial.println(value);
}
