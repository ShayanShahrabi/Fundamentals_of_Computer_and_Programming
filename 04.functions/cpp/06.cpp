#include <iostream>
#include <sstream>

using namespace std;

// Function to calculate the factorial of a number
long long factorial(int num) {
    long long result = 1; // Initialize result to 1 (0! = 1)
    for (int i = 2; i <= num; ++i) { // Calculate factorial
        result *= i; // Multiply result by each integer up to num
    }
    return result; // Return the computed factorial value
}

// Function to calculate the binomial coefficient C(n, k)
// This coefficient represents the number of ways to choose k elements from a set of n elements
long long binomialCoefficient(int n, int k) {
    // If k is greater than n or k is negative, return 0 since it's not possible
    if (k > n || k < 0) {
        return 0;
    }
    // Calculate C(n, k) using the formula: n! / (k! * (n-k)!)
    return factorial(n) / (factorial(k) * factorial(n - k));
}

// Function to generate the expansion of (x + y)^n
string binomialExpansion(int n) {
    stringstream result; // Prepare a stringstream to build the output string

    // Loop through each term from i = 0 to i = n
    for (int i = 0; i <= n; ++i) {
        long long coeff = binomialCoefficient(n, i); // Calculate the coefficient C(n, i)
        int powerX = n - i; // Calculate the power of x (n - i)
        int powerY = i; // Calculate the power of y (i)

        // Handling the coefficient
        if (coeff > 1) { // Only append coefficient if greater than 1
            result << coeff; // Append coefficient to the result
        }

        // Handling the power of x
        if (powerX > 0) { // Only process if power of x is positive
            result << "x"; // Append 'x' to result
            // Check if we need to append the power of x
            if (powerX > 1) { // If power is greater than 1
                if (powerX > 9) { // If power has more than 1 digit
                    result << "^{"+to_string(powerX)+"}"; // Use curly braces for the power
                } else {
                    result << "^" << powerX; // Otherwise just append the power
                }
            }
        }

        // Handling the power of y
        if (powerY > 0) { // Only process if power of y is positive
            result << "y"; // Append 'y' to result
            // Check if we need to append the power of y
            if (powerY > 1) { // If power is greater than 1
                if (powerY > 9) { // If power has more than 1 digit
                    result << "^{"+to_string(powerY)+"}"; // Use curly braces for the power
                } else {
                    result << "^" << powerY; // Otherwise just append the power
                }
            }
        }

        // Append '+' unless it's the last term
        if (i < n) {
            result << "+"; // Add a '+' to separate terms (if it’s not the last term)
        }
    }

    return result.str(); // Convert the stringstream to a string and return it
}

int main() {
    int n; // Variable to store the input value of n
    cin >> n; // Read the integer n from standard input

    // Generate the binomial expansion as a string
    string expansion = binomialExpansion(n);
    cout << expansion << endl; // Print the resulting expansion

    return 0; // Indicate successful completion
}
