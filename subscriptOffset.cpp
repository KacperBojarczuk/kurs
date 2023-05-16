#include <iostream>
#include <vector>
using namespace std;

main()
{
    int scores[] {100,95,89};

    cout << "value of scores: "<<scores<<endl;  //adres pierwszego int tablicy

    int *score_ptr {scores};
    cout<<"value of score_ptr: "<< score_ptr <<endl; //adres pierwszego int tablicy

    cout<<"\nArray SUBSCRIPT notation-----------------------"<<endl;    //subscript = indeks
    cout<<scores[0]<<endl;  //100 
    cout<<scores[1]<<endl;  //100 + 1 int {8 bitow} (adres w tablicy) = 95
    cout<<scores[2]<<endl;  //95 + 1 int {8 bitow} (adres w tablicy) = 89 

    cout<<"\nArray SUBSCRIPT notation-----------------------"<<endl;
    cout<<score_ptr[0]<<endl;  //100 
    cout<<score_ptr[1]<<endl;  //100 + 1 int {8 bitow} (adres w tablicy) = 95
    cout<<score_ptr[2]<<endl;  //95 + 1 int {8 bitow} (adres w tablicy) = 89 

    cout<<"\nPointer OFFSET notation-----------------------"<<endl;     //offset = przesunięcie
    cout<<*score_ptr<<endl;      //100 
    cout<<*(score_ptr+1)<<endl;  //100 + 1 int {8 bitow} (adres w tablicy) = 95
    cout<<*(score_ptr+2)<<endl;  //95 + 1 int {8 bitow} (adres w tablicy) = 89 

    cout<<"\nArray OFFSET notation-----------------------"<<endl;
    cout<<*scores<<endl;      //100 
    cout<<*(scores+1)<<endl;  //100 + 1 int {8 bitow} (adres w tablicy) = 95
    cout<<*(scores+2)<<endl;  //95 + 1 int {8 bitow} (adres w tablicy) = 89 

    return 0;
}