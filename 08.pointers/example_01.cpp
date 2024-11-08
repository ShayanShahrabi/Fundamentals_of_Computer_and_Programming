#include <iostream>

using namespace std;

int main(){
    int some_array[10];

    int *p_location6 = &some_array[6];
    int *p_location0 = &some_array[0];

    cout << "p_location6 = " << p_location6 << endl;
    cout << "p_location0 = " << p_location0 << endl;
    cout << "Difference = " << p_location6 - p_location0 << endl;

    return 0;
}