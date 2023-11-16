// 5/2/2023
// Lab 7
// Alex DeGhetto
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
int main() {
   string name;
    int grades[4];
    ifstream fin("students.txt");  // open the file for reading
    while (getline(fin, name)) {  // read a line from the file as the student name
        fin.ignore(100, ':');  // ignore the colon and space after "name"
        stringstream ss(name);// create a stringstream to parse the line
        string name;
        ss >> name;  // extract the student name
        double sum = 0;
        double grade;
        int count = 0;
        while (ss >> grade) {  // read each grade from the stringstream
            sum += grade;
            count++;
        }
        double avg = sum / count;  // calculate the average
        cout << "Student name: " << name << endl;
        cout << "Average test grade: " << avg << endl << endl;  // print the name and average
    }
    fin.close();  // close the file when done
    return 0;
}