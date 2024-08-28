#include <iostream>

using namespace std;

//----------------------------------------------------------------------------
bool is_num_good(string num){
    for(int i = 0; i < num.size(); i++){
        if ((num[i] != '0') && (num[i] != '1')){
            return false;
        }
    }
    return true;
}
//----------------------------------------------------------------------------
int main(){
    int n, cnt; 
    cnt = 0;
    cin >> n;

    for (int i = 1; i <= n; i++){
        if(is_num_good(to_string(i))){
            cnt ++;
        }
    }
    cout << cnt << endl;    
    return 0;
}