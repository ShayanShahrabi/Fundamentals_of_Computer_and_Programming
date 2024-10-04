#include <iostream>
#include <string>

using namespace std;
//----------------------------------------------------------------------------
int reverseInteger(int n, int reversed);
//----------------------------------------------------------------------------
int reverseInteger(int n, int reversed){
    // Base case: if n is 0, return the reversed number
    if (n == 0) {
        return reversed;
    } else {
        // Recursive case: update reversed and call the function again
        reversed = reversed * 10 + n % 10;  // Add last digit of n to reversed
        return reverseInteger(n / 10, reversed);
    }
}
//----------------------------------------------------------------------------
int main() {
    int number;
    cin >> number;

    // Initialize reversed number to 0
    int reversedNumber = 0;

    // Output the reversed integer
    cout << reverseInteger(number, reversedNumber) << endl;

    return 0;
}
//----------------------------------------------------------------------------