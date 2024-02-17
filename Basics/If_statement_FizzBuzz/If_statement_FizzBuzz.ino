void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
int x =x+1;
void loop() {
  // put your main code here, to run repeatedly:
  if(x%3==0){
    Serial.println("FIZZ");
  }
  else{
    Serial.println(x);
  }

}
