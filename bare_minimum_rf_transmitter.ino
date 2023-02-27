#include <RCSwitch.h>

#define RCSwitchDisableReceiving
RCSwitch mySwitch = RCSwitch();

void setup() {
  pinMode(1, OUTPUT);
  mySwitch.enableTransmit(2);
}

void loop() {    
    mySwitch.send("000110110001010100010001");  
    digitalWrite(1, HIGH);
    delay(250);  
    digitalWrite(1, LOW);
    delay(250);  
}
