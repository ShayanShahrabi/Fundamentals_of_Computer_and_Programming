#include <iostream>

using namespace std;

int main(){

    int m, n, z;
    cin >> m >> n >> z;

    int matrix1[m][n], matrix2[n][z], d;

    // read 1st matrix elemets
    for (int row = 0; row < m; row++){
        for (int col = 0; col < n; col++){
            cin >> matrix1[row][col];
        }
            
    }

    // read 2nd matrix elemets
    for (int row = 0; row < n; row++){
        for (int col = 0; col < z; col++){
            cin >> matrix2[row][col];
        }
    }

    // calculate the product
    for (int row_matrix_1 = 0; row_matrix_1 < m; row_matrix_1++){
        for (int col_matrix2 = 0; col_matrix2 < z; col_matrix2++){
            d = 0;
            for (int row_matrix_2 = 0; row_matrix_2 < n; row_matrix_2++)
                d += matrix1[row_matrix_1][row_matrix_2] * matrix2[row_matrix_2][col_matrix2];

            cout << d << " ";
        }
        cout << endl;
    }

    return 0;
}