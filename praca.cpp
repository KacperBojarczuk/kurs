#include <iostream>
using namespace std;

main()
{
    // 1gr,2gr,5gr,10gr,20gr,50gr,1zl
    //

    int grosze {0};
    int zl{},piecdzesiat{},dwadziescia{},dziesiec{},piec{},dwa{},jeden{};

    cout<<"Wpisz ilosc groszy : ";
    cin>>grosze;

    int balans;

    zl = grosze / 100;
    balans = grosze % 100;

    piecdzesiat = balans / 50;
    balans %= 50;

    dwadziescia = balans/20;
    balans %=20;

    dziesiec=balans/10;
    balans %=10;

    piec=balans/5;
    balans%=5;

    dwa=balans/2;
    balans%=2;

    jeden=balans;
    
    cout<<"reszta wynosi:"<<endl;
    cout<<"1zl  : "<<zl<<endl;
    cout<<"50gr : "<<piecdzesiat<<endl;
    cout<<"20gr : "<<dwadziescia<<endl;
    cout<<"10gr : "<<dziesiec<<endl;
    cout<<"5gr  : "<<piec<<endl;
    cout<<"2gr  : "<<dwa<<endl;
    cout<<"1gr  : "<<jeden<<endl;

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
    
