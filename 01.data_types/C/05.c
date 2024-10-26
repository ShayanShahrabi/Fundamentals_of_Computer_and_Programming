#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2, x3, y3;
    float fence;

    // Read the coordinates of the triangle vertices
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    scanf("%d %d", &x3, &y3);

    // Calculate the fence length (perimeter)
    fence = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) + 
             sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2)) + 
             sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

    // Print the ceiling of the fence length
    printf("%.0f\n", ceil(fence));
    return 0;
}

