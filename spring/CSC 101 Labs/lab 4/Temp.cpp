/* Alex DeGhetto 
2/10/2023
CSC 101 Lab4 Temperature Conversion
*/
#include <iostream>
using namespace std;
  int main() {
    float fahr, celsius; // Initializing the variables (fahr) will be  the temp  in F to be converted, (celsius) will be the output.
    bool choice;
    cout << "What would you like to convert? 0 for Fahrenheit to Celsius. 1 for Celsius to Farhrenheit: ";
    cin >> choice;
    switch (choice) {
      case 0:
        cout << "Enter the temperature in Fahrenheit you would like to convert  to Celsius: ";
        cin >> fahr; // taking the input of  fahr for the temp.
        celsius = (fahr - 32)* 5.0 / 9.0; // calculating the conversion
        cout << "The converted temperature from " << fahr << " Degrees Fahrenheit is: " << celsius << " Degrees Celsius" <<  endl;
        break;
      case 1:
        cout << "Enter the temperature in Celsius you would like to convert  to Fahrenheit: ";
        cin >> celsius; // taking the input of  fahr for the temp.
        fahr = (celsius * 9 / 5) + 32; // calculating the conversion
        cout << "The converted temperature from " << celsius << " Degrees Celsius is: " << fahr << " Degrees Fahrenheit" <<  endl;
        break;
      default:
        cout << "you have entered a number not 1 or 0."
    }
  
    return 0;
  }
