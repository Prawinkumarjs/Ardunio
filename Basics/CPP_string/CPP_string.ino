void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  // c++ string
  // String cppstring = "Arduino";
  // here the String is in captial letter;

  String cppstring = "Arduino";
  Serial.println(cppstring);

  // message.length()
  // provides the number of characters in the string

  Serial.println(cppstring.length());


  // message.concat(anotherMessage)
  // appends the contents of anotherMessage to the message
  
  cppstring.concat("UNO");
  Serial.println(cppstring);
  Serial.println(cppstring.length());

  // message.substring(2, 5);
  // returns a substring starting from 2 till 5
  

  Serial.println(cppstring.substring(2, 5));

  // cppstring.indexOf("i");
  // indexOf and lastIndexOf functions are used to find an 
  //       instance of a particular character in a string
  Serial.println(cppstring.indexOf("i"));
  Serial.println(cppstring[4]);

}

void loop() {
  // put your main code here, to run repeatedly:

}
