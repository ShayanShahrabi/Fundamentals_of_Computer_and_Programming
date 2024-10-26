#include <stdio.h>
#include <math.h>

int main() {
    float n;

    // Read the floating-point number
    scanf("%f", &n);

    // Output the ceiling of n divided by 2
    printf("%.0f\n", ceil(n / 2));

    return 0;
}

