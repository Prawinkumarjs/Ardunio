void setup() {
  // put your setup code here, to run once:
  /* 
    Variables can consist of both uppercase and lowercase letter
     Variables can contain number 0 to 9 but cannot start with a number
     Variables may not have the same names as Arduino language keywords
     Variables must have unique names
     Variables names are case sensitive
     Variables may not contain any special characters, execpt the underscore(_)
     Variables name cannot be seperated by space
  */
  int x = 0;
  int y = 1;
  const int z = 2;
  Serial.begin(9600);
  Serial.println(x);
  Serial.println(y);
  Serial.println(z);
  

  
  
}

void loop() {
  // put your main code here, to run repeatedly:

}