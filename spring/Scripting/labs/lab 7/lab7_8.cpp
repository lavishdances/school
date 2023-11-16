// 5/2/2023
// Lab 7
// Alex DeGhetto
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

// Function prototypes
void createGradeFile();
void displayGradebook();
void calculateAverages();

// Global variables
const string GRADE_FILENAME = "grades.txt";
vector<string> studentNames;
vector<vector<int>> studentGrades;

int main() {
    int choice;

    // Display menu and process user's choice
    do {
        cout << "Gradebook Application\n"
             << "---------------------\n"
             << "1. Create a grade file for a class.\n"
             << "2. Display the gradebook for a class.\n"
             << "3. Calculate averages for class.\n"
             << "4. Exit\n"
             << "Enter your choice: ";
        cin >> choice;
        cout << endl;

        switch (choice) {
            case 1:
                createGradeFile();
                break;
            case 2:
                displayGradebook();
                break;
            case 3:
                calculateAverages();
                break;
            case 4:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

        cout << endl;
    } while (choice != 4);

    return 0;
}

// Function definitions

void createGradeFile() {
    ofstream outputFile(GRADE_FILENAME);

    if (!outputFile) {
        cout << "Error: could not create file " << GRADE_FILENAME << endl;
        return;
    }

    int numStudents, numGrades;

    // Prompt user for number of students and number of grades per student
    cout << "Enter number of students: ";
    cin >> numStudents;
    cout << "Enter number of grades per student: ";
    cin >> numGrades;
    cout << endl;

    // Prompt user for student names and grades
    for (int i = 0; i < numStudents; i++) {
        string name;
        vector<int> grades;

        cout << "Enter name for student " << (i+1) << ": ";
        cin >> name;

        for (int j = 0; j < numGrades; j++) {
            int grade;
            cout << "Enter grade " << (j+1) << " for student " << (i+1) << ": ";
            cin >> grade;
            grades.push_back(grade);
        }

        // Write student name and grades to file
        outputFile << name << " ";
        for (int grade : grades) {
            outputFile << grade << " ";
        }
        outputFile << endl;

        // Store student name and grades in vectors
        studentNames.push_back(name);
        studentGrades.push_back(grades);
    }

    outputFile.close();
    cout << "Grade file " << GRADE_FILENAME << " created successfully.\n";
}

void displayGradebook() {
    ifstream inputFile(GRADE_FILENAME);

    if (!inputFile) {
        cout << "Error: could not open file " << GRADE_FILENAME << endl;
        return;
    }

    // Read student names and grades from file and print them to console
    string line;
    int i = 0;
    while (getline(inputFile, line)) {
        cout << ": " << line << endl;
        i++;
    }

    inputFile.close();
}

void calculateAverages() {
    ifstream inFile(GRADE_FILENAME);

    if (!inFile) {
        cout << "Error: could not open file " << GRADE_FILENAME << endl;
        return;
    }

    int num_students, num_tests;
    inFile >> num_students >> num_tests;

    double total_score = 0.0;
    for (int i = 1; i <= num_students; i++) {
        string student_name;
        inFile.ignore(1000, ':');
        getline(inFile, student_name);

        double student_score = 0.0;
        for (int j = 1; j <= num_tests; j++) {
            int test_grade;
            inFile >> test_grade;
            student_score += test_grade;
        }

        double student_average = student_score / num_tests;
        total_score += student_average;
    }

    double class_average = total_score / num_students;

    inFile.close();
}
