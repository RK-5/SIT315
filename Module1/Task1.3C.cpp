const int G_LED = 4;
const int B_LED = 5;
const int PIR_Sensor_A = 2;
const int PIR_Sensor_B = 3;
bool MOTION_A_state = false;
bool MOTION_B_state = false;

void setup()
{
  pinMode(G_LED, OUTPUT); // Set as Output (Green LED)
  pinMode(B_LED, OUTPUT); // Set as Output (Blue LED)
  pinMode(PIR_Sensor_A, INPUT);  // Set as Input (PIR Sensor A)
  pinMode(PIR_Sensor_B, INPUT);  // Set as Input (PIR Sensor B)
  attachInterrupt(digitalPinToInterrupt(PIR_Sensor_A), motionDetectedA, CHANGE);
  attachInterrupt(digitalPinToInterrupt(PIR_Sensor_B), motionDetectedB, CHANGE);
  Serial.begin(9600); // Open the serial port at 9600 bps:
}

void motionDetectedA()
{
  MOTION_A_state = digitalRead(PIR_Sensor_A);
  digitalWrite(G_LED, MOTION_A_state);
  Serial.print("LOCATION 'A' MOTION DETECTED: ");
  Serial.println(MOTION_A_state);
}


void motionDetectedB()
{
  MOTION_B_state = digitalRead(PIR_Sensor_B);
  digitalWrite(B_LED, MOTION_B_state);
  Serial.print("LOCATION 'B' MOTION DETECTED: ");
  Serial.println(MOTION_B_state);
}



void loop()
{
}
