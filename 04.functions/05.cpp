#include <iostream>

using namespace std;
//----------------------------------------------------------------------------
int choose(int i, int n){
    
    if(i == 0 || i == n){
        return 1;
    }

    int numerator, denominator;
    numerator = 1;
    denominator = 1;

    // numerator
    for (int j = 1; j <= n; j++) {
        numerator *= j;
    }
    
    // denominator
    for(int j = 1; j <= i; j++){
        denominator *= j;
    }
    for(int j = 1; j <= (n - i); j++){
        denominator *= j;
    }

    return (numerator / denominator);
}
//----------------------------------------------------------------------------
int main(){
    int n;
    cin >> n;

    for(int row = 0; row < n; row++){
        for(int col = 0; col <= row; col++){
            cout << choose(col, row) << " ";
        }
        cout << endl;
    }

    return 0;
}