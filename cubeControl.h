#ifndef CUBECONTROL_H
#define CUBECONTROL_H
#include<Arduino.h>


class cubeControl
{
private:
    int x;
    int y;
    int number_of_dev;
    int cs_Pin;
public:
    cubeControl(/* args */);
    ~cubeControl();
    void init();
    void setPixel(int x , int y);
    void clearPixel();
    void clearOnePixel(int x, int y);
    void moveFoward();
    void moveBackward();
    void moveLeft();
    void moveRight();
    void stop();
};




#endif