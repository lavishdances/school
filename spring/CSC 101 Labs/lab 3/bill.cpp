/*
This program will read in the quantity of a particular item and its price
It will then print out the total price.
The input will come from the keyboard and the output will go to the screen.
Alex DeGhetto
*/



#include <iostream> 
#include <iomanip> 
#include <string>
using namespace std;
int main() {
  int quantity; 
  float itemPrice; 
  float totalBill;
  string productName;
  cout<< "What item are you purchasing?" << endl;
  getline(cin, productName);
  cout << setprecision(2) << fixed << showpoint; 
  cout << "Please input the number of items bought" << endl;
  cin >> quantity;
  cout << "Please enter the price of the items" << endl;
  cin >> itemPrice;
  totalBill = itemPrice * quantity;
  cout << "The Item You Purchased was: " << productName << endl;
  cout << "The total of the bill is: $" << totalBill << endl;

  return 0; 
}