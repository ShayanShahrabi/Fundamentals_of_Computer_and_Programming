#include <iostream>

using namespace std;

//----------------------------------------------------------------------------
int calculate_new_score(int current_score, int duration){
    if(duration == 0) 
        return 20;
    else if(duration == 7)
        return current_score;
    else{
        // approach 1
        // if(current_score - duration < 0)
        //     return 0;
        // else
        //     return current_score - duration;

        // approach 2: using ternary operator
        return (current_score - duration < 0) ? 0 : current_score - duration;
    } 
}
//----------------------------------------------------------------------------
int main(){
    int current_score, duration;
    cin >> current_score >> duration;
    cout << calculate_new_score(current_score, duration);
    return 0;
}