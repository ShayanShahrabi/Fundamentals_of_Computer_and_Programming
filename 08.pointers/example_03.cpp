#include <iostream>

using namespace std;

// example to see the name of the array is a pointer to the 
// first location

int main(){
    int some_array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *p_location0 = &some_array[0];

    // 1st step (what the pointer contains)
    for (int i = 0; i < 10; i++){
        cout << some_array << endl;
    }

    cout << "-----------------------------" << endl;

    // 2nd step (pointer arithmetic)
    for (int i = 0; i < 10; i++){
        cout << some_array + i << endl;
    }

    cout << "-----------------------------" << endl;

    // 3rd step ('value of' operator -> *)
    for (int i = 0; i < 10; i++){
        cout << some_array + i << " = " << *(some_array + i) << endl;
    }

    cout << "-----------------------------" << endl;

    // 4th step (the same thing we did in step 3)
    for (int i = 0; i < 10; i++){
        cout << p_location0 << " = " << *p_location0 << endl;
        p_location0 ++;
    }

    return 0;
}