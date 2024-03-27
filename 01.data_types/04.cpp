#include <iostream>

using namespace std;

int main(){
    int num, finalYekan, finalDahghan, finalSadghan;
    cin >> num;

    finalSadghan = num % 10;
    num = num / 10;
    finalDahghan = num % 10;
    num = num / 10;
    finalYekan = num;

    cout << sadghan << dahghan << yekan;

    return 0;
}