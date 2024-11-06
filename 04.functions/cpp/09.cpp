#include <iostream>

using namespace std;
//----------------------------------------------------------------------------
// function prototypes
void draw_odd(int len_side);
void draw_even(int len_side);
void draw(int len_side);
//----------------------------------------------------------------------------
void draw_odd(int len_side){
    for(int i = 1; i <= len_side; i++){
        for(int j = 1; j <= len_side; j++){
            cout << "#";
        }
        cout << endl;
    }
}
//----------------------------------------------------------------------------
void draw_even(int len_side){
    for(int i = 1; i <= len_side; i++){
        cout << "#";
    }
    cout << endl;

    for(int i = 1; i <= len_side - 2; i++){
        cout << "#";
        for(int j = 1; j <= len_side - 2; j++){
            cout << "_";
        }
        cout << "#" << endl;
    }

    for(int i = 1; i <= len_side; i++){
        cout << "#";
    }
    cout << endl;
}
//----------------------------------------------------------------------------
void draw(int len_side){
    (len_side % 2 == 0) ? draw_even(len_side) : draw_odd(len_side);
}
//----------------------------------------------------------------------------
int main(){
    int num_query, len_side;
    cin >> num_query;

    for(int i = 1; i <= num_query; i++){
        cin >> len_side;
        draw(len_side);
        cout << endl;
    }
    return 0;
}