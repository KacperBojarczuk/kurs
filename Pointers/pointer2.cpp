#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int *a {nullptr};
    int b{};
    a = &b;
    cout<<*a;

    vector<int> cos {1,2,3};
    vector<int> *vec_ptr {nullptr};

    vec_ptr = &cos;

    for(auto petla: *vec_ptr)
    cout<<petla<<" ";
    
    






    return 0;
}