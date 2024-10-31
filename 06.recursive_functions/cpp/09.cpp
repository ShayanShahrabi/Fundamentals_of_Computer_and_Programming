#include <iostream>

using namespace std;
//----------------------------------------------------------------------------
long long recursive_gcd(long long num1, long long num2);
//----------------------------------------------------------------------------
long long recursive_gcd(long long num1, long long num2){
    if(num1 == 0){  // base case
        return num2;
    } else if (num2 == 0){  // base case
        return num1;
    } else{// recursive call
        if(num1 > num2){  
            return recursive_gcd((num1 % num2), num2);
        }else{
            return recursive_gcd(num1, (num2 % num1));
        }
    }
}
//----------------------------------------------------------------------------
int main(){
    long long A, B;
    cin >> A >> B;
    cout << recursive_gcd(A, B);
}
//----------------------------------------------------------------------------