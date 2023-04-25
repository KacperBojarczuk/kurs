#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key={"ZEBRASCDFGHIJKLMNOPQTUVWXYzebrascdfghijklmnopqtuvwxy"};
    string code;
    
    cout << "Enter secret message: ";
    getline(cin, code);

    cout<<"Encrypting message..."<<endl;

    for (int i{0}; i < code.size(); i++)
    {
        int position = alphabet.find(code.at(i)); //znajdz pozycje znaku w 'alphabet' odpowiadajacej pozycji znaku w 'code'
        
        if (position != string::npos)
        {
            code.at(i) = key.at(position);
        }
    }
    
    cout <<"Encrypted message: "<<code<<endl;

    cout<<"Decrypting message..."<<endl;

    for (int i{0}; i < code.size(); i++)
    {
        int position = key.find(code.at(i));
        if (position != string::npos)
        {
            code.at(i) = alphabet.at(position);
        }
    }

    cout <<"Decrypted message: "<<code<<endl;

    return 0;
}