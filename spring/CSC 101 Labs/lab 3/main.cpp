/*
  *************************************************
	*   CSC101                       02/10/2023     *
	*   Alex DeGhetto                               *
	*   Lab #3                                      *
	*                                               *
	*   A short description                         *
	*                                               *
	*                                               *
	*                                               *
	*                                               *
  *************************************************
*/

#include <iostream>
using namespace std;

int main()
{
	string item;  // Defining that the variable "item" will be used
	int quant;	  // Defining that the variable "quant" will be used
	double price; // Defining that the variable "price" will be used
	bool choice;

	cout << "What are you buying?: ";				   // Asking the user what item they will be buying.
	cin >> item;									   // asking user to input what item they will be buying
	cout << "How many of this item are you buying?: "; // Asking the user how many of that item they will be buying
	cin >> quant;									   // asking user to input how many
	cout << "How much is this item before tax?: ";	   // Asking the user how much the item they are purchasing costs before tax
	cin >> price;									   // asking user to input the price
	double sub = quant * price;
	float tax = sub * 0.075;
	float total = sub + tax;

	cout << "*****************************************************************" << endl;
	cout << "* Order #100                                        02/10/2023  *" << endl;
	cout << "*                                                               *" << endl;
	cout << "*                                                               *" << endl;
	cout << "*  Item(s) | Quantity | Unit Price | Subtotal | Tax | Total     *" << endl;
	cout << "* ------------------------------------------------------------- *" << endl;
	cout << "* " << item << "    |  " << quant << "(pc)"
												  " |  "
												  "$"
		 << price << "   |  "
					 "$"
		 << sub << "    |  "
				   "$"
		 << tax << "  | "
				   "$"
		 << total << "*" << endl;
	cout << "*****************************************************************" << endl;
}
