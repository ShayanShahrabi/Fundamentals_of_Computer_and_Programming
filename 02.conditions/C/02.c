#include <stdio.h>
#include <string.h>

int main() {
    char stone_name[20]; // Assume the stone name will not exceed 19 characters

    // Read the stone name from input
    scanf("%s", stone_name);

    // Check the stone name and print the corresponding color
    if (strcmp(stone_name, "space") == 0) {
        printf("blue");
    } else if (strcmp(stone_name, "mind") == 0) {
        printf("yellow");
    } else if (strcmp(stone_name, "reality") == 0) {
        printf("red");
    } else if (strcmp(stone_name, "power") == 0) {
        printf("purple");
    } else if (strcmp(stone_name, "time") == 0) {
        printf("green");
    } else if (strcmp(stone_name, "soul") == 0) {
        printf("orange");
    }

    return 0;
}

