int trig=9;
int echo=10;
int I1 = 4;
int I2 = 5;
int I3 = 6;
int I4 = 7;

float duration,distance;


void setup()
{
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
pinMode(I1,OUTPUT);
 pinMode(I2,OUTPUT);
 pinMode(I3,OUTPUT);
 pinMode(I4,OUTPUT);

}

void loop()
{
  digitalWrite(trig, LOW);
 digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);

  distance=0.0343*duration/2.00;
  
  if (distance<=15.00)

{
  digitalWrite(I1, LOW);
 digitalWrite(I2, HIGH);
 digitalWrite(I3, LOW);
 digitalWrite(I4, HIGH);
 delay(1000);
  digitalWrite(I1, LOW);
 digitalWrite(I2, HIGH);
 digitalWrite(I3, HIGH);
 digitalWrite(I4, LOW); 
delay(1000);
 digitalWrite(I1, HIGH);
 digitalWrite(I2, LOW);
 digitalWrite(I3, HIGH);
 digitalWrite(I4, LOW);
 delay(1000);

}
else
{
 digitalWrite(I1, HIGH);
 digitalWrite(I2, LOW);
 digitalWrite(I3, HIGH);
 digitalWrite(I4, LOW);
 delay(1000);
}
}
