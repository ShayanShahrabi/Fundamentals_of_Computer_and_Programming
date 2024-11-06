#include <iostream>

using namespace std;

int main(){
    int n1, n2, n3, numOdd;
    cin >> n1 >> n2 >> n3;
    numOdd = (abs(n1) % 2) + (abs(n2) % 2) + (abs(n3) % 2);
    cout << numOdd << endl << 3 - numOdd << endl;
    return 0;
}