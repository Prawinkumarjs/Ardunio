void setup() {
  // put your setup code here, to run once:
  serial.begin(9600);   
  serial.println("Hello");  // print hello in new line 
  serial.println("Hello");  // print hello in new line 
  serial.print("Hello");    // print hello and below string in the same line 
  serial.print("1");
  serial.print("2");
}

void loop() {
  // put your main code here, to run repeatedly:

}