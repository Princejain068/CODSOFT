#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> names;
    vector<int> grades;

    int count;
    cout << "Enter the number of students: ";
    cin >> count;

    for (int i = 0; i < count; i++) {
        string name;
        int grade;

        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> name;
        names.push_back(name);

        cout << "Enter the grade of student " << i + 1 << ": ";
        cin >> grade;
        grades.push_back(grade);
    }

    int sum = 0;
    int highestGrade = grades[0];
    int lowestGrade = grades[0];

    for (int grade : grades) {
        sum += grade;
        highestGrade = max(highestGrade, grade);
        lowestGrade = min(lowestGrade, grade);
    }

    double averageGrade = static_cast<double>(sum) / count;

    cout << "Average grade: " << averageGrade << endl;
    cout << "Highest grade: " << highestGrade << endl;
    cout << "Lowest grade: " << lowestGrade << endl;

    return 0;
}
