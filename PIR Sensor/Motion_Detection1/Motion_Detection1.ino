const int pirPin =2;
const int ledPin =13;

void setup() {
  // put your setup code here, to run once:
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  bool pirReading = digitalRead(pirPin);
  digitalWrite(ledPin, pirReading);
  delay(100);


}
