const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to
const int analogInPin1 = A1;  // Analog input pin that the potentiometer is attached to
int sensorValue = 0;  // value read from the pot
int sensorValue1 = 0;  // value read from the pot
void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
}
void loop() {
  sensorValue = analogRead(analogInPin);
  sensorValue1 = analogRead(analogInPin1);
Serial.print(sensorValue);
Serial.print(",");
Serial.print("2");
Serial.print(",");
Serial.println(sensorValue1);
delay(500);

}