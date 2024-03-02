#define ACTIVATED LOW

int led1 = 13;
int led2 = 12;
int led3 = 11;
int push_button1 = 7;
int push_button2 = 6;
int push_button3 = 5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(push_button1, INPUT);
  pinMode(push_button2, INPUT);
  pinMode(push_button3, INPUT);
  digitalWrite(push_button1,HIGH);
  digitalWrite(push_button2,HIGH);
  digitalWrite(push_button3,HIGH);

}

int buttonState1;
int buttonState2;
int buttonState3;

void loop() {
  // put your main code here, to run repeatedly:
  buttonState1 = digitalRead(push_button1);
  buttonState2 = digitalRead(push_button2);
  buttonState3 = digitalRead(push_button3);

  if(buttonState1 == ACTIVATED){
    digitalWrite(led1,HIGH);
  }
  else if(buttonState2 == ACTIVATED ){
     digitalWrite(led2,HIGH);
  }
  else if(buttonState3 == ACTIVATED){
     digitalWrite(led3,HIGH);
  }
  
  else{
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
  }

}
