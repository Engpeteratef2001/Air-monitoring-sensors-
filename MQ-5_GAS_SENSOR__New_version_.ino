
 //Monitoring Indoor air Infinity team NASA Space Apps//
int redLed = 9;
int buzzer = 8;
int smokeA0 = A5;
// Your threshold value
int sensorThres = 60;     // As the number of sensorThres increases sensitivity decreases
void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(smokeA0, INPUT);
  Serial.begin(9600);
}

void loop() {
  int analogSensor = analogRead(smokeA0);
   Serial.println(analogSensor);
  // Checks if it has reached the threshold value
  if (analogSensor > sensorThres) 
  {
    digitalWrite(redLed, HIGH);
    digitalWrite(buzzer,HIGH);
    Serial.print("Leakage detected: ");
  }
  else
  {
    digitalWrite(redLed, LOW);
    digitalWrite(buzzer,LOW);
    Serial.print("No leakage: ");
  }
  delay(100);
}
