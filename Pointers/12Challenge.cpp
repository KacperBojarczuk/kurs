#include <iostream>
using namespace std;

int* apply_all(int array1[],size_t array1_size,int array2[],size_t array2_size);
void print(const int array[], size_t array_size);

int main()
{
    const size_t array1_size {5};
    const size_t array2_size {3};

    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};

    //funkcja print oczekuje pointer do array integerow i jego wielkosci i wyswietla jego elementy

    cout <<"Array 1: ";
    print(array1,array1_size);

    cout<<"\nArray 2: ";
    print(array2,array2_size);


    //funkcja apply_all oczekuje 2 arrays integerow i ich wielkosci i dynamicznie przydziela nową tablice
    //ktorej wielkosc jest wynikiem mnozenia wielkosci 2 tablic

    int *results = apply_all(array1,array1_size,array2,array2_size);
    constexpr size_t results_size {array1_size * array2_size};
    

    cout<<"\nResult: ";
    print(results, results_size);
    

    delete[] results;
    cout<<endl;
    return 0;
}

//napisac funkcje print

//napisac funkcje apply_all
//loopuje przez druga tablice i mnozy kazdy element przez kazdy element 1 tablicy 
// i przechowuje to w nowej tablicy
//funkcja powinna zwracać pointer do nowej tablicy

int* apply_all(int array1[],size_t array1_size,int array2[],size_t array2_size)
{
    size_t results_size = array1_size * array2_size;
    int* size = new int[results_size];
    size_t index = 0;

    for (size_t i = 0; i < array2_size; ++i)
    {
        for (size_t j = 0; j < array1_size; ++j)
        {
            size[index] = array1[j] * array2[i];
            ++index;
        }
    }
    return size; 
}

void print(const int array[], size_t array_size)
{
    for (size_t i = 0; i<array_size;++i)
    {
        cout<<array[i]<<" ";
    }
}