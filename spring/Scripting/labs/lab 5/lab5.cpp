// This program will give the real solutions for the quadratic formula
// 4/12/2023
// Lab 5 
// Alex DeGhetto
 #include <iostream>
#include <cmath>

using namespace std;

int main() {
  double a, b, c;
  double disc, root1, root2;
  cout << "Welcome to the Quadratic Formula Machine" << endl;

  // Input values from the user
  cout << "Enter values for a, b, and c: ";
  cout << "A: ";
  cin >> a;
  cout << "B: ";
  cin >> b;
  cout << "C: ";
  cin >> c;

  // Compute the disc.
  disc = b * b - 4 * a * c;

  // Check if disc is negative
  if (disc < 0) {
      cout << "The roots are complex numbers." << endl;
  }
  else {
      // Compute roots
      root1 = (-b + sqrt(disc)) / (2 * a);
      root2 = (-b - sqrt(disc)) / (2 * a);

      // Output roots
      cout << "The roots are " << root1 << " and " << root2 << endl;
  }

  return 0;
}
