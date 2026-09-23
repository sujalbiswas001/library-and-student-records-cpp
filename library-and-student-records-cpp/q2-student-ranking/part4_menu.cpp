#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

int rolls[MAX];
string names[MAX];
float marks[MAX];
int count = 0;

void addStudent() {
    if (count >= MAX) {
        cout << "\nRecord list is full!\n";
        return;
    }
    int roll;
    string name;
    float mark;

    cout << "\nEnter Roll No: ";
    cin >> roll;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Marks: ";
    cin >> mark;

    rolls[count] = roll;
    names[count] = name;
    marks[count] = mark;
    count++;

    cout << "\nStudent Added Successfully!\n";
}

void displayStudents() {
    if (count == 0) {
        cout << "\nNo students added yet.\n";
        return;
    }
    cout << "\n===== STUDENT RECORDS =====" << endl;
    for (int i = 0; i < count; i++) {
        cout << "Roll: " << rolls[i] << ", Name: " << names[i]
             << ", Marks: " << marks[i] << endl;
    }
}

void searchStudent() {
    if (count == 0) {
        cout << "\nNo students to search.\n";
        return;
    }
    int searchRoll;
    cout << "\nEnter Roll No to search: ";
    cin >> searchRoll;

    bool found = false;
    for (int i = 0; i < count; i++) {
        if (rolls[i] == searchRoll) {
            cout << "\nStudent Found!" << endl;
            cout << "Name: " << names[i] << ", Marks: " << marks[i] << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "\nStudent Not Found!" << endl;
    }
}

void rankStudents() {
    if (count == 0) {
        cout << "\nNo students to rank.\n";
        return;
    }
    // Bubble Sort by Marks (descending)
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - 1 - i; j++) {
            if (marks[j] < marks[j + 1]) {
                swap(marks[j], marks[j + 1]);
                swap(rolls[j], rolls[j + 1]);
                swap(names[j], names[j + 1]);
            }
        }
    }

    cout << "\n===== STUDENT RANKING (BY MARKS) =====" << endl;
    for (int i = 0; i < count; i++) {
        cout << "Rank " << i + 1 << " -> Roll: " << rolls[i]
             << ", Name: " << names[i] << ", Marks: " << marks[i] << endl;
    }
}

int main() {
    int choice;

    do {
        cout << "\n===== STUDENT RANKING MENU =====" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display Students" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Rank Students (by Marks)" << endl;
        cout << "5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                rankStudents();
                break;
            case 5:
                cout << "\nExiting Program. Goodbye!\n";
                break;
            default:
                cout << "\nInvalid Choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}