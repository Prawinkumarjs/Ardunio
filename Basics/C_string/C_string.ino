void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // Arduino have two types of string c and c++
  // c type string is an array of characters 

  char c_string[8] = "Arduino";  
  // string length - strlen(c_string)
  int c_length = strlen(c_string);
  Serial.println(c_length);

  // strcpy(destination, source);
  // copy string source to destination.
  char c_string2[8];
  strcpy(c_string2, c_string);
  Serial.println(c_string2);

  // strcat(destination, source);
  // append source string to the end of the destinationn string
  char c_string3[8] = "z";                // array must be initialized with a brace-enclosed initializer that is double quotes
  strcat(c_string3, c_string);
  Serial.println(c_string3);

  // if(strcmp(str, "Arduino") == 0)
  // do something if the variable str is equal to "Arduino"

  if(strcmp(c_string,"Arduino") == 0){
    Serial.println("They are equal");                  // case sensitive
  }
  else{
    Serial.println("They are Not equal");
  }



}

void loop() {
  // put your main code here, to run repeatedly:

}
