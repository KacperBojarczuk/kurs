#include <iostream>
#include <vector>
using namespace std;

main()
{
    // cout<<"wpisz liczbe wieksza od 10 : ";
    int num{};
    // cin>>num;
    // while (num < 10)
    // {
    //     cout<<"wpisz liczbe wieksza od 10 : ";
    //     cin>>num;
    // }

    // cout<<"dzieki"<<endl;

cout<<"\n==============================="<<endl;
    // cin>>num;
    // while (num > 0)
    // {
    //     cout<<num<<endl;
    //     num--;
    // }
    // cout<<"LIFTOFF!";

cout<<"\n==============================="<<endl;
    // cin>>num;
    // while(num < 10)
    // {
    //     cout<<num<<endl;
    //     ++num;
    // }
cout<<"\n==============================="<<endl;

    // bool gitens {false};
    // int number {0};

    // while (!gitens)
    // {
    //     cout<<"wpisz liczbe miedzy 1 a 5: ";
    //     cin>>number;
    //     if(number <=1 || number >= 5)
    //         cout<<"poza zakresem sproboj ponownie"<<endl;
    //     else{
    //         cout<<"dzieki"<<endl;
    //         gitens = true;
    //     }
        
        
    // }
cout<<"\n==============================="<<endl;

    vector <int> vec {2,1,5,3,5,-99,8,7};

    int index{0};

    while(index < vec.size() && vec.at(index) != -99)
    {
        ++index;
        cout<<index<<" ";
    }


    

    return 0;
}