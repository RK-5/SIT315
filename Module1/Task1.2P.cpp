const int G_LED = 3;
const int PIR_Sensor = 2;
int state = LOW;

void setup()
{
  pinMode(PIR_Sensor, INPUT);  // Set Digital Pin 2 as Input (PIR Sensor)
  pinMode(G_LED, OUTPUT); // Set Digital Pin 3 as Output (LED)
  attachInterrupt(digitalPinToInterrupt(PIR_Sensor),motionDetected,CHANGE);
  Serial.begin(9600); // Open the serial port at 9600 bps:
}

void motionDetected()
{
  state = digitalRead(PIR_Sensor);
  digitalWrite(G_LED,state);
  Serial.print("MOTION DETECTED: ");
  Serial.println(state);
  

}

void loop()
{
}
