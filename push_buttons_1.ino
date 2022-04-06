// C++ code
//
int buttonPin = 4;
void setup()
{
  //It will read otput from the button, its set as INPUT.
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int state = digitalRead(buttonPin);
  Serial.println(state);
  delay(1000);
  
  
  
  
}