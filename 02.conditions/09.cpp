#include <iostream>

using namespace std;

int main(){
    int n, a, b, c, d, cnt;
    cnt = 0;
    
    cin >> n >> a >> b >> c >> d;

    if (n % a == 0){
        cnt += 1;
    }
    if (n % b == 0){
        cnt += 1;
    }
    if (n % c == 0){
        cnt += 1;
    }
    if (n % d == 0){
        cnt += 1;
    }

    cout << cnt << endl;

    return 0;
}