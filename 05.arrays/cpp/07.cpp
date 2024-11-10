#include <iostream>

using namespace std;
//----------------------------------------------------------------------------
int main(){
    int num_vertex, num_edge;
    
    cin >> num_vertex >> num_edge;
    
    int adj_matrix[num_vertex][num_vertex];

    // initialize all elements of the matrix to 0
    for(int row = 0; row < num_vertex; row++){
        for(int col = 0; col < num_vertex; col++){
            adj_matrix[row][col] = 0;
        }
    }

    // read edges and edit adj_matrix correspondingly
    int vertex1, vertex2;
    for(int i = 1; i <= num_edge; i++){
        cin >> vertex1 >> vertex2;
        adj_matrix[vertex1 - 1][vertex2 - 1] = 1;
        adj_matrix[vertex2 - 1][vertex1 - 1] = 1;
    }

    // print matrix
    for(int row = 0; row < num_vertex; row++){
        for(int col = 0; col < num_vertex; col++){
            cout << adj_matrix[row][col];
        }
        cout << endl;
    }
    return 0;
}
//----------------------------------------------------------------------------