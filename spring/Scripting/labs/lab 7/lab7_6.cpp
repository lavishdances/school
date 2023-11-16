// 5/2/2023
// Lab 7
// Alex DeGhetto
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
  string names[10];
  int grades[10][4];
  ofstream fout("students.txt");  // create new file
  for (int x = 0; x < 10; x++) {
      cout << "Enter student #" << x+1 << "'s name: ";
      getline(cin, names[x]);  // read student name
      for (int y = 0; y < 4; y++) {
          cout << "Enter " << names[x] << "'s test grade #" << y+1 << ": ";
          cin >> grades[x][y];  // read test grades
      }
      cin.ignore();  // ignore the newline character left by cin
  }
  for (int x = 0; x < 10; x++) {
      fout << "Student #" << x+1 << " name: " << names[x] << endl;
      fout << "Test grades: ";
      for (int y = 0; y < 4; y++) {
          fout << grades[x][y] << " ";  // write test grades to the file
      }
      fout << endl << endl;
  }
  fout.close();  // close file

  return 0;
}