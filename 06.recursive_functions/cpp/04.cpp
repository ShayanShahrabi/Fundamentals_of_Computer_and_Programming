#include <iostream>
#include <string>

using namespace std;

// YouTube link:
// https://www.youtube.com/watch?v=rf6uf3jNjbo
//----------------------------------------------------------------------------
string solve_hanoi_tower(int n, int &count, char start, char end, char temp);
//----------------------------------------------------------------------------
string solve_hanoi_tower(int n, int &count, char start, char end, char temp){
    string moves = "";

    if(n == 0){  // base case
        count++;
        return moves;
    }else{  // recursive call

        moves += solve_hanoi_tower(n - 1, count, start, temp, end);

        moves += to_string(count);
        moves += " ";
        moves += start;
        moves += " ";
        moves += end;
        moves += "\n";

        moves += solve_hanoi_tower(n - 1, count, temp, end, start);
        return moves;
    }
}
//----------------------------------------------------------------------------
int main(){
    int n, count = 0;
    cin >> n;

    cout << solve_hanoi_tower(n, count, 'A', 'B', 'C');
    
    return 0;
}
//----------------------------------------------------------------------------