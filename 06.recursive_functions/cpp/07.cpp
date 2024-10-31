#include <iostream>

using namespace std;
//----------------------------------------------------------------------------
long long calculate_moves(float rice_amount);
//----------------------------------------------------------------------------
long long calculate_moves(float rice_amount){
    if(rice_amount < 1){  // base case
        return 0;
    }else{  // recursive call
        return 1 + calculate_moves(rice_amount / 2);
    }
}
//----------------------------------------------------------------------------
int main() {
    float rice_amount;
    cin >> rice_amount;

    cout << calculate_moves(rice_amount);

    return 0;
}
//----------------------------------------------------------------------------