#include <iostream>

using namespace std;
//----------------------------------------------------------------
int deep_sum_digits(int num);
//----------------------------------------------------------------
int deep_sum_digits(int num){
    int sum_digits = 0;
    
    while(num > 0){
        sum_digits += num % 10;
        num /= 10;
    }

    if(sum_digits < 10){
        return sum_digits;
    }
    return deep_sum_digits(sum_digits);
}
//----------------------------------------------------------------
int main(){
    int n;
    cin >> n;
    cout << deep_sum_digits(n);
}
//----------------------------------------------------------------