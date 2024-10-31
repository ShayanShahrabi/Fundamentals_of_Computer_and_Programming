#include <iostream>

using namespace std;

int main(){
    double a, b, c;
    cin >> a >> b >> c;

    double delta = b*b - 4*a*c;

    if(delta > 0){
        cout << "Two Unique Roots";
    }
    if(delta == 0){
        cout << "Double Root";
    }
    if(delta < 0){
        cout << "No Real Root";
    }
    return 0;
}