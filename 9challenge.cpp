#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    vector<int>vec{};
    char selection{};

do{
    cout<<"___________________"<<endl;
    cout<<"P - Print numbers \nA - Add a number \nM - Display mean of the numbers \nS - Display the smallest number \nL - Display the largest number \nQ - Quit \n\nEnter your choice: ";
    cin>>selection;
    cout<<"___________________\n"<<endl;

    switch(selection)
    {
        case 'p':
        case 'P':
            if(vec.size()!=0)
                {
                    cout<<"[ ";
                        for(auto i:vec)
                            {
                                cout<<i<<" ";
                            }
                    cout<<"]";
                }else{
                    cout<<"[] - list is empty"<<endl;
                } 
            break;
        case 'a':
        case 'A':
            cout<<"Enter an integer to add to the list: ";
            // cin>>
            break;
        case 'm':
        case 'M':
            // cout<<"The mean is: "<< <<endl;
            break;
        case 's':
        case 'S':
            // cout<<"The smallest number is: "<< <<endl;
            break;
        case 'l':
        case 'L':
            // cout<<"The biggest number is: "<< <<endl;
            break;
        case 'q':
        case 'Q':
            cout<<"Goodbye...";
            break;
        default:
            cout<<"Unknown selection, please try again."<<endl;
        
    }

}while(selection != 'q' && selection != 'Q');

  










  return 0;
}

//vector
//do while
//switch "nieznany wybór, spróbuj ponownie"
//P p wyswietla wszystkie elementy listy [ 1 2 3 ] "[] - lista jest pusta"
//A a dodaje integer do listy "dodano 5"
//M m oblicza średnią integerow z listy i wyswietla ją "nie udalo sie obliczyc sredniej - brak danych"
//S s wyswietla najmniejsza liczbe listy "najmniejsza liczba jest 1" | "nie udalo sie podac najmniejszej liczby - lista jest pusta"
//L l wyswietla najwieksza liczbe listy "najwieksza liczba jest 1" | "nie udalo sie podac najwiekszej liczby - lista jest pusta"
//Q q "dowidzenia"