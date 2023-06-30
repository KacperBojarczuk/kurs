#include <iostream>

class channel
{
public:
    std::string Name;
    std::string OwnerName;
    int Subs;

    channel(std::string name, std::string ownerName)    //constructor
    {
        Name = name;
        OwnerName = ownerName;
        Subs = 0;
    }

    void GetInfo()                                      //class method
    {
        std::cout << "Name: " << Name << std::endl;
        std::cout << "Owner: " << OwnerName << std::endl;
        std::cout << "Subs: " << Subs << std::endl;
    }
};

int main()
{
    channel ytchannel("Operator", "Drewski");
    ytchannel.GetInfo();

    channel ytchannel2("Popo","Piotr");
    ytchannel2.GetInfo();
}