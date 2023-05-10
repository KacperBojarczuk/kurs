#include <iostream>
using namespace std;

int main()
{
    int *p;
    cout <<"value of p is: "<<p<<endl; //garbage

    cout <<"adress of p is: "<<&p<<endl; //0x88a69ff658

    cout <<"sizeof of p is: "<<sizeof p<<endl; //8

    p = nullptr; //set p to point nowhere

    cout <<"value of p is: "<<p<<endl; //0





    return 0;
}