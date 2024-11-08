#include <iostream>

using namespace std;


// why are pointers confusing?! The types matter
int main(){
    char some_string[10];

    char *p_some_string = some_string;

    cout << "p_some_string = " << p_some_string << endl;

    char *p_location3 = &some_string[3];
    char *p_location0 = &some_string[0];

    cout << "p_location3 = " << p_location3 << endl;  // the ptr is looked at as a string!
    cout << "p_location0 = " << p_location0 << endl;
    cout << "Difference = " << p_location3 - p_location0 << endl;

    return 0;
}