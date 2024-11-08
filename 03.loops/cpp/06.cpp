#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    for (int row = 1; row <= 2 * n + 1; row++){
        if (row % 2 == 1){
            for (int col = 1; col <= m; col++){
                cout << " _";
            }
            cout << endl;
        }else{
            for (int col = 1; col <= m + 1; col++){
                cout << "| ";
            }
            cout << endl;
        }
    }

    return 0;
}