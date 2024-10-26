#include <stdio.h>

int main() {
    int shah, vazir, rokh, fil, asb, sarbaz;

    // Read the number of pieces
    scanf("%d %d %d %d %d %d", &shah, &vazir, &rokh, &fil, &asb, &sarbaz);

    // Calculate and print the number of missing pieces
    printf("%d %d %d %d %d %d\n", 
           1 - shah, 
           1 - vazir, 
           2 - rokh, 
           2 - fil, 
           2 - asb, 
           8 - sarbaz);

    return 0;
}

