#include <iostream>
#include <vector>
using namespace std;

int main() 
{
  
    vector<int> vec{1,2,3,4,5};

int result = 0;

    for(int index1{0};index1<vec.size();index1++)
  {
    for(int index2=index1+1;index2<vec.size();index2++)
    {
        result += vec[index1]*vec[index2];
        
    }
  }







  return 0;
}