void setup()
{
  pinMode(2, INPUT);  // Set Digital Pin 2 as Input (PIR Sensor)
  pinMode(3, OUTPUT); // Set Digital Pin 3 as Output (LED)
  Serial.begin(9600); // Open the serial port at 9600 bps:
}

void loop()
{
  if (digitalRead(2) == HIGH) // If motion detected
  {
    Serial.println("MOTION DETECTED"); // Log Motion Detected
    digitalWrite(3, HIGH);    // Turn LED ON
  	delay(1000);              // Wait for 1000 millisecond(s)
  	digitalWrite(3, LOW);     // Turn LED OFF
  	delay(1000);              // Wait for 1000 millisecond(s)
  }
}
