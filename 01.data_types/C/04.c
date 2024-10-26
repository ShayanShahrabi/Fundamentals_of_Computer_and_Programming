#include <stdio.h>

int main() {
    int num, yekanFinal, dahghanFinal, sadghanFinal;

    // Read the input number
    scanf("%d", &num);

    // Extract the digits
    sadghanFinal = num % 10;      // Last digit (units place)
    num = num / 10;

    dahghanFinal = num % 10;      // Middle digit (tens place)
    num = num / 10;

    yekanFinal = num % 10;        // First digit (hundreds place)

    // Print the digits in reverse order
    printf("%d%d%d\n", sadghanFinal, dahghanFinal, yekanFinal);
    
    return 0;
}

