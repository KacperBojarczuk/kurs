#include <iostream>
#include <string>

class Move
{
private:
    int *data;

public:
  void set_data_value(int d) { *data = d;}
  int get_data_value() {return *data;}
  //Constructor
  Move(int d);
  //Copy Constructor
  Move(const Deep &source);
  //MOVE CONSTRUCTOR
  Move(Move &&source) noexcept;
  //Destructor
  ~Move();
};

Move::Move(int d)
{
    data = new int;
    *data = d;
    std::cout<<"constructor for: "<<d<<std::endl;
}

//Copy ctor
Movep::Move(const Move &source)
    :Move{*source.data}
    {
        std::cout<<"Copy constructor - Deep copy for: "<<*data<<std::endl;
    }

Deep::~Deep(){
    delete data;
    cout<<"destructor freeing data"<<endl;
}

void display_Deep(Deep s)
{
    std::cout<<s.get_data_value()<<std::endl;
}

int main()
{
    Deep obj1 {100};
    display_shallow(obj1);

    Deep obj2 {obj1};
    obj2.set_data_value(1000);

    return 0;
}