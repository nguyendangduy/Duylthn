byte ledPin[] = {2,3,4,5,6,7,8,9}; // 
byte pinCount; 
void setup() {
  pinCount = sizeof(ledPin);  
  for (int i=0;i<pinCount;i++) {
    pinMode(ledPin[i],OUTPUT);  
    digitalWrite(ledPin[i],LOW); 
  }
}
void loop() {
  /*
    Bật tuần tự các đèn LED
  */
  for (int i=0; i < pinCount; i++) {
    digitalWrite(ledPin[i],HIGH); 
    delay(500);
  }
  
  /*
    Tắt tuần tự các đèn LED
  */
  for (int i = 0;i < pinCount; i++) {
    digitalWrite(ledPin[i],LOW); 
    delay(500); 
  }
   for (int i=7; i >= 0; i--) {
    digitalWrite(ledPin[i],HIGH); 
    delay(500); 
  }
  
  for (int i = 7;i >= 0; i--) {
    digitalWrite(ledPin[i],LOW); 
    delay(500); 
  }
}
