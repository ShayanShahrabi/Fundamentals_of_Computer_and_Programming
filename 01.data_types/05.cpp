#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int x1, y1, x2, y2, x3, y3;
    float fence;
    
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

    fence = sqrt( pow(x1 - x2, 2) + pow(y1 - y2, 2) ) + sqrt( pow(x2 - x3, 2) + pow(y2 - y3, 2) ) + sqrt( pow(x3 - x1, 2) + pow(y3 - y1, 2) );
    cout << ceil(fence);
    return 0;
}