
int led_13 = 13 ;
int led_12 = 12 ;
int led_11 = 11 ;

int led[3] = {13,12,11};
void setup() {
  // put your setup code here, to run once:
  pinMode(led_13 , OUTPUT);
  pinMode(led_12 , OUTPUT);
  pinMode(led_11 , OUTPUT);

  for(int i = 0; i<4; i++){
    pinMode(led[i], OUTPUT);
  }

  
    
  



}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i<4 ; i++){
    digitalWrite(led[i], HIGH);
    delay(1000);
    digitalWrite(led[i], LOW);
    delay(1000);
  } 
  
}
