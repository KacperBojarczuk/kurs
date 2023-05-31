#include <iostream>
#include <string>
class Player{

//Default Constructor / no-args constructor
//Wywoływany, gdy tworzysz nowy obiekt bez argumentów
Player frank;
Player *enemy = new Player;
};


//===========================================


//user-defined no-args constructor

class Account
{
private:
    std::string name;
    double balance;

public:
////////////////////////////
    Account()
    {
        name = "None";
        balance = 0.0;
    }
////////////////////////////

    bool deposit(double amount);
    bool withdraw(double amount);
};




//===========================================




//user-defined constructor

class Account
{
private:
    std::string name;
    double balance;

public:
////////////////////////////
    Account(std::string name_val, double bal)
    {
        name = name_val;
        balance = bal;
    }
////////////////////////////

    bool deposit(double amount);
    bool withdraw(double amount);
};