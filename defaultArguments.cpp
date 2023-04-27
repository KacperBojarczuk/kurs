#include <iostream>
#include <iomanip>
using namespace std;

double calc_cost(double base_cost=100.0,double tax_rate=0.06,double shipping=3.50);

double calc_cost(double base_cost,double tax_rate,double shipping)
{
    return base_cost += (base_cost*tax_rate) + shipping;
}

int main()
{
    double cost{0};
    cost=calc_cost(100.0, 0.08, 4.25); //will use new numbers 100 + 8 + 4.25

    cost= calc_cost(100.0, 0.08); //will use default shipping 100 + 8 + 3.50

    cost=calc_cost(); //only default
    
  return 0;
}