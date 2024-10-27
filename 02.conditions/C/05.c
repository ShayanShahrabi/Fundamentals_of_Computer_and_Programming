#include <stdio.h>

int main() {
    double a, b, c;

    // Read coefficients a, b, c
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate the discriminant
    double delta = b * b - 4 * a * c;

    // Determine the nature of the roots based on the value of delta
    if (delta > 0) {
        printf("Two Unique Roots\n");
    } else if (delta == 0) {
        printf("Double Root\n");
    } else { // delta < 0
        printf("No Real Root\n");
    }

    return 0;
}

