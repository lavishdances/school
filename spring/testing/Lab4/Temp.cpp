//
//
#include <iostream>
using namespace std;
  int main() {
    double temp1, temp2; // Initializing the variables (temp1) will be  the temp  in F to be converted, (temp2) will be the output.
    cout << "Enter the temperature in Fahrenheit you would like to convert  to Celsius:";
    cin >> temp1; // taking the input of  temp1 for the temp.
    temp2 = (temp1-32)*(5/9); // calculating the conversion
    cout << "The converted temperature from " << temp1 << " is: " << temp2 <<  endl;

    return 0;
  }