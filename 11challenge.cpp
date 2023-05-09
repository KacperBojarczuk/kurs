#include <iostream>
#include <vector>
using namespace std;

void print_menu (char& selection);
void print_numbers (vector<int> vec);
void add_number (int add, vector<int>& vec);
void mean (vector<int> vec);
void smallest_number (vector<int>& vec);
void largest_number (vector<int>& vec);

int main()
{
    vector<int> vec{4, 5, 3, 7};
    int a;
    char selection{};
    int add{};

    do
    {
        print_menu(selection);

        if (selection == 'P')
            print_numbers(vec);
        else if (selection == 'A')
            add_number(add,vec);
        else if(selection == 'M')
            mean(vec);
        else if(selection == 'S')
            smallest_number(vec);
        else if(selection == 'L')
            largest_number(vec);
        else if(selection == 'Q')    
            cout << "Goodbye...";
        else
            cout << "Unknown selection, please try again." << endl;
        }

    while (selection != 'Q');

    return 0;
}

void print_menu (char& selection)
{
    cout << "___________________" << endl;
        cout << "P - Print numbers \nA - Add a number \nM - Display mean of the numbers \nS - Display the smallest number \nL - Display the largest number \nQ - Quit \n\nEnter your choice: ";
        cin >> selection;
        selection = toupper(selection);
        cout << "___________________\n"
             << endl;
}

void print_numbers (vector<int> vec)
{
    {
        if (vec.size() != 0)
            {
                cout << "[ ";
                for (auto i : vec)
                {
                    cout << i << " ";
                }
                cout << "]\n";
            }
            else
            {
                cout << "[] - list is empty" << endl;
            }
    }
    
}

void add_number (int add, vector<int>& vec)
{
    cout << "Enter an integer to add to the list: ";
            cin >> add;
            vec.push_back(add);
            cout << add << " added" << endl;
}

void mean (vector<int> vec)
{
   if (vec.size() != 0)
            {
                double suma;
                double mean;
                for (auto vecs : vec)
                    suma += vecs;
                mean = suma / vec.size();
                cout << "The mean is: " << mean << endl;
            }
            else
            {
                cout << "Unable to calculate the mean - no data" << endl;
            }
}

void smallest_number (vector<int>& vec)
{
    if (vec.size() != 0)
            {
                for (int i = 1; i < vec.size(); i++)
                {
                    if (vec[i] < vec[0])
                    {
                        vec[0] = vec[i];
                    }
                }
                cout << "The smallest number is: " << vec[0] << endl;
            }
            else
            {
                cout << "Unable to determine the smallest number - list is empty" << endl;
            }
}

void largest_number (vector<int>& vec)
{
    if (vec.size() != 0)
            {
                for (int i = 1; i < vec.size(); i++)
                {
                    if (vec[i] > vec[0])
                    {
                        vec[0] = vec[i];
                    }
                }
                cout << "The largest number is: " << vec[0] << endl;
            }
            else
            {
                cout << "Unable to determine the largest number - list is empty" << endl;
            }
}

