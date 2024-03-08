const int trigPin = 4;
const int echoPin = 3;
const int green_led = 12;
const int red_led = 13;

int distance;
long duration;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(green_led, OUTPUT);
  pinMode(red_led, OUTPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2; // Speed of sound is 343 m/s = 0.034 cm/us
  
  Serial.print("Distance : ");
  Serial.print(distance);
  Serial.println(" CM ");

  if (distance < 15) {
    digitalWrite(red_led, HIGH);
    digitalWrite(green_led, LOW);
    Serial.println("Danger!!!");
  } else {
    digitalWrite(green_led, HIGH);
    digitalWrite(red_led, LOW);
    Serial.println("Safe");
  }

  delay(100); // Delay for stability
}
