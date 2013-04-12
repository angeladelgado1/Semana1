#include "Robot.h"

Robot::Robot(string name,int power_level,string model,string favorite_food)
{
    this->name=name;
    this->power_level=power_level;
    this->model=model;
    this->favorite_food = favorite_food;
}

string Robot::getName()
{
    return name;
}

int Robot::getPowerLevel()
{
    return power_level;
}

string Robot::getModel()
{
    return model;
}

string Robot::getFavoriteFood()
{
    return favorite_food;
}

Robot::~Robot()
{
    //dtor
}
