void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int x = sum(4,36);
  Serial.println(x);

  Serial.println(sum(34,66));
  Serial.println("Setup finished");

}

int z = 0;
int y = 5;

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(sum(z,y));
  z++;
  y += 3;
  delay(500);

}


/*
ReturnType functionName (parameterName,..){
  Function body
  Optionally returnValue
}
*/

int sum(int a, int b){
  int c = a + b;
  return c;
}
