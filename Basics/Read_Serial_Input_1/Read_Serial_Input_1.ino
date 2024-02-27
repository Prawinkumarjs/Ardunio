void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.setTimeout(200);   // time for waiting  (long)
  // Serial.setTimeout(1);  // time for waiting  (short)
}

void loop() {
  // put your main code here, to run repeatedly:
  String mystr = "";
  while(mystr==""){
    mystr = Serial.readString();     // get the user input
  }
  Serial.println(mystr);

}
