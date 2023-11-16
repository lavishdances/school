// This program will output the area and perimeter
// of the rectangle
// Alex DeGhetto

#include <iostream>
#include<cmath>
using namespace std;

const double LENGTH = 8;
const double WIDTH = 3;

int main() 
  {
    float area; // definition of area
    float perimeter;  // definition of perimeter
    perimeter = (2*LENGTH) + (2 * WIDTH);  // computes perimeter
    area = LENGTH * WIDTH; // computes area
    cout << "The Perimeter of the Rectangle is: " << perimeter << endl; // perimeter of rect.
    cout << "The Area of the rectangle is:" << area << endl; // area of rect.
    return 0; 
    }