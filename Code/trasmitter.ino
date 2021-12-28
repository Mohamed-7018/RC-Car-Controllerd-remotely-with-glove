#include <nRF24L01.h>
#include <printf.h>
#include <RF24.h>
#include <RF24_config.h>
#include <Wire.h>
#include <MPU6050.h>
#include<SPI.h>
//mpu
MPU6050 mpu;
int16_t ax, ay, az;
int16_t gx, gy, gz;
//nrf
RF24 radio(9,10);//ce,csn
const byte address[6]="00001";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
radio.begin();
radio.openWritingPipe(address);
radio.stopListening();
Serial.println ("Initializing MPU and testing connections");
mpu.initialize ( );
Serial.println((mpu.testConnection( )) ? "Successfully Connected" : "Connection failed");
}

void loop() {
  // put your main code here, to run repeatedly:
  int data ;
  /*stop =1
   * right =2
   * left =3
   * back=4
   * front=5
   */
mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
ax = map(ax, -17000, 17000, -125, 125);
ay = map(ay, -17000, 17000, -125, 125);
az = map(az, -17000, 17000, -125, 125);

if (ax>50){
  Serial.println("right");
  data=2;
  radio.write(&data,sizeof(data));
   delay(1000);
 
}
if (ax<-50){
  Serial.println("left");
   data=3;
  radio.write(&data,sizeof(data));
    delay(1000);

  
}
if (ax<50&&ax>-50&&ay<50&&ay>-50){
  Serial.println("stop");
   data=1;
  radio.write(&data,sizeof(data));
    delay(1000);

  
}
if (ay>50){
  Serial.println("front");  
   data=5;
  radio.write(&data,sizeof(data));
  delay(1000);

  
}
if (ay<-50){
  Serial.println("back"); 
  data=4;
  radio.write(&data,sizeof(data));
  delay(1000);

  
}


}
