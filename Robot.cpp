#include "Robot.h"

Robot::Robot(string name,int power_level,string model,string favorite_food)
{
    this->name=name;
    this->power_level=power_level;
    this->model=model;
    this->favorite_food = favorite_food;
    this->x = 0;
    this->y = 0;
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

void Robot::setAngle(int angle)
{
    if (angle == 0 or angle == 90 or angle == 180 or angle == 270)
        this->angle = angle;
    else{
        this->angle = 1;
        cout << "Angulo no valido" <<endl ;
    }

}

void Robot::setWalk(int steps)
{
    if (steps > 0)
        this->steps = steps;
    else
        return;
}
void Robot::printCoor()
{
    if (this->angle == 0)
        this->x += this->steps;
    if (this->angle == 90)
        this->y += this->steps;
    if (this->angle == 180)
        this->x -= this->steps;
    if (this->angle == 270)
        this->y -= this->steps;

    cout << "(" << this->x << "," << this->y << ")" << endl;
}

void Robot::setRespuesta(char resp)
{
    while (resp == 'Y'){
            cout << "How many steps? ";
            int steps,angle;
            cin >> steps;
            this->setWalk(steps);
            cout << "What angle? ";
            cin >> angle;
            this->setAngle(angle);
            cout << "Your Robot is in: ";
            this->printCoor();
            cout <<endl << "Do you want to keep moving your Robot? (Y/N) ";
            cin >> resp;
    }

}
Robot::~Robot()
{
    //dtor
}
