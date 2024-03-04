int btn_pullup =6;
int btn_pulldown = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(btn_pullup, INPUT);
  pinMode(btn_pulldown, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(digitalRead(btn_pulldown));
  Serial.print(" ");
  Serial.println(digitalRead(btn_pullup));
  delay(200);

}
