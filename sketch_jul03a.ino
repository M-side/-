#include<MorseCode.h>
int incomingByte = 0;
MorseCode Morse(13);
void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()>0){
    incomingByte = Serial.read();
    
    Morse.transfor(incomingByte);
    
  }

}
