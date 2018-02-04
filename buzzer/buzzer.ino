int BUZZER=2;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(BUZZER,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
while(millis()<=180000)
{
  while(millis()<=60000)
  {
    digitalWrite(BUZZER,HIGH);
    delay(20);
    digitalWrite(BUZZER,LOW);
    delay(19980);
    }
  while(millis()<=120000)
  {
    digitalWrite(BUZZER,HIGH);
    delay(20);
    digitalWrite(BUZZER,LOW);
    delay(9980);
    }
    while(millis()<=170000)
  {
    digitalWrite(BUZZER,HIGH);
    delay(20);
    digitalWrite(BUZZER,LOW);
    delay(4980);
    }
  while(millis()<=180000)
  {
    digitalWrite(BUZZER,HIGH);
    delay(20);
    digitalWrite(BUZZER,LOW);
    delay(980);
    }
    
    digitalWrite(BUZZER,LOW);
  }
}
