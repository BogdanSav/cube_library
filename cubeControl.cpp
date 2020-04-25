#include "cubeControl.h"
#include <SPI.h>
#include <LedMatrix.h>

#define NUMBER_OF_DEVICES 1
#define CS_PIN 27
#define wheel_r_1 18
#define wheel_r_2 19
#define wheel_l_1 32
#define wheel_l_2 33
LedMatrix ledMatrix(NUMBER_OF_DEVICES, CS_PIN);

cubeControl::cubeControl()
{
    //some code must be here
}
cubeControl::~cubeControl()
{
    //
}

void cubeControl::init()
{

    ledMatrix.init();
    ledMatrix.clear();
    ledMatrix.commit();
    pinMode(wheel_l_1, OUTPUT);
    pinMode(wheel_l_2, OUTPUT);
    pinMode(wheel_r_1, OUTPUT);
    pinMode(wheel_r_2, OUTPUT);
}
void cubeControl::setPixel(int x, int y)
{

    ledMatrix.setPixel(x, y);
    ledMatrix.commit();
}
void cubeControl::clearPixel()
{
    ledMatrix.clear();
    ledMatrix.commit();
}
void cubeControl::clearOnePixel(int x, int y)
{
    ledMatrix.clearPixel(x, y);
    ledMatrix.commit();
}
void cubeControl::moveFoward()
{
    digitalWrite(wheel_r_1, HIGH);
    digitalWrite(wheel_r_2, LOW);
    digitalWrite(wheel_l_1, HIGH);
    digitalWrite(wheel_l_2, LOW);
}
void cubeControl::moveBackward()
{
    digitalWrite(wheel_r_1, LOW);
    digitalWrite(wheel_r_2, HIGH);
    digitalWrite(wheel_l_1, LOW);
    digitalWrite(wheel_l_2, HIGH);
}
void cubeControl::moveLeft()
{
    digitalWrite(wheel_r_1, HIGH);
    digitalWrite(wheel_r_2, LOW);
    digitalWrite(wheel_l_1, LOW);
    digitalWrite(wheel_l_2, LOW);
}
void cubeControl::moveRight()
{
    digitalWrite(wheel_r_1, LOW);
    digitalWrite(wheel_r_2, LOW);
    digitalWrite(wheel_l_1, HIGH);
    digitalWrite(wheel_l_2, LOW);
}
void cubeControl::stop()
{
    digitalWrite(wheel_r_1, LOW);
    digitalWrite(wheel_r_2, LOW);
    digitalWrite(wheel_l_1, LOW);
    digitalWrite(wheel_l_2, LOW);
}
void cubeControl::_delay(int time)
{

    unsigned int lastTick = 0;
    while (true)
    {
        if (millis() - lastTick >= time)
        {
            lastTick = millis();
            continue;
        }
    }
}