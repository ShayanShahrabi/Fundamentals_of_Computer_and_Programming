#include <iostream>

using namespace std;

int main(){
    int num, yekanFinal, dahghanFinal, sadghanFinal;
    cin >> num;
    sadghanFinal = num % 10;
    num = num / 10;

    dahghanFinal = num % 10;
    num = num / 10;

    yekanFinal = num % 10;

    cout << sadghanFinal << dahghanFinal << yekanFinal;
    return 0;
}