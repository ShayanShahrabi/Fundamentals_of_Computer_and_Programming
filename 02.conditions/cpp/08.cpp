#include <iostream>

using namespace std;

int main(){
    int c_m, g_m, c_s, g_s, rate;
    cin >> c_m >> g_m >> c_s >> g_s >> rate;

    if (c_m + g_m * rate >= c_s + g_s * rate){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}