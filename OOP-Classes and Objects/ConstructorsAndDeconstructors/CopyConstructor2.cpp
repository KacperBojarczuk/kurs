#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
    string Title;
    string Author;
    float *Rates;
    int RatesCounter;

    Book(string title, string author) ~Book()
    {
        delete[] Rates;
        Rates = nullptr;
    }

    Book(const Book &original) // copy constructor
    {
        Title = original.Title;
        Author = original.Author;
        RatesCounter = original.RatesCounter;

        Rates = new float[RatesCounter];
        for (int i = 0; i < RatesCounter; i++)
        {
            Rates[i] = original.Rates[i];
        }
    }
}