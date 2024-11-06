#include <iostream>

using namespace std;
//----------------------------------------------------------------------------
string tell_result(int a1, int a2, int a3, int a4, int a5) {
    int cnt = 0;

    if(a1 >= 80) cnt++;
    if(a2 >= 80) cnt++;
    if(a3 >= 80) cnt++;
    if(a4 >= 80) cnt++;
    if(a5 >= 80) cnt++;

    if(cnt >= 3) return "Mamma mia!";
    else if(cnt >= 1) return "Mamma mia!!";
    else return "Mamma mia!!!";
}
//----------------------------------------------------------------------------
int main(){
    int a1, a2, a3, a4, a5;
    cin >> a1 >> a2 >> a3 >> a4 >> a5;
    cout << tell_result(a1, a2, a3, a4, a5) << endl;
    return 0;
}