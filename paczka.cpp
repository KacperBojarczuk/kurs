#include <iostream>
using namespace std;

main()
{
    int wysokosc{},szerokosc{},dlugosc{};
    int objetosc{};
    const int max_wymiary{25};
    const double cena_podstawowa{2.50};

    const int tier1_limit{1600};
    const int tier2_limit{8200};

    double tier1_doplata{0.10};
    double tier2_doplata{0.25};

    cout<<"Podaj wymiary paczki w cm : ";
    cin>>wysokosc>>szerokosc>>dlugosc;

    if(wysokosc > max_wymiary || szerokosc > max_wymiary || dlugosc > max_wymiary)
    {
        cout<<"Paczka jest za duza do wysylki"<<endl;
    }else{
        double cena_paczki{};
        objetosc=wysokosc*szerokosc*dlugosc;
        cena_paczki = cena_podstawowa;

        if(objetosc >= tier2_limit)
        {
            cena_paczki += cena_paczki * tier2_doplata;
            cout<<"Dodano oplate za gabaryt poziomu 2"<<endl;
        }
        else if(objetosc >= tier1_limit)
        {
            cena_paczki += cena_paczki * tier1_doplata;
            cout<<"Dodano oplate za gabaryt poziomu 1"<<endl;
        }

        cout<<"Objetosc twojej paczki wynosi: "<<objetosc<<" cm3"<<endl;
        cout<<"Koszt wysylki wynosi: "<<cena_paczki<<" zl"<<endl;
        
        


    }
       

    return 0;
}