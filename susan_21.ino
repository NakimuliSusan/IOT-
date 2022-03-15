int red1 = 2;
int red2 = 6;
int yellow1 = 8;
int yellow2 = 4;
int green1 = 13;
int green2 = 7;
void setup()
{
  pinMode(red1, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(yellow1,OUTPUT);
  pinMode(yellow2,OUTPUT);
  pinMode(green1,OUTPUT);
  pinMode(green2,OUTPUT);
}

void loop()
{

  digitalWrite(green1, HIGH);
  digitalWrite(red2, HIGH);
  digitalWrite(yellow1,LOW);
  digitalWrite(red1,LOW);
  digitalWrite(yellow2,LOW);
  digitalWrite(green2,LOW);
  delay(9000);
  
  digitalWrite(green1,LOW);
  digitalWrite(red2,LOW);
  digitalWrite(yellow1,HIGH);
  digitalWrite(yellow2,HIGH);
  digitalWrite(green2,LOW);
  digitalWrite(red1,LOW);
  delay(5000);
  
  digitalWrite(green1,LOW);
  digitalWrite(red2,LOW);
  digitalWrite(yellow1,LOW);
  digitalWrite(yellow2,LOW);
  digitalWrite(green2,HIGH);
  digitalWrite(red1,HIGH);
  delay(9000);
  
  
  
  
}