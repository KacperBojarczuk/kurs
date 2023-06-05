#include <iostream>
#include <string>

class Deep
{
private:
    int *data;

public:
  void set_data_value(int d) { *data = d;}
  int get_data_value() {return *data;}
  //Constructor
  Deep(int d);
  //Copy Constructor
  Deep(const Deep &source);
  //Destructor
  ~Deep();
};

Deep::Deep(int d)
{
    data = new int;
    *data = d;
}

Deep::Deep(const Deep &source)
    :data{*source.data}
    {
        std::cout<<"Copy constructor - Deep copy"<<std::endl;
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