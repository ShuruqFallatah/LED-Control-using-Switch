
#define led1 13 
#define led2 12
#define led3 11
#define swech 5
void setup() {
 pinMode(led1,HIGH);
 pinMode(led2,HIGH);
 pinMode(led3,HIGH);
 pinMode(swech,INPUT);
}

void loop() {
 boolean swechval= digitalRead(swech);
 if (swechval== HIGH)
 {
   digitalWrite(led1,HIGH);
   digitalWrite(led2,HIGH);
   digitalWrite(led3,HIGH);
   delay(2000);
   digitalWrite(led1,LOW);
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);
   delay(2000);

}
else
{
   digitalWrite(led1,HIGH);
   digitalWrite(led2,HIGH);
   digitalWrite(led3,HIGH);
   delay(100);
   digitalWrite(led1,LOW);
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);
   delay(100);
}
}
