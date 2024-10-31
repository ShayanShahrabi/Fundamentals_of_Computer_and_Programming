#include <iostream>

using namespace std;
//----------------------------------------------------------------------------
int num_ways_to_pave(int n);
//----------------------------------------------------------------------------
int num_ways_to_pave(int n){
    if(n == 1){  // base case 1
        return 1;
    }
    if(n == 2){  // base case 2
        return 2;
    }else{  // recursive step
        return num_ways_to_pave(n - 1) + num_ways_to_pave(n - 2);
    }
}
//----------------------------------------------------------------------------
int main(){
    int n;
    cin >> n;
    cout << num_ways_to_pave(n);
}
//----------------------------------------------------------------------------