int red=3;
int yellow=8;
int green=7;
int pb=6;
int reading=0;
int counter=0;
void setup(){
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(pb,INPUT);
          

}

void loop(){
  reading=digitalRead(pb);
  if(reading==1)
  {
    counter++;
    delay(250);
    if(counter==1)
    {
      digitalWrite(red,1);
    }
    if(counter==2)
    {
      digitalWrite(yellow,1);
    }
    if(counter==3)
    {
      digitalWrite(green,1);
    }
    if(counter==4)
    {
      digitalWrite(red,0);
      digitalWrite(yellow,0);
      digitalWrite(green,0);
      counter=0;
    }
  
  }
  
  
}
  