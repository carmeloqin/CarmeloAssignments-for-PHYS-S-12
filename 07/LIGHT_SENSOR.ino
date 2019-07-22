void setup() {
  Serial.begin(9600);
  pinMode(3,OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);

   if (sensorValue >= 500) {
  digitalWrite(3, HIGH);
 }
 else{
  digitalWrite(3,LOW);
 }
}
