// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from the keyboard and the output will go to
// the screen.
// Alex DeGhetto
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string name;
    int quantity;    // contains the amount of items purchased
    float itemPrice; // contains the price of each item
    float totalBill; // contains the total bill.
    cout << "Please input the name of the item" << endl;
    getline(cin, name);
    cout << setprecision(2) << fixed << showpoint; // formatted output
    cout << "Please input the number of items bought" << endl;
    cin >> quantity;                                        // Fill in the input statement to bring in the quantity.
    cout << "Please insert the price of the item " << endl; // Fill in the prompt to ask for the price.
    cin >> itemPrice;                                       // Fill in the input statement to bring in the price of each item.
    totalBill = itemPrice * quantity;                       // Fill in the assignment statement to determine the total bill.
    cout << "The item that you bought is " << name << endl;
    cout << "your total bill is: " << totalBill << endl; // Fill in the output statement to print total bill,
    // with a label to the screen.
    return 0;
}