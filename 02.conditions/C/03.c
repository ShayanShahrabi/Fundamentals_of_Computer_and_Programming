#include <iostream>

using namespace std;

// useful stackoverflow link: 
// https://stackoverflow.com/questions/2233166/most-efficient-way-to-find-the-greatest-of-three-ints

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int max_a_b = max(a, b);
    int maximum = max(max_a_b, c);

    int min_a_b = min(a, b);
    int minimum = min (min_a_b, c);

    int middle = (a + b + c) - minimum - maximum;

    if (minimum*minimum + middle*middle == maximum*maximum){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}
