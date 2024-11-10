#include <iostream>
#include <string>

using namespace std;
//----------------------------------------------------------------------------
int main(){
    string input;
    getline(cin, input);
    int len = input.length();

    // remove space from input text
    string input_no_space = "";
    for(int i = 0; i < len; i++){
        if(input[i] != ' ')
            input_no_space += input[i];
    }
    // cout << input_no_space << endl;

    int new_len = input_no_space.length();
    string input_no_space_reversed = "";
    for(int i = new_len - 1; i >= 0; i--){
        input_no_space_reversed += input_no_space[i];
    }
    // cout << input_no_space_reversed << endl;

    if(input_no_space == input_no_space_reversed)
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
}
