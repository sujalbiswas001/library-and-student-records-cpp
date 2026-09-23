#include <iostream>
#include <string>
using namespace std;

int main() {
    const int SIZE = 5;
    int ids[SIZE];
    string names[SIZE];

    cout << "Enter details of 5 books:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "\nBook " << i + 1 << " ID: ";
        cin >> ids[i];
        cin.ignore();
        cout << "Book " << i + 1 << " Name: ";
        getline(cin, names[i]);
    }

    int searchId;
    cout << "\nEnter Book ID to search: ";
    cin >> searchId;

    bool found = false;
    for (int i = 0; i < SIZE; i++) {
        if (ids[i] == searchId) {
            cout << "\nBook Found!" << endl;
            cout << "Book Name: " << names[i] << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "\nBook Not Found!" << endl;
    }

    return 0;
}