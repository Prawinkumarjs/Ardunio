int led_R = 13;
int led_G = 12;
int led_B = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(led_R , OUTPUT);
  pinMode(led_G , OUTPUT);
  pinMode(led_B , OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led_R, HIGH);
  delay(1000);
  digitalWrite(led_R, LOW);
  delay(1000);
  digitalWrite(led_G, HIGH);
  delay(1000);
  digitalWrite(led_G, LOW);
  delay(1000);
  digitalWrite(led_B, HIGH);
  delay(1000);
  digitalWrite(led_B, LOW);
  delay(1000);

}
