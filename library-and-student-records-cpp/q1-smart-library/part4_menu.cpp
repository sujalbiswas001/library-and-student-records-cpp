#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

int ids[MAX];
string names[MAX];
int count = 0;

void addBook() {
    if (count >= MAX) {
        cout << "\nLibrary is full! Cannot add more books.\n";
        return;
    }
    int id;
    string name;
    cout << "\nEnter Book ID: ";
    cin >> id;
    cin.ignore();
    cout << "Enter Book Name: ";
    getline(cin, name);

    ids[count] = id;
    names[count] = name;
    count++;

    cout << "\nBook Added Successfully!\n";
}

void displayBooks() {
    if (count == 0) {
        cout << "\nNo books added yet.\n";
        return;
    }
    cout << "\n===== SMART LIBRARY =====" << endl;
    for (int i = 0; i < count; i++) {
        cout << "ID: " << ids[i] << ", Name: " << names[i] << endl;
    }
}

void searchBook() {
    if (count == 0) {
        cout << "\nNo books to search.\n";
        return;
    }
    int searchId;
    cout << "\nEnter Book ID to search: ";
    cin >> searchId;

    bool found = false;
    for (int i = 0; i < count; i++) {
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
}

int main() {
    int choice;

    do {
        cout << "\n===== SMART LIBRARY MENU =====" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Display Books" << endl;
        cout << "3. Search Book" << endl;
        cout << "4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                cout << "\nExiting Program. Goodbye!\n";
                break;
            default:
                cout << "\nInvalid Choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}