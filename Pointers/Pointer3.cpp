#include <iostream>
using namespace std;

void swap(int *a,int *b){
int temp = *a;
*a=*b;
*b = temp;
cout<<*a;
}

int main()
{
    
    int x=5;
    int y=10;
    swap(&x,&y);
    cout<<x<<y;
}