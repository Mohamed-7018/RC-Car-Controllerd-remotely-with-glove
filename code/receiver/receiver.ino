#include <nRF24L01.h>
#include <printf.h>
#include <RF24.h>
#include <RF24_config.h>
#include <Wire.h>
#include <MPU6050.h>
#include<SPI.h>
//nrf
#define mr_1 2
#define mr_2 3
#define ml_1 4
#define ml_2 5

RF24 radio(9, 10); //ce,csn
const byte address[6] = "00001";

void setup() {
  // put your setup code here, to run once:

  radio.begin();
  Serial.begin(9600);
  radio.openReadingPipe(0, address);
 //new part
  if (!radio.begin()) {
    Serial.println(F("radio hardware is not responding!!"));
    while (1) {} // hold in infinite loop
  }
////new part
 radio.setChannel(2);
  radio.setPayloadSize(4);
  radio.setAutoAck(false);
  radio.setCRCLength(RF24_CRC_8);
  radio.printDetails();
////end part
  radio.startListening();
  pinMode(mr_1, OUTPUT);
  pinMode(mr_2, OUTPUT);
  pinMode(ml_1, OUTPUT);  pinMode(ml_2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  /*stop =1
    right =2
    left =3
    back=4
    front=5
  */
 Serial.println((radio.available())?"done":"faild");
 
  if (radio.available()) {
    int redata;
    radio.read(&redata, sizeof(redata));

    if (redata == 1) {
        Serial.println("stop");

      movemo(0, 0, 0, 0);
     // delay (1000);

    }

    if (redata == 2) {
        Serial.println("right");

      movemo(0, 1, 0, 0);
      //delay (1000);

    } if (redata == 3) {
        Serial.println("left");

      movemo(0, 0, 0, 1);
     // delay (1000);

    } if (redata == 4) {
        Serial.println("back"); 

      movemo(1, 0, 1, 0);
 
      //delay (1000);

    } if (redata == 5) {
        Serial.println("front");  

      movemo(0, 1, 0, 1);
    
     // delay (1000);

    }


  }


}
void movemo(int mr1, int mr2, int ml1, int ml2) {
  digitalWrite(mr_1, mr1);
  digitalWrite(mr_2, mr2);
  digitalWrite(ml_1, ml1);
  digitalWrite(ml_2, ml2);

}
