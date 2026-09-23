#include <iostream>
#include <string>
using namespace std;

int main() {
    const int SIZE = 5;
    int rolls[SIZE];
    string names[SIZE];
    float marks[SIZE];

    cout << "Enter details of 5 students:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "\nStudent " << i + 1 << " Roll No: ";
        cin >> rolls[i];
        cin.ignore();
        cout << "Student " << i + 1 << " Name: ";
        getline(cin, names[i]);
        cout << "Student " << i + 1 << " Marks: ";
        cin >> marks[i];
    }

    // Bubble Sort by Marks (descending) for ranking
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - 1 - i; j++) {
            if (marks[j] < marks[j + 1]) {
                swap(marks[j], marks[j + 1]);
                swap(rolls[j], rolls[j + 1]);
                swap(names[j], names[j + 1]);
            }
        }
    }

    cout << "\n===== STUDENT RANKING (BY MARKS) =====" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Rank " << i + 1 << " -> Roll: " << rolls[i]
             << ", Name: " << names[i] << ", Marks: " << marks[i] << endl;
    }

    return 0;
}