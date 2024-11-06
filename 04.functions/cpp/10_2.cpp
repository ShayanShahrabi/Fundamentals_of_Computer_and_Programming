#include <iostream>

using namespace std;
//----------------------------------------------------------------------------
// function prototype
void display_menu();

int sum_n();
int subtract_n();
int multiply_n();
int divide_n();
//----------------------------------------------------------------------------
void display_menu(){
    int user_choice;

    cout << "1. Calculate Sum n" << endl;
    cout << "2. Calculate Multiply n" << endl;
    cout << "3. Calculate Subtract n" << endl;
    cout << "4. Calculate Divide n" << endl;

    cin >> user_choice;

    switch(user_choice){
        case 1:
            sum_n();
            break;
        case 2:
            multiply_n();
            break;
        case 3:
            subtract_n();
            break;
        case 4:
            divide_n();
            break;
    }
}
//----------------------------------------------------------------------------
int sum_n(){
    int n, result, current_num;
    result = 0;
    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> current_num;
        result += current_num;
    }
    return result;
}
//----------------------------------------------------------------------------
int main(){
    display_menu();
    return 0;
}
//----------------------------------------------------------------------------