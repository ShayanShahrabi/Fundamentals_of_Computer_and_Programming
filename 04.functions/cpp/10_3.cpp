#include <iostream>

using namespace std;

// Function prototypes
void display_menu();
int sum_n();
int subtract_n();
int multiply_n();
int divide_n();

// Function to display the menu and handle user input
void display_menu() {
    int user_choice;

    do {
        cout << "Menu:" << endl;
        cout << "1. Calculate Sum n" << endl;
        cout << "2. Calculate Multiply n" << endl;
        cout << "3. Calculate Subtract n" << endl;
        cout << "4. Calculate Divide n" << endl;
        cout << "5. Exit" << endl; // Exit option to stop the loop

        cout << "Enter your choice: ";
        cin >> user_choice;

        switch (user_choice) {
            case 1:
                cout << "Sum: " << sum_n() << endl;
                break;
            case 2:
                cout << "Product: " << multiply_n() << endl;
                break;
            case 3:
                cout << "Difference: " << subtract_n() << endl;
                break;
            case 4:
                cout << "Quotient: " << divide_n() << endl;
                break;
            case 5:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (user_choice != 5);
}

// Function to calculate the sum of n numbers
int sum_n() {
    int n, result = 0, current_num;
    cout << "Enter the number of elements to sum: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> current_num;
        result += current_num;
    }
    return result;
}

// Function to subtract n numbers (assumes you subtract from the first number)
int subtract_n() {
    int n, result, current_num;
    cout << "Enter the number of elements to subtract: ";
    cin >> n;

    cout << "Enter number 1: ";
    cin >> result; // Initialize the result with the first number

    for (int i = 2; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> current_num;
        result -= current_num;
    }
    return result;
}

// Function to multiply n numbers
int multiply_n() {
    int n, result = 1, current_num;
    cout << "Enter the number of elements to multiply: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> current_num;
        result *= current_num;
    }
    return result;
}

// Function to divide n numbers (assumes you divide by the first number)
int divide_n() {
    int n;
    double result, current_num;
    cout << "Enter the number of elements to divide: ";
    cin >> n;

    cout << "Enter number 1: ";
    cin >> result; // Initialize the result with the first number

    for (int i = 2; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> current_num;
        if (current_num == 0) {
            cout << "Cannot divide by zero! Exiting division." << endl;
            return 0; // return 0 in case of division by zero
        }
        result /= current_num;
    }
    return result;
}

int main() {
    display_menu();
    return 0;
}
