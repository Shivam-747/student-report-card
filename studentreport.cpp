#include <iostream>
using namespace std;

float calculatePercentage(int total, int subjects) {
    return (float)total / subjects;
}

char calculateGrade(float percentage) {
    if (percentage >= 90) return 'A';
    else if (percentage >= 75) return 'B';
    else if (percentage >= 60) return 'C';
    else if (percentage >= 40) return 'D';
    else return 'F';
}

int main() {
    int marks[5], total = 0;
    float percentage;
    char grade;

    cout << "Enter marks of 5 subjects:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i+1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    percentage = calculatePercentage(total, 5);
    grade = calculateGrade(percentage);

    cout << "\nTotal Marks = " << total << endl;
    cout << "Percentage = " << percentage << "%" << endl;
    cout << "Grade = " << grade << endl;

    return 0;
}
