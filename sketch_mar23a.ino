#define LED 13
#define PIR 3
#define LDR A0
int ldrStatus=0;
void setup()
{
   Serial.begin(9600);
   pinMode(LED,OUTPUT);
   pinMode(PIR,INPUT);
   pinMode(LDR,INPUT);
}
void loop()
{
  int motion=digitalRead(PIR);
   ldrStatus=analogRead(LDR);
  if(ldrStatus <=00  && motion==HIGH)
  {
    digitalWrite(LED,HIGH);
    Serial.println("DETECTED");
  }
  else
  {
    digitalWrite(LED,LOW);
    Serial.println("NO");
  }
}
