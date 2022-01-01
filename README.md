# RC-Car-Controllerd-remotely-with-glove


##Description:
Our project can be divided into two parts:
The first part is the glove that is used to read the difference in x-axis and y-axis in order to determine the direction 
The second part is the robot car that delivers the signal from the glove and move in the direction which is determined by the glove 
So that the car direction can be changed by changed the glove direction 

Project components:
Two Arduino uno: https://ram-e-shop.com/product/kit-arduino-uno/ 

MPU6050: https://ram-e-shop.com/product/kit-imu-mpu6050-original/ 


Two NRF24l01: https://ram-e-shop.com/product/nrf24l01-2-4-ghz-rf-module/ 

Dual H-bridge motor driver (L298) : https://ram-e-shop.com/product/kit-l298-red/ 

DC motors: https://ram-e-shop.com/product/ro-wheel-motor-dg01d/ 

Wheels: https://ram-e-shop.com/product/ro-wheel-rw002-2/ 


## Mechanical Design :
The function of the RC Robot car is to move freely in all directions. This can be achieved by having two motors controlling two wheels at the back of the RC Car and a free (caster) wheel cantered in the front; that way we have a balanced free moving RC car.
The mechanical components of the RC Robot Car is divided into the following:
1.	Robot Chassis Base: Designed in way that it can hold two motors at the bottom and other components mounted on top of it.
2.	Robot Chassis Top: Designed as a cover for the RC car and to look like the chassis base with extra slots for the top flange and wings.
3.	Motor Supports (Two Parts): Designed to hold the two motors at the bottom
4.	Corner Spacers: Designed to hold the top chassis to the base
5.	Front Spacer: Designed to hold the top chassis to the base
6.	Back Spacer: Designed to hold the top chassis to the base
7.	Top Wing (Right and Left): Mounted on top of the Chassis Top
8.	Top Flange: Designed to hold the top wings

![image](https://user-images.githubusercontent.com/80456446/147681666-b6758e1c-daf6-4877-a589-d04ab3a59efd.png)


## Mechanical Parts:
Chassis Base               |  Chassis Top
:-------------------------:|:-------------------------:
![image](https://user-images.githubusercontent.com/80456446/147679912-713a2da4-8150-48fd-9d8a-2cdbcccf9259.png) | ![image](https://user-images.githubusercontent.com/80456446/147679942-6e9d927f-e44b-4e66-8eb8-5f0ca90c4259.png)



Motor Supports               |  Corner Spacers
:-------------------------:|:-------------------------:
![image](https://user-images.githubusercontent.com/80456446/147680252-ff42fbea-774b-4d6f-828d-3022bae09eb1.png)| ![image](https://user-images.githubusercontent.com/80456446/147680286-b06f1d81-93b2-4788-b1fa-950c147f3291.png)


Front Spacer               |  Back Spacer
:-------------------------:|:-------------------------:
![image](https://user-images.githubusercontent.com/80456446/147680455-97e077c0-ed15-4971-a332-2a12ae298280.png) | ![image](https://user-images.githubusercontent.com/80456446/147680470-9b4b910c-d28d-47fa-9d9c-37855a4ac381.png)


Top Wing               |  Top Flange
:-------------------------:|:-------------------------:
![image](https://user-images.githubusercontent.com/80456446/147680525-8aade384-1e4f-4341-b98a-cfb171cbf4f6.png)| ![image](https://user-images.githubusercontent.com/80456446/147680543-798e049f-7a18-421b-b313-9c77499956d0.png)



## Assembly 
![image](https://user-images.githubusercontent.com/80456446/147681775-98b89be9-0920-4f9c-8c82-6ea7788e9713.png)


## Code:
the code divides into two parts: 
First part transmitter code which is used to read the difference in two axes and send data to robot car 
The second part receiver code which receives data and moves robot car 




## Pixels App 
![187960930_3955292401216930_6844533153445761662_n](https://user-images.githubusercontent.com/80456446/124113684-00392400-da6c-11eb-8779-cea0193eefb6.jpg)

“Pixels Egypt” mobile app is considered an important and easy way to stay in touch with us.

The app will help you to:

- Browse different online courses and resources in different fields like Computer, Communication, Power, and Mechanical Engineering.
- You will find courses, videos, books and more.
- Follow our news.
- Share our knowledge.
- Be one of the family.

Get it now on Google Play:

https://play.google.com/store/apps/details


## Follow Pixels:

- Facebook:

https://www.facebook.com/PixelsEgyptOrg

- YouTube:

https://www.youtube.com/c/PixelsEgypt

- Instagram:

https://www.instagram.com/pixelsegypt/

- Twitter:

https://twitter.com/pixelsegypt?lang=en

