// 5/2/2023
// Lab 7
// Alex DeGhetto
#include <iostream>
using namespace std;
int main() {
    int x = 5;
    
    for (int y = 1; y <= x; y++) {
        for (int z = 1; z <= x-y; z++) {
            cout << " ";
        }
        for (int w = 1; w <= 2*y-1; w++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}