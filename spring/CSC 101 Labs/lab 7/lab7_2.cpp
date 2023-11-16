// 5/2/2023
// Lab 7
// Alex DeGhetto
#include<iostream>
using namespace std;
int main()
{
 for(int x=0; x<10; ++x) {
    for(int y=10; y>=x; --y) {
             cout << "*";
         }
         cout << endl;
     }
     return 0;
 }