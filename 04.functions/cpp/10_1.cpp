#include <iostream>

using namespace std;
//----------------------------------------------------------------------------
// function prototype
float sum(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);
float subtract(float num1, float num2);
//----------------------------------------------------------------------------
float sum(float num1, float num2){
    return num1 + num2;
}
//----------------------------------------------------------------------------
float multiply(float num1, float num2){
    return num1 * num2;
}
//----------------------------------------------------------------------------
float divide(float num1, float num2){
    return num1 / num2;
}
//----------------------------------------------------------------------------
float subtract(float num1, float num2){
    return num1 - num2;
}
//----------------------------------------------------------------------------
int main(){
    float operand1, operand2;
    char operat;
    cin >> operand1 >> operat >> operand2;

    switch(operat){
        case '+':
            // cout << operand1 + operand2 << endl;
            cout << sum(operand1, operand2);
            break;
        case '-':
            // cout << operand1 - operand2 << endl;
            cout << subtract(operand1, operand2);
            break;
        case '*':
            // cout << operand1 * operand2 << endl;
            cout << multiply(operand1, operand2);
            break;
        case '/':
            // cout << operand1 / operand2 << endl;
            cout << divide(operand1, operand2);
            break;
    }
    return 0;
}
//----------------------------------------------------------------------------