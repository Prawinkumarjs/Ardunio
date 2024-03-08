const int trigPin = 13;
const int echoPin = 11;

long value = 0;
int cm = 0;

void setup(){
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  digitalWrite(trigPin, LOW);
}

void loop(){
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  value = pulseIn(echoPin, HIGH, 50000);
  cm = value / 58;
  Serial.print(value);
  Serial.print(";");
  Serial.println(cm);
}