#include <iostream>
using namespace std;

// Function to calculate grade
char calculateGrade(float average) {
    if (average >= 90) return 'A';
    else if (average >= 80) return 'B';
    else if (average >= 70) return 'C';
    else if (averaeg >= 60) return 'D';
    else return 'F';
}

int main() {
    string studentName;
    int numSubjects;
    float marks[10], total = 0, average;

    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter number of subjects (max 10): ";
    cin >> numSubjects;
    if (numSubjects > 10 || numSubjects <= 0) {
        cout << "Invalid number of subjects!" << endl;
        return 1;
    }
    for (int i = 0; i < numSubjects; i++) {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[i];
	total += marks[i];
    }

    average = total / numSubjects;
    char grade = calculateGrade(average);

    cout << "\n----- Report -----" << endl;
    cout << "Student: " << studentName << endl;
    cout << "Total Marks: " << total << endl;
