#include <iostream>
using namespace std;

main()
{
    int tablica [5][5]{};

    tablica[0][1] = 10;
    tablica[1][2] = 20;
    tablica[2][3] = 30;
    tablica[1][5] = 50;

    cout<<tablica[0][1]<<endl;
    cout<<tablica[1][5]<<endl;
    cout<<tablica[2][4]<<endl;
    cout<<tablica[3]<<endl;
    cout<<tablica[4]<<endl;

    return 0;
}