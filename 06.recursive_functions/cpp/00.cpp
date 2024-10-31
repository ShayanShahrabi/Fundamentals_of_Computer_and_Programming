#include <iostream>

using namespace std;
//----------------------------------------------------------------------------
void recursive_func_without_base_case(int n);
//----------------------------------------------------------------------------
void recursive_func_without_base_case(int n){
    
    if(n == 0){  // base case  --> this part is so important :)
        return;
    }else{  // recursive call
        cout << n << endl;
        recursive_func_without_base_case(n - 1);
    }
}
//----------------------------------------------------------------------------
int main(){
    int n;
    cin >> n;
    recursive_func_without_base_case(n);
}
//----------------------------------------------------------------------------