/* Alex DeGhetto 
2/10/2023
CSC 101 Lab4 Test Score Average Of 3 Tests.
*/

#include <iostream>
using namespace std;
  int main() {
    double test1, test2, test3, avg;
    cout << "Lets find the average of your 3 test scores, please enter a value for Tests 1-3: "<< endl;
    cout << "Test 1: ";
    cin >> test1;
    cout << "Test 2: ";
    cin >> test2;
    cout << "Test 3: ";
    cin >> test3;
    avg = (test1 + test2 + test3) / 3;
    cout << "The average of the 3 test scores are: " << avg << endl;
    return 0;
    }