#include <iostream>
using namespace std;

int main (){
  double sales;
  double state_tax;
  double county_tax;
  double tax;
  const double state_tax_rate;
  const double county_tax_rate;
  sales = 95000;
  state_tax_rate = .04;
  county_tax_rate = .02;
  state_tax = sales * state_tax_rate;
  county_tax = sales * county_tax_rate;
  tax = county_tax + state_tax;
  cout << "Sales: $" << sales << endl;
  cout << "State Tax: $" << state_tax << endl;
  cout << "County Tax: $" << county_tax << endl;
  cout << "Total Tax: $" << tax << endl;
}