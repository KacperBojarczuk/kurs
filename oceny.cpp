#include <iostream>
using namespace std;

main()
{
    int score{};
    int ocena{};
    cout<<"Wpisz swoj wynik (0-100) : ";
    cin>>score;

    if(score >= 0 && score <= 100)
    {
        if(score>90)
        ocena = 6;
            else if(score >= 80)
            ocena = 5;
            else if(score >= 70)
            ocena = 4;
            else if(score >= 60)
            ocena = 3;
            else if(score >= 50)
            ocena = 2;
            else
            ocena = 1;

        cout<<"ocena wynosi: "<<ocena<<endl;
        if(ocena==1)
        cout<<"poucz sie";
        else
        cout<<"gratulacje";

    }else{
        cout<<"zla liczba";
    }












    return 0;
}