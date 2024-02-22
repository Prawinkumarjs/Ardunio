void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  fullcolor("r");
}

void loop() {
  // put your main code here, to run repeatedly:
  
}

void fullcolor(char color){
  if(color == "r"){
    Serial.println("red");
  }
  else if(color == "g"){
    Serial.println("green");
  }
  else if(color == "b"){
    Serial.println("Blue");
  }

}  