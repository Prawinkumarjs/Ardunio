void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);   
  
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello World!");  // printing hello world in the loop
  delay(1000);   // time delay in 1 sec

}