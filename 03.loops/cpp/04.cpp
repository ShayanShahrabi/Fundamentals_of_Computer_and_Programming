#include <iostream>

using namespace std;

int main(){
    int n, ans, ones;  // 'yekan' in English is 'ones' :)
    bool is_negative = false;
    ans = 0;
    cin >> n;

    if (n < 0){
        is_negative = true;
        n *= -1;
    }

    while (n > 0){
        ones = n % 10;
        ans *= 10;
        ans += ones;
        n = n / 10;
    }

    if (is_negative){
        cout << '-' << ans << endl;
    }else{
        cout << ans << endl;
    }

    return 0;
}