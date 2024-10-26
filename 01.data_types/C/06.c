#include <stdio.h>

int main() {
    int distance, meters, decimeters, centimeters, millimeters;

    // Read the distance in millimeters
    scanf("%d", &distance);

    // Convert millimeters to meters, decimeters, centimeters, and millimeters
    meters = distance / 1000;
    distance = distance % 1000;

    decimeters = distance / 100;
    distance = distance % 100;

    centimeters = distance / 10;
    millimeters = distance % 10;

    // Print the results
    printf("%d %d %d %d\n", meters, decimeters, centimeters, millimeters);

    return 0;
}

