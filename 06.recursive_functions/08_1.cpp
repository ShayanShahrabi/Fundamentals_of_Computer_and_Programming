#include <iostream>
#include <string> 

using namespace std;
//----------------------------------------------------------------------------
string recursive_reverse(int n);
//----------------------------------------------------------------------------
string recursive_reverse(int n){  // we assume that `n` is always positive
    if(n < 10)  // base case
        return to_string(n);
    else{       // recursive call
        return to_string(n % 10) + recursive_reverse(n / 10);
    }
}
//----------------------------------------------------------------------------
int main() {
    int n;
    cin >> n;

    while(n % 10 == 0){  // get rid of 0's at the right of `n`
        n /= 10;
    }

    if(n >= 0)
        cout << recursive_reverse(n) << endl;
    else
        cout << '-' << recursive_reverse(-1 * n) << endl;
    return 0;
}
//----------------------------------------------------------------------------