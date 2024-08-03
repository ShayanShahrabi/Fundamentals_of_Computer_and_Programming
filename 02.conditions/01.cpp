#include <iostream>

using namespace std;

int main(){

    int K;
    cin >> K;

    if (K % 2 == 1){
        cout << "Payin Barare";
    }
    else{ // if K is even!
        cout << "Bala Barare";
    }    

    return 0;
}