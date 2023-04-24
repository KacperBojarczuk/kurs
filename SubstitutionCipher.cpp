#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
abc zamienia sie na ZEB




*/

int main()
{
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key={"ZEBRASCDFGHIJKLMNOPQTUVWXYzebrascdfghijklmnopqtuvwxy"};
    string code;
    
    cout << "Enter secret code: ";
    getline(cin, code);

    for (int i{0}; i < code.size(); i++)
    {
        int position = alphabet.find(code.at(i));
        if (position != string::npos)
        {
            code.at(i) = key.at(position);
        }
    }

    cout << code;

    return 0;
}