#include <iostream>
using namespace std;

int main() {

  int x = 9, y = 4, z = 7, a = 0;
  a = x + z * y;
  cout << "A1 is " << a << endl;
  a = x * y / z;
  cout << "A2 is " << a << endl;
  a = x % 4;
  cout << "A3 is " << a << endl;
  a = x % 4 + z % 4;
  cout << "A4 is " << a << endl;
  a = x / y;
  cout << "A5 is " << a << endl;
  a = -x * y + 3;
  cout << "A6 is " << a << endl;
  a = x * (y - 2) / z;
  cout << "A7 is " << a << endl;
  a = x * (y - 2) % z;
  cout << "A8 is " << a << endl;
  return 0;
}