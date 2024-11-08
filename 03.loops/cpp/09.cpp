#include <iostream>

using namespace std;

int main(){
    int n, step_length; 
    cin >> n;

    int x_cor = 0, y_cor = 0;

    step_length = 1;
    
    int i_module_4;
    
    for(int i = 1; i <= (n - 1); i++){
        
        i_module_4 = i % 4;
        
        switch(i_module_4){
            case 1:  // move right
                x_cor += step_length;
                break;
            case 2:  // move up
                y_cor += step_length;
                step_length ++;
                break;
            case 3:  // move left
                x_cor -= step_length;
                break;
            case 0:  // move down
                y_cor -= step_length;
                step_length ++;
                break;
        }
    }

    cout << x_cor << " " << y_cor << endl;

    return 0;
}