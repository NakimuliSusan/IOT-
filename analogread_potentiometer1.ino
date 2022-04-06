// C++ code
//
int sensorPin = A5;
int ledPin = 7;
int sensorvalue = 0;
void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  // Reading the value from the sensor pin using analogRead
  sensorvalue = analogRead (sensorPin);
  //turn led on
  digitalWrite(ledPin,HIGH);
  delay(sensorvalue);
  digitalWrite(ledPin, LOW);
  delay(sensorvalue);
  Serial.println(sensorvalue);
  
  
}