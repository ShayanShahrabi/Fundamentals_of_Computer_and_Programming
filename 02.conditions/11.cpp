#include <iostream>

using namespace std;

int main(){
    float operand1, operand2;
    char operat;
    cin >> operand1 >> operat >> operand2;

    switch(operat){
        case '+':
            cout << operand1 + operand2 << endl;
            break;
        case '-':
            cout << operand1 - operand2 << endl;
            break;
        case '*':
            cout << operand1 * operand2 << endl;
            break;
        case '/':
            cout << operand1 / operand2 << endl;
            break;
    }
    
    return 0;
}