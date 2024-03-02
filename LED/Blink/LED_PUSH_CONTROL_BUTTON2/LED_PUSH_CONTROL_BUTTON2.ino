#define ACTIVATED LOW

int led1 = 13;
int led2 = 12;
int led3 = 11;
int push_button = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(push_button, INPUT);
  digitalWrite(push_button,HIGH);

}

int buttonState;

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(push_button);
  if(buttonState == ACTIVATED){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
  
  }else{
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
  }

}
