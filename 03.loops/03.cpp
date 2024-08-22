#include <iostream>

using namespace std;

int main(){
    int n, product;
    cin >> n;
    product = 1;

    for (int i = 1; i <= n; i++){
        product *= i;
    }

    cout << product;

    return 0;
}