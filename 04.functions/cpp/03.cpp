#include <iostream>

using namespace std;

//----------------------------------------------------------------------------
string make_upper(string word){
    string res;
    res = "";
    res += (char)toupper(word[0]);
    for (int i = 1; i < word.size(); i++){
        res += (char)tolower(word[i]);
    }
    return res;
}
//----------------------------------------------------------------------------
int main(){
    string name;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        while(cin >> name){
            cout << make_upper(name) << " ";
        }
        cout << endl;
    }
    return 0;
}