const int analogInPin = A0;
int sensorValue = 450;
int outputValue = 112;
int spPin = 13;
void setup() {
  Serial.begin(9600);
  pinMode(spPin,OUTPUT);
}
void loop() {
  sensorValue = analogRead(analogInPin);
  outputValue = map(sensorValue, 450, 1023, 112, 255);
  Serial.print("sensor=  ");
  Serial.print(sensorValue);
  Serial.print("\t liquid point= ");
  Serial.println(outputValue);
  delay(500);
  if(sensorValue>0){
    for (int i=0; i<1000; i++)
  {
    digitalWrite(spPin, HIGH);
    delayMicroseconds(500);
    digitalWrite(spPin, LOW);
    delayMicroseconds(500);
    
   }
  }
}
