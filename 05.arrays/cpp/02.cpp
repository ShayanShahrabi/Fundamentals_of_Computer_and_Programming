#include <iostream>

using namespace std;

//----------------------------------------------------------------------------
int main(){
    // solution 1
    int numbers[10] = {0};
    
    for(int i = 0; i < 10; i++){
        cin >> numbers[i];
    }
    
    int minimum, maximum;
    minimum = numbers[0];
    maximum = numbers[0];

    for(int i = 1; i < 10; i++){
        if(numbers[i] < minimum)
            minimum = numbers[i];
        if(numbers[i] > maximum)
            maximum = numbers[i];
    }
    cout << minimum << endl << maximum << endl;

    // solution 2
    // int minimum, maximum, current_num;
    // cin >> minimum;
    // maximum = minimum;

    // for(int i = 2; i <= 10; i++){
    //     cin >> current_num;
    //     if(current_num < minimum)
    //         minimum = current_num;
    //     if(current_num > maximum)
    //         maximum = current_num;
    // }
    // cout << minimum << endl << maximum << endl;

    return 0;
}
//----------------------------------------------------------------------------