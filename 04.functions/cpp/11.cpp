#include <iostream>
#include <string>
#include <cmath> // for pow function

using namespace std;

// Function to convert a number from a given base to base 10
int base_n_to_base_10(int number, int base) {
    int decimal_number = 0;
    int exponent = 0;
    
    while (number > 0) {
        decimal_number += (number % 10) * static_cast<int>(pow(base, exponent));
        exponent++;
        number /= 10;
    }

    return decimal_number;
}

// Function to convert a number from base 10 to a given base
string base_10_to_base_n(int input_number, int target_base) {
    if (input_number == 0) {
        return "0"; // Handle edge case for zero
    }

    string result_reversed = "";

    while (input_number > 0) {
        result_reversed += to_string(input_number % target_base);
        input_number /= target_base;
    }

    // Reverse the string for the final result
    string result = string(result_reversed.rbegin(), result_reversed.rend()); 
    return result;
}

// Main program
int main() {
    int number_in_base;
    int original_base;
    int new_base;

    cin >> number_in_base;
    
    cin >> original_base;
    
    cin >> new_base;

    // Convert to base 10, then to the new base
    int number_in_base_10 = base_n_to_base_10(number_in_base, original_base);
    string converted_number = base_10_to_base_n(number_in_base_10, new_base);

    cout << converted_number << endl;

    return 0;
}
