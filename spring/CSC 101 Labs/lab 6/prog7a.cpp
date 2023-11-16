// 5/1/2023
// Lab 6
// Alex DeGhetto
#include<iostream>
using namespace std;

int main()
  {
  int x = 0;
  int y = 1;
  int z = 2;
  
  cout << "Starting" << endl;
  x = y + z;
  cout << "X is now " << x << endl;
  y = x * z;
  cout << "Y is now " << y << endl;
  z = y + x;
  cout << "Z is now " << z << endl;
  x = x * x;
  cout << "X is now " << x << endl;
  
  return 0;
  }