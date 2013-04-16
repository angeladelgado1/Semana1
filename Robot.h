#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>
#include <string>

using namespace std;

class Robot
{
private:
    string name;
    int power_level;
    string model;
    string favorite_food;
    int angle,x,y,steps;

public:
    Robot(string name,int power_level,string model,string favorite_food);
    string getName();
    int getPowerLevel();
    string getModel();
    string getFavoriteFood();
    void setRespuesta(char resp);
    void setWalk (int steps);
    void setAngle(int angle);
    void printCoor();
    virtual ~Robot();
};

#endif // ROBOT_H
