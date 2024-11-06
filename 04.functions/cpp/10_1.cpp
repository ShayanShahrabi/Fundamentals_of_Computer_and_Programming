#include <iostream>

using namespace std;
//----------------------------------------------------------------------------
// function prototype
float sum(float num1, float num2);
float subtract(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);
//----------------------------------------------------------------------------
float sum(float num1, float num2){
    return num1 + num2;
}
//----------------------------------------------------------------------------
float subtract(float num1, float num2){
    return num1 - num2;
}
//----------------------------------------------------------------------------
float multiply(float num1, float num2){
    float result = 0;
    for (int i = 1; i <= num1; i ++){
        result = sum(result, num2);
    }
    return result;
}
//----------------------------------------------------------------------------
float divide(float num1, float num2){
    int result = 0;
    while (num1 > 0){
        result ++;
        num1 -= num2;
    }
    return result;
}
//----------------------------------------------------------------------------
int main(){
    float operand1, operand2;
    char operat;
    cin >> operand1 >> operat >> operand2;

    switch(operat){
        case '+':
            cout << sum(operand1, operand2);
            break;
        case '-':
            cout << subtract(operand1, operand2);
            break;
        case '*':
            cout << multiply(operand1, operand2);
            break;
        case '/':
            cout << divide(operand1, operand2);
            break;
    }
    return 0;
}
//----------------------------------------------------------------------------