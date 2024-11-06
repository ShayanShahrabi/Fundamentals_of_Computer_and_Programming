#include <iostream>

using namespace std;

//----------------------------------------------------------------------------
bool is_prime(int num){
    int cnt;
    cnt = 0;
    for (int i = 1; i <= num; i++){
        if (num % i == 0){
            cnt ++;
        }
    }
    return (cnt == 2);
}
//----------------------------------------------------------------------------
int main(){
    int a, b; 
    cin >> a >> b;

    for (int i = a + 1; i < b; i++){
        if (is_prime(i)){
            cout << i << ',';
        }
    }
    
    cout << "\b \b" << endl; // remove last printed comma
    return 0;
}