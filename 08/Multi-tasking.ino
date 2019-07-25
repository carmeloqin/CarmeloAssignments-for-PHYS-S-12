void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(7, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  controlLED();
  
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);

  if (sensorValue >= 500) {
    digitalWrite(3, HIGH);
  }
  else {
    digitalWrite(3, LOW);
  }
}

void controlLED() {
  if (millis() % 8000 < 5000) {
    digitalWrite(7, HIGH);
  }
  else {
    digitalWrite(7, LOW);
  }
}
