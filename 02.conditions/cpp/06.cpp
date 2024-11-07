#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int sum = a + b + c;

    if (sum == 180) {
        if (a != 0 && b != 0 && c != 0) {
            cout << "Yes";
        } else {
            cout << "No";
        }
    } else {
        cout << "No";
    }

    return 0;
}
