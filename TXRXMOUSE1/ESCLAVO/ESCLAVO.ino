#define led 13

void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    char val = Serial.read();
     Serial.println(val);
    if(val == 'A')
    
    {
      digitalWrite(led, HIGH);
      
    }
    else if(val == 'a')
    {
      digitalWrite(led, LOW);
    }
  }
}