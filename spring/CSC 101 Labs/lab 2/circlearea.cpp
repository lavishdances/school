// This program will output the circumference and area
// of the circle with a given radius.
// Alex DeGhetto

#include <iostream>
#include<cmath>
using namespace std;

const double PI = 3.14;
const double RADIUS = 5.4;

int main() 
  {
    float area; // definition of area
    float circumference;  // definition of circumference 
    circumference = 2 * PI * RADIUS;  // computes circumference
    area = PI * pow(RADIUS, 2) ; // computes area
    cout << "The Circumference of the circle is: " << circumference << endl;// Fill in the code for the cout statement that will output (with description) // the circumference
    cout << "The Area of the circle is:" << area << endl;// Fill in the code for the cout statement that will output (with description) // the area of the circle
    return 0; 
    }