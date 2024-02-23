int global = 11;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int setup_local = 22;
  Serial.println(global);
  Serial.println(setup_local);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  int loop_local = 33;
  Serial.println(loop_local);
}
