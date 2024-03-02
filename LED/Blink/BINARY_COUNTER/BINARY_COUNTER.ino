int led[6] = {8,9,10,11,12,13};

void setup() {
  // put your setup code here, to run once:
  for(int i = 0; i<6 ; i++){
    pinMode(led[i], OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<64; i++){
    // 000000 0 0%2 = 0
    // 000001 1 0%2 = 1
    // 000010 2 2%2 = 0
    // 000011 3 3%2 = 1
    // 000100 4 4%2 = 0
    //..
    // 000111 7 7%2 = 1 
    // -------
    if((i%2)>0){ digitalWrite(led[0],HIGH); }else{digitalWrite(led[0],LOW);}
    if((i%4)>1){ digitalWrite(led[1],HIGH); }else{digitalWrite(led[1],LOW);}
    if((i%8)>3){ digitalWrite(led[2],HIGH); }else{digitalWrite(led[2],LOW);}
    if((i%16)>7){ digitalWrite(led[3],HIGH); }else{digitalWrite(led[3],LOW);}
    if((i%32)>15){ digitalWrite(led[4],HIGH); }else{digitalWrite(led[4],LOW);}
    if((i%64)>31){ digitalWrite(led[5],HIGH); }else{digitalWrite(led[5],LOW);}
    delay(300);
  }

}
