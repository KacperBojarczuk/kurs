#include <iostream>
using namespace std;
void static_local()
{
    static int num {5000}; //zachowuje swoją wartość pomiedzy wywołaniami
    cout << num<<endl;
    num+= 1000;
    cout<<num<<endl;
    // num = 6000, 7000, 8000...

}
int main()
{

}