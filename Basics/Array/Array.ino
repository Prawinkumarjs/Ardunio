void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int x[1];  // initialization of array
  Serial.println(x[0]);  // this line arduino print the memory address
  int y[2] = {11,22};  // initialization and assigning value to the array
  Serial.println(y[0]);  // print the value call the data by address
  Serial.println(y[1]);

  y[0] = 33;    // replace the value by address
  
  Serial.println("y[0] changed ");
  Serial.println(y[0] );  // print the replaced value



}

void loop() {
  // put your main code here, to run repeatedly:

}
