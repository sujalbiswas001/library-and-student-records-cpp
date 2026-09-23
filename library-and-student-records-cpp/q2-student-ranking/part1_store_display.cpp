#include <iostream>
#include <string>
using namespace std;

int main() {
    int roll1, roll2, roll3;
    string name1, name2, name3;
    float marks1, marks2, marks3;

    cout << "Enter Student 1 Roll No: ";
    cin >> roll1;
    cin.ignore();
    cout << "Enter Student 1 Name: ";
    getline(cin, name1);
    cout << "Enter Student 1 Marks: ";
    cin >> marks1;

    cout << "\nEnter Student 2 Roll No: ";
    cin >> roll2;
    cin.ignore();
    cout << "Enter Student 2 Name: ";
    getline(cin, name2);
    cout << "Enter Student 2 Marks: ";
    cin >> marks2;

    cout << "\nEnter Student 3 Roll No: ";
    cin >> roll3;
    cin.ignore();
    cout << "Enter Student 3 Name: ";
    getline(cin, name3);
    cout << "Enter Student 3 Marks: ";
    cin >> marks3;

    cout << "\n===== STUDENT RECORDS =====" << endl;
    cout << "Student 1 -> Roll: " << roll1 << ", Name: " << name1 << ", Marks: " << marks1 << endl;
    cout << "Student 2 -> Roll: " << roll2 << ", Name: " << name2 << ", Marks: " << marks2 << endl;
    cout << "Student 3 -> Roll: " << roll3 << ", Name: " << name3 << ", Marks: " << marks3 << endl;

    return 0;
}