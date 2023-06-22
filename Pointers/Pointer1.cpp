#include <iostream>
using namespace std;

int main()
{
   int* p {nullptr}; // declare pointer and initialize it
                      // so that it doesn't store a random addres
   cout<<p<<" --> wartosc p"<<endl;
    int i = 5;
    p = &i; // assign pointer to address of object
    cout<<p<<" --> p to teraz adres i"<<endl;
    int j = *p; // dereference p to retrieve the value at its address
    cout<<j<<" --> j = 5";


   return 0;
}