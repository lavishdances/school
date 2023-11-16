/* Alex DeGhetto 
3/3/2023
CSC 101 Lab4 Temperature Conversion
*/
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
  int main() {
    float fahr, celsius; // Initializing the variables (fahr) will be  the temp  in F to be converted, (celsius) will be the output.
    int choice;
    bool cond;
    cond =  true;
  
    while(cond){
      cout << "What would you like to convert? 0 for Fahrenheit to Celsius. 1 for Celsius to Farhrenheit: ";
      cin >> choice;
      
      if (choice == 0) {
            cout << "Enter the temperature in Fahrenheit you would like to convert  to Celsius: ";
            cin >> fahr; // taking the input of  fahr for the temp.
            celsius = (fahr - 32)* 5.0 / 9.0; // calculating the conversion
            cout << "The converted temperature from " << fahr << " Degrees Fahrenheit is: " << celsius << " Degrees Celsius" <<  endl;
        cond = false;
        }
      else if(choice == 1){
            cout << "Enter the temperature in Celsius you would like to convert  to Fahrenheit: ";
            cin >> celsius; // taking the input of  fahr for the temp.
            fahr = (celsius * 9 / 5) + 32; // calculating the conversion
            cout << "The converted temperature from " << celsius << " Degrees Celsius is: " 
                 << fahr << " Degrees Fahrenheit" <<  endl;
          cond = false;
      }
      else
          cout << "You have entered a value that is not 1 or 0. try again"<< endl;
    }

  return 0;

    
  }
