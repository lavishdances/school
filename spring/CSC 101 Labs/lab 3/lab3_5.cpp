#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

float test1, test2, test3, avg;

int main(){

  cout<< "Enter 3 grades";
  cin >> test1 >> test2 >> test3;
  avg = (test1 + test2 + test3) / 3;
  cout << "The average of the 3 tests are: " << setprecision(2) << fixed << avg << endl;
  return 0;
  
}