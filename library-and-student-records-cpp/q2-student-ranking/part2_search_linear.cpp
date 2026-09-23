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

    int searchRoll;
    cout << "\nEnter Roll No to search: ";
    cin >> searchRoll;

    bool found = false;
    for (int i = 0; i < SIZE; i++) {
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

    return 0;
}