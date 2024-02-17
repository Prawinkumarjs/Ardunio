void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  /*
  if(condition ){
    action / statements
  }
  else if(condition){
    action/statement
  }
  else{
    statement
  }
  */
  int x=2;
  if(x>2){
    Serial.println("x greater than 2");
  }
  else if  (x<2){
    Serial.println("x less than 2");
  }
  else {
    Serial.println("X is equal to 2");
  }
  /*
  == equals to 
  != not equal to 
  >  greater than 
  <  less than
  >= greater than or equals to 
  <= less than or equals to 
  */
  
  // examples of assignment operator using if else statement

  // example of equals to operator
  Serial.println("2==3")
  if(2==3){
    Serial.println("True");
  }
  else{
    Serial.println("False");
  }

  // example of not equals to operator
  Serial.println("2!=3")
  if(2!=3){
    Serial.println("True");
  }
  else{
    Serial.println("False");
  }

  // example of greater than
  Serial.println("2>3")
  if(2>3){
    Serial.println("True");
  }
  else{
    Serial.println("False");
  }

 
  // example of less than
  Serial.println("2<3")
  if(2<3){
    Serial.println("True");
  }
  else{
    Serial.println("False");
  }
  

  // example of greater than or equals to 
  Serial.println("2>=3")
  if(2>=3){
    Serial.println("True");
  }
  else{
    Serial.println("False");
  }


  // example of less than or equals to 
  Serial.println("2<=3")
  if(2<=3){
    Serial.println("True");
  }
  else{
    Serial.println("False");
  }

  /*
  Logical Operators 
  && - AND
  || - OR
  !  - NOT
  */
  Serial.println("-- logical operators");

  // example of logical AND
  Serial.println("1==1 && 2==2")
  if (1==1 && 2==2){
    Serial.println("True");
  }
  else{
    Serial.println("False");
  }


  Serial.println("1==1 && 2!=2")
  if (1==1 && 2!=2){
    Serial.println("True");
  }
  else{
    Serial.println("False");
  }

  // example of logical OR
  Serial.println("1==1 || 2==2")
  if (1==1 || 2==2){
    Serial.println("True");
  }
  else{
    Serial.println("False");
  }
  
  Serial.println("1==3 || 3==2")
  if (1==3 || 3==2){
    Serial.println("True");
  }
  else{
    Serial.println("False");
  }

  // example of Logical not
  Serial.println("!(1==2)")
  if (!(1==2)){
    Serial.println("True");
  }
  else{
    Serial.println("False");
  }


  // example of logical
  Serial.println("(1==2 && 2==2) || (3==3 || 2<1)")
  if ((1==2 && 2==2) || (3==3 || 2<1)){
    Serial.println("True");
  }
  else{
    Serial.println("False");
  }


}

void loop() {
  // put your main code here, to run repeatedly:

}
