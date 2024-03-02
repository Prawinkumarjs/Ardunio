void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(12, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(3000);                      // wait for a second
  digitalWrite(13, LOW);   // turn the LED off by making the voltage LOW
  delay(2000);                      // wait for a second
  digitalWrite(12, LOW);   // turn the LED off by making the voltage LOW
  delay(4000);                      // wait for a second
}
