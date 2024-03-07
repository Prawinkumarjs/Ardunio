const int ldrPin = A0; // LDR connected to analog pin A0

void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 baud rate
}

void loop() {
  int ldrValue = analogRead(ldrPin); // Read LDR value
  Serial.println(ldrValue); // Print LDR value to serial monitor
  delay(500); // Delay for 500 milliseconds
}
