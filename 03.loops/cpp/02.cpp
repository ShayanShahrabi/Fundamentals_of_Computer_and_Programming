#include <iostream>

using namespace std;

int main(){
    int k, sum;
    cin >> k;
    sum = 0;
    
    for (int i = 1; i <= k; i++){
        sum += i;
    }

    cout << sum;

    // alternative solution    
    // cout << (k * (1 + k)) / 2;

    return 0;
}