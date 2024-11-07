#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function prototypes
void addContact();
void searchByName();
void searchByNumber();
void listAllContacts();

int main() {
    int choice;
    while (true) {
        cout << "\nContact List Menu\n";
        cout << "1. Add Contact\n";
        cout << "2. Search by Name\n";
        cout << "3. Search by Number\n";
        cout << "4. List All Contacts\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                searchByName();
                break;
            case 3:
                searchByNumber();
                break;
            case 4:
                listAllContacts();
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
}

void addContact() {
    ofstream file("contacts.txt", ios::app); // Open in append mode
    if (!file) {
        cout << "Error opening file.\n";
        return;
    }

    string firstName, surname, phoneNumber;
    cout << "Enter first name: ";
    cin >> firstName;
    cout << "Enter surname: ";
    cin >> surname;
    cout << "Enter phone number: ";
    cin >> phoneNumber;

    file << firstName << "$" << surname << "$" << phoneNumber << "\n";
    file.close();
    cout << "Contact saved successfully.\n";
}

void searchByName() {
    ifstream file("contacts.txt");
    if (!file) {
        cout << "Error opening file.\n";
        return;
    }

    string nameToSearch, line;
    cout << "Enter first name to search: ";
    cin >> nameToSearch;

    bool found = false;
    while (getline(file, line)) {
        size_t pos = line.find("$");
        if (pos != string::npos && line.substr(0, pos) == nameToSearch) {
            cout << "Contact found: " << line << "\n";
            found = true;
        }
    }

    if (!found) {
        cout << "No contact found with the name " << nameToSearch << ".\n";
    }
    file.close();
}

void searchByNumber() {
    ifstream file("contacts.txt");
    if (!file) {
        cout << "Error opening file.\n";
        return;
    }

    string numberToSearch, line;
    cout << "Enter phone number to search: ";
    cin >> numberToSearch;

    bool found = false;
    while (getline(file, line)) {
        size_t pos = line.rfind("$"); // Last "$" symbol to get the phone number
        if (pos != string::npos && line.substr(pos + 1) == numberToSearch) {
            cout << "Contact found: " << line << "\n";
            found = true;
        }
    }

    if (!found) {
        cout << "No contact found with the phone number " << numberToSearch << ".\n";
    }
    file.close();
}

void listAllContacts() {
    ifstream file("contacts.txt");
    if (!file) {
        cout << "Error opening file.\n";
        return;
    }

    string line;
    cout << "\nAll Contacts:\n";
    while (getline(file, line)) {
        size_t pos1 = line.find("$");
        size_t pos2 = line.rfind("$");

        if (pos1 != string::npos && pos2 != string::npos && pos1 != pos2) {
            string firstName = line.substr(0, pos1);
            string surname = line.substr(pos1 + 1, pos2 - pos1 - 1);
            string phoneNumber = line.substr(pos2 + 1);

            cout << "Name: " << firstName << " " << surname << ", Phone: " << phoneNumber << "\n";
        }
    }
    file.close();
}
