#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int distance, meters, decimeters, centimeters, millimeters;
    cin >> distance;
    
    meters = distance / 1000;
    distance = distance % 1000;

    decimeters = distance / 100;
    distance = distance % 100;

    centimeters = distance / 10;
    millimeters = distance % 10;

    cout << meters << ' ' << decimeters << ' ' << centimeters << ' ' << millimeters << endl;
    
    return 0;
}