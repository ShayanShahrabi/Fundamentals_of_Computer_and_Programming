#include <iostream>

using namespace std;

// example to see the name of the array is a pointer to the 
// first location

int main(){
    int some_array[10] = {3, 6, 7, 15, 18, 21 ,13, 80, 30, 27};

    int *p1_location0 = some_array;
    int *p2_location0 = &some_array[0];

    cout << "p1_location0 = " << p1_location0 << endl;
    cout << "p2_location0 = " << p2_location0 << endl;

    return 0;
}