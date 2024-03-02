#define ACTIVATED LOW

int led = 13;
int push_button = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(push_button, INPUT);
  digitalWrite(push_button,HIGH);

}

int buttonState;

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(push_button);
  if(buttonState == ACTIVATED){
    digitalWrite(led,HIGH);
  
  }else{
    digitalWrite(led,LOW);
  }

}
