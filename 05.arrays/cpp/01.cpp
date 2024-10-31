#include <iostream>

using namespace std;

//----------------------------------------------------------------------------
int main(){
    int check_list[101] = {0};  // solution 1 for initializing all elements to 0
    int current_num;
    int most_repeated_num_idx = 0;

    // initialize all elements of check_list to 0 -> 2 solutions

    // solution 2
    // for(int idx = 0; idx <= 100; idx ++){
    //     check_list[idx] = 0;
    // }


    // take 10 inputs
    for(int cnt = 1; cnt < 11; cnt++){
        cin >> current_num;
        check_list[current_num] ++;
    }

    for(int idx = 1; idx <= 100; idx++){
        if(check_list[idx] > check_list[most_repeated_num_idx]){
            most_repeated_num_idx = idx;
        }
    }
    
    cout << most_repeated_num_idx;

    return 0;
}
//----------------------------------------------------------------------------