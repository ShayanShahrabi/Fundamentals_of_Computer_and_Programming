#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, n3, numOdd;

    // Read three integers
    scanf("%d %d %d", &n1, &n2, &n3);

    // Count the number of odd numbers
    numOdd = (abs(n1) % 2) + (abs(n2) % 2) + (abs(n3) % 2);

    // Output the count of odd and even numbers
    printf("%d\n", numOdd);
    printf("%d\n", 3 - numOdd);

    return 0;
}

