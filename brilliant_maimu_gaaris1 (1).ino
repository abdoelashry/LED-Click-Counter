
void setup()
{pinMode(3,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(10,OUTPUT);
 
}

void loop(){
  digitalWrite(3,HIGH);
  delay(1000);
  digitalWrite(7,HIGH);
  delay(1000);
  digitalWrite(7,LOW);
  delay(1000);
  digitalWrite(7,HIGH);
  delay(1000);
  digitalWrite(7,LOW);
  delay(1000);
  digitalWrite(7,HIGH);
  delay(1000);
  digitalWrite(7,LOW);
  digitalWrite(3,LOW);
  digitalWrite(10,HIGH);
  delay(1000);
  digitalWrite(10,LOW);
  delay(1000);
}
  
  