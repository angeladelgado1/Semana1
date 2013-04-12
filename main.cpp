#include <iostream>
#include <string>
#include "Robot.h"

using namespace std;

int main()
{
    string name;
    int power_level;
    string model;
    string favorite_food;

    cout << "Robot name? ";
    cin >> name;
    cout << "Robot power_level? ";
    cin >> power_level;
    cout << "Robot model? ";
    cin >> model;
    cout << "Robot Favorite Food? ";
    cin >> favorite_food;


    cout << endl << "---Creating robot---" << endl;
    Robot robot(name,power_level,model,favorite_food);
    cout << "---Robot created---" << endl;

    cout << endl << "Robot name:" << robot.getName() << endl;
    cout << "Robot power level:" << robot.getPowerLevel() << endl;
    cout << "Robot model:" << robot.getModel() << endl;
    cout << "Robot Favorite Food: " << robot.getFavoriteFood();
    return 0;
}
