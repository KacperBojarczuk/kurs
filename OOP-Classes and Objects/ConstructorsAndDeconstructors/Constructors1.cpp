#include <iostream>
#include <string>

class Player
{
private:
    std::string name;
    int health;
    int xp;
public:
    void set_name(std::string name_val)
    {
        name = name_val;
    }

    //Overloaded constructors
    Player()
    {
        std::cout<<"No args constructors called"<<std::endl;
    }
    Player(std::string name)
    {
        std::cout<<"string args constructors called"<<std::endl;
    }
    Player(std::string name, int health, int xp)
    {
        std::cout<<"three args constructors called"<<std::endl;
    }

    
    ~Player()
    {
        std::cout<<"destructor called for "<<name<<std::endl;
    }
};


int main()
{

    {
        Player slayer;
        slayer.set_name("Slayer");
    }

    {
        Player frank;
        frank.set_name("Frank");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villain("Villain", 100, 12);
        villain.set_name("Villain");
    }

    Player *enemy = new Player;
    enemy->set_name("Enemy");
}