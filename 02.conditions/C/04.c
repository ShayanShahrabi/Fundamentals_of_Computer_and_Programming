#include <stdio.h>

int main() {
    int m;

    // Read the integer m
    scanf("%d", &m);

    // Use a switch statement to print items based on the value of m
    switch (m) {
        case 1:
            printf("sib");
            break;
        case 2:
            printf("sib\n");
            printf("samanoo");
            break;
        case 3:
            printf("sib\n");
            printf("samanoo\n");
            printf("sonbol\n");
            break;
        case 4:
            printf("sib\n");
            printf("samanoo\n");
            printf("sonbol\n");
            printf("sabzeh");
            break;
        case 5:
            printf("sib\n");
            printf("samanoo\n");
            printf("sonbol\n");
            printf("sabzeh\n");
            printf("somagh");
            break;
        case 6:
            printf("sib\n");
            printf("samanoo\n");
            printf("sonbol\n");
            printf("sabzeh\n");
            printf("somagh\n");
            printf("sekkeh");
            break;
        case 7:
            printf("sib\n");
            printf("samanoo\n");
            printf("sonbol\n");
            printf("sabzeh\n");
            printf("somagh\n");
            printf("sekkeh\n");
            printf("sir");
            break;
        default:
            // Optionally handle an invalid case
            printf("Invalid input\n");
            break;
    }

    return 0;
}

