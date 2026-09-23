#include <iostream>
#include <string>
using namespace std;

int main() {
    int id1, id2, id3;
    string name1, name2, name3;

    cout << "Enter Book 1 ID: ";
    cin >> id1;
    cin.ignore();
    cout << "Enter Book 1 Name: ";
    getline(cin, name1);

    cout << "Enter Book 2 ID: ";
    cin >> id2;
    cin.ignore();
    cout << "Enter Book 2 Name: ";
    getline(cin, name2);

    cout << "Enter Book 3 ID: ";
    cin >> id3;
    cin.ignore();
    cout << "Enter Book 3 Name: ";
    getline(cin, name3);

    cout << "\n===== LIBRARY BOOKS =====" << endl;
    cout << "Book 1 -> ID: " << id1 << ", Name: " << name1 << endl;
    cout << "Book 2 -> ID: " << id2 << ", Name: " << name2 << endl;
    cout << "Book 3 -> ID: " << id3 << ", Name: " << name3 << endl;

    return 0;
}