void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); // display output that is blinking led at pin  13

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);  // led is on 
  delay(1000);  // time delay in 1 sec
  digitalWrite(13, LOW);  // led is off
  delay(1000);  // time delay in 1 sec

}