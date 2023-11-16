// 5/2/2023
// Lab 7
// Alex DeGhetto
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string name;
    int grades[4];
    ofstream fout("student.txt");  // create new file for writing
    cout << "Enter the student name: ";
    getline(cin, name);  // read the name from user
    for (int x = 0; x < 4; x++) {
        cout << "Enter test grade #" << x+1 << ": ";
        cin >> grades[x];  // read test grades from user
    }
    fout << "Student name: " << name << endl;
    fout << "Test grades: ";
    for (int x = 0; x < 4; x++) {
        fout << grades[x] << " ";  // write test grades to file
    }
    fout << endl;
    fout.close();  // close file
    return 0;
}