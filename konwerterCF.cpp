#include <iostream>
using namespace std;

main()
{
    cout<<"Zamiana *C na *F."<<endl;
    cout<<"Wpisz liczbe stopni Celsjusza : ";

    double cel {0};
    cin>>cel;

    const double fah = 1.8;
    double wynik = cel*fah+32;

    cout<<cel<<" *C to "<<wynik<<" *F"<<endl;












    return 0;
}