#include <iostream>
#include <vector>
#include <string>
using namespace std;
//----------------------------------------------------------------------------
void rotate90(vector<string> &grid, int n) {
    vector<string> newGrid(n, string(n, ' '));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            newGrid[j][n - i - 1] = grid[i][j];
        }
    }
    grid = newGrid;
}
//----------------------------------------------------------------------------
void reflectHorizontally(vector<string> &grid, int n) {
    for (int i = 0; i < n / 2; ++i) {
        swap(grid[i], grid[n - i - 1]);
    }
}
//----------------------------------------------------------------------------
void reflectVertically(vector<string> &grid, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n / 2; ++j) {
            swap(grid[i][j], grid[i][n - j - 1]);
        }
    }
}
//----------------------------------------------------------------------------
int main() {
    int n;
    cin >> n;
    vector<string> grid(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
    }
    
    int q;
    cin >> q;
    
    for (int i = 0; i < q; ++i) {
        string operation;
        cin >> operation;
        
        if (operation == "90") {
            rotate90(grid, n);
        } else if (operation == "H") {
            reflectHorizontally(grid, n);
        } else if (operation == "V") {
            reflectVertically(grid, n);
        }
    }
    
    for (const string &row : grid) {
        cout << row << endl;
    }

    return 0;
}
