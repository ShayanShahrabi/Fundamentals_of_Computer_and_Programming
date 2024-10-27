#include <stdio.h>

int main() {
    int K;

    // Read the integer K
    scanf("%d", &K);

    // Check if K is odd or even
    if (K % 2 == 1) {
        printf("Payin Barare\n");
    } else {
        printf("Bala Barare\n");
    }

    return 0;
}

