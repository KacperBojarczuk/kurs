#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  string s1;
  string s2{"Frank"};
  string s3{"s2"};
  string s4{"Frank", 3};
  string s5{"Frank", 1, 2};
  string s6(3, 'X');
  cout << s5 << endl;

  string part1{"C++"};
  string part2{"is a powerful"};
  string sentence;
  sentence = part1 + " " + part2 + " language";
  cout << sentence << endl;

  s2.at(0) = 'p';
  cout << s2[0] << endl; // prank
  cout << s2.at(0) << endl;

  string c1{"frank"};
  for (char c : c1)
    cout << c << endl;

  string t1{"This is a test"};
  cout << t1.substr(0, 4) << endl;
  cout << t1.substr(5, 2) << endl;
  cout << t1.substr(10, 4) << endl;

  cout << t1.find("This") << endl;
  cout << t1.find("is") << endl;
  cout << t1.find("test") << endl;
  cout << t1.find("e") << endl;
  cout << t1.find("is", 4) << endl;
  cout << t1.find("XX") << endl;

  cout << t1.erase(0, 5) << endl;
  cout << t1.erase(5, 4) << endl;
  t1.clear();

  cout << c1.length() << endl;
  c1 += " James";
  cout << c1 << endl;

  string h1;
  cin >> h1;
  //cout << h1 << endl;

  getline(cin, h1);
  cout << h1 << endl;

  getline(cin, h1, 'x');
  cout << h1 << endl;

  return 0;
}