#include <iostream>
#include <string>

/*
Konstruktory służą do inicjalizacji obiektów. 
Kompilator zapewni domyślny konstruktor, który nie ma argumentów. 
Ten domyślny konstruktor zostanie wywołany automatycznie, gdy trzeba będzie utworzyć nowy obiekt.

Załóżmy jednak, że mamy klasę, która modeluje osobę za pomocą imienia, wieku itp. 
Jeśli obiekt Person jest tworzony przy użyciu konstruktora domyślnego, 
to początkowe wartości imienia, wieku itp. mogą nie być tym, czego chcemy i mogą być nawet danymi śmieciowymi.

Dlatego zwykle dostarczamy własnych konstruktorów (zwykle dostarczamy również domyślny konstruktor bez argumentów), 
dzięki czemu mamy pełną kontrolę nad inicjalizacją naszych obiektów. 
W rzeczywistości, gdy udostępnimy własnego konstruktora, kompilator nie będzie już automatycznie generował konstruktora domyślnego.
*/

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
