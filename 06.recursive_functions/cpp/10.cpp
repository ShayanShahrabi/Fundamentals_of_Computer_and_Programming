#include <iostream>

using namespace std;
//----------------------------------------------------------------------------
int reach_nth_stair(int stair_num);
//----------------------------------------------------------------------------
int reach_nth_stair(int stair_num){
    if(stair_num == 0){  // base case 0
        return 1;
    }

    if(stair_num == 1){  // base case 1
        return 1;
    }
    
    if(stair_num == 2){  // base case 2
        return 2;
    }
    if(stair_num < 5){  // recursive call
        return reach_nth_stair(stair_num - 1) + reach_nth_stair(stair_num - 2);
    }else{
        return reach_nth_stair(stair_num - 1) 
             + reach_nth_stair(stair_num - 2)
             + reach_nth_stair(stair_num - 5);
    }
}
//----------------------------------------------------------------------------
int main(){
    int n;
    cin >> n;
    cout << reach_nth_stair(n);
}
//----------------------------------------------------------------------------