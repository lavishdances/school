// This Program will bring in two prices and two quantities of items
// from the keyboard and print those numbers in a formatted chart.
// Alex DeGhetto
#include <iostream>
#include <iomanip> // Fill in the code to bring in the library for
                   // formatted output.
using namespace std;

int main()
{

    float price1, price2;     // The price of 2 items
    int quantity1, quantity2; // The quantity of 2 items

    cout << setprecision(2) << fixed << showpoint;
    cout << "Please input the price and quantity of the first item" << endl;
    cin >> "Price: " >> price1 >> endl;       // Fill in the input statement that reads in price1 and
    cin >> "quantity: " >> quantity1 >> endl; // quantity1 from the keyboard.

    // Fill in the prompt for the second price and quantity.

    // Fill in the input statement that reads in price2 and
    // quantity2 from the keyboard.

    cout << setw(15) << "PRICE" << setw(12) << "QUANTITY\n\n";

    // Fill in the output statement that prints the first price
    // and quantity. Be sure to use setw() statements.

    // Fill in the output statement that prints the second price
    // and quantity.
    return 0;
}