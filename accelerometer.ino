#include <AcceleroMMA7361.h>
AcceleroMMA7361 accelero;
int x;
int y;
int z;
const int xpin = A3; // x-axis of the accelerometer
const int ypin = A2; // y-axis
const int zpin = A1;
void setup()
{
Serial.begin(9600);
accelero.begin(13, 12, 11, 10, A0, A1, A2);
accelero.calibrate();
}
void loop()
{
Serial.print(analogRead(xpin) - 336);
Serial.print("\t");
Serial.print(analogRead(ypin) - 345);
Serial.print("\t");
Serial.print(analogRead(zpin) - 260);
Serial.println();
delay(100);
}
