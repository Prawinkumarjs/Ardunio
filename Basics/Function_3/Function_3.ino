void setup() {
  Serial.begin(9600);
}

void loop() {
  if(Serial.available() > 0) {
    char color = Serial.read();
    fullcolor(color);
  }
}

void fullcolor(char color){
  if(color == 'r'){
    Serial.println("red");
  }
  else if(color == 'g'){
    Serial.println("green");
  }
  else if(color == 'b'){
    Serial.println("blue");
  }
}
