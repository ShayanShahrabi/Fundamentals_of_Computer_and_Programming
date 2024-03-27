#include <iostream>

using namespace std;

int main(){
    int num, yekan, dahghan, sadghan;
    cin >> num;

    sadghan = num % 10;
    num = num / 10;
    dahghan = num % 10;
    num = num / 10;
    yekan = num;

    cout << sadghan << dahghan << yekan;

    return 0;
}