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
