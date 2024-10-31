#include <iostream>

using namespace std;
//----------------------------------------------------------------------------
void ShowFibNth(long int num1, long int num2);
//----------------------------------------------------------------------------
void ShowFibNth(long int num1, long int num2){
    if(num1 == 0){
        return;
    }else{
        cout << num1 << endl;
        ShowFibNth((num2 - num1), num1);
    }
}
//----------------------------------------------------------------------------
int main(){
    int num1, num2;
    cin >> num1 >> num2;
    ShowFibNth(num1, num2);
}
//----------------------------------------------------------------------------