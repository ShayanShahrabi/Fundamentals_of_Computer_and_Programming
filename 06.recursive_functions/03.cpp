#include <iostream>

using namespace std;
//----------------------------------------------------------------
int sum_odd_digits(int num);
//----------------------------------------------------------------
int sum_odd_digits(int num){
    if(num < 10){  // if `num` is a 1 digit number
        if(num % 2 == 1){
            return num;
        }
        return 0;
    }
    else{
        if((num % 10) % 2 == 1){ 
            return (num % 10) + sum_odd_digits(num / 10);
        }
        else{
            return sum_odd_digits(num / 10);
        }
    }
}
//----------------------------------------------------------------
int main(){
    int n;
    cin >> n;
    cout << sum_odd_digits(n);
}
//----------------------------------------------------------------