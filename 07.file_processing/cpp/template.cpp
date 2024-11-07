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

// Function to add a contact (name, surname, phone number)
// Implement this function to take user input and save it in a file
void addContact() {
    // TODO: Implement adding contact to file
}

// Function to search contact by name
// Implement this function to read the file and search for the name
void searchByName() {
    // TODO: Implement search by name
}

// Function to search contact by phone number
// Implement this function to read the file and search for the phone number
void searchByNumber() {
    // TODO: Implement search by number
}

// Function to list all contacts
// Implement this function to read the file and display all contacts
void listAllContacts() {
    // TODO: Implement listing all contacts
}
