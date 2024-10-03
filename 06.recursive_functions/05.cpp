#include <iostream>

using namespace std;
//----------------------------------------------------------------------------
int recursive_multiply(int n, int m);
//----------------------------------------------------------------------------
int recursive_multiply(int n, int m){
    if(n == 1){
        return m;
    }else{
        return m + recursive_multiply(n - 1, m);
    }
}
//----------------------------------------------------------------------------
int main(){
    int n, m;
    cin >> n >> m;
    cout << recursive_multiply(n , m) << endl;
}
//----------------------------------------------------------------------------