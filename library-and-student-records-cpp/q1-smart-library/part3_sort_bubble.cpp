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

    // Bubble Sort by ID (ascending), keeping names matched
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - 1 - i; j++) {
            if (ids[j] > ids[j + 1]) {
                swap(ids[j], ids[j + 1]);
                swap(names[j], names[j + 1]);
            }
        }
    }

    cout << "\n===== BOOKS SORTED BY ID (ASCENDING) =====" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "ID: " << ids[i] << ", Name: " << names[i] << endl;
    }

    return 0;
}