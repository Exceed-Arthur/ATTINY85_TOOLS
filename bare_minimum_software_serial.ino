#include <SoftwareSerial.h> // No hardware Serial on ATTTINY

#define RX    5   // *** DIGITAL PIN RESET (P1)
#define TX    4   // *** DIGITAL PIN 4 (P3)


SoftwareSerial serial(RX, TX); // CREATE NEW SERIAL OBJECT WITH LOWERCASE TO NOT CONFUSE COMPILER
void setup() {
  serial.begin(9600); // SIMULATING 9600 BAUD
  pinMode(4, OUTPUT); // YOU ARE USING TO TRANSMIT A PULSE. OUTPUT!
  pinMode(5, INPUT);  // RECEIVER...INPUT!
  
  // put your setup code here, to run once:
}

void loop() {
  serial.println("You are welcome."); // ACTUAL MESSAGE DELIVERY
}
