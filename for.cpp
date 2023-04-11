#include <iostream>
using namespace std;

main()
{
    for(int i {1};i<=10;i+=2){
        cout<<i<<" ";
    }
cout<<"\n==============================="<<endl;
    for(int i {1};i<=16;i++)
    if(i%2 != 0)
    {
        cout<<i<<" ";
    }
cout<<"\n==============================="<<endl;
    for(int i{1},j{5};i<=5;i++,j++)
    cout<<i<<"*"<<j<<"="<<i*j<<endl;









    return 0;
}