/*
Amerike University
Author: Ali Angel
Work #: 22
Date: 08/04/25
Description: This program will declare a class called player with the "name","health" and "money" attributes, each attribute has a setter and a getter function
theres a "substract" function for the numeric attributes, a Player object is declared and all its attributes initialized, then its functions are called
*/

#include <iostream>

using namespace std;

class Player
{
    private:
    string name;
    double money;
    double health;

    public:
    void setName(string usrName)
    {
        name = usrName;
    }
    string getName()
    {
        return name;
    }
    void setmoney(double usrMoney)
    {
        money = usrMoney;
    }
    double getMoney()
    {
        return money;
    }
    void setHealth(double usrHealth)
    {
        health = usrHealth;
    }
    double getHealth()
    {
        return health;
    }
    void substractMoney(double usrAmount)
    {
        money = money - usrAmount;
    }
    void substractHealth(double usrAmount)
    {
        health = health - usrAmount;
    }
};

int main(){
    Player character1;
    string usrName = "Olga";
    double usrMoney = 10.65;
    double usrHealth = 20;
    double usrAmount = 4.50;

    character1.setName(usrName);
    character1.setmoney(usrMoney);
    character1.setHealth(usrHealth);
    cout << "Player Name: " << character1.getName();
    cout << "\nMoney: $" << character1.getMoney();
    cout << "\nHealth: " << character1.getHealth();
    character1.substractMoney(usrAmount);
    character1.substractHealth(usrAmount);
    cout << "\nPlayer Name: " << character1.getName();
    cout << "\nMoney: $" << character1.getMoney();
    cout << "\nHealth: " << character1.getHealth();



}