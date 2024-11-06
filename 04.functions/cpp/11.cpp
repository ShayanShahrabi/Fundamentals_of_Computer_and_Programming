#include <iostream>
#include <algorithm>
using namespace std;

void ShiftLeft(string &str, int cnt) {
    int n = str.length();
    if (n == 0 || cnt <= 0) return; // Do nothing if string is empty or count is 0 or negative
    cnt %= n; // Normalize count
    string newstr = str.substr(cnt) + str.substr(0, cnt);
    str = newstr;
}

void ShiftRight(string &str, int cnt) {
    int n = str.length();
    if (n == 0 || cnt <= 0) return; // Do nothing if string is empty or count is 0 or negative
    cnt %= n; // Normalize count
    string newstr = str.substr(n - cnt) + str.substr(0, n - cnt);
    str = newstr;
}

void Extend(string &str, int cnt) {
    for (int i = 0; i < cnt; i++)
        str += '*';
}

void Shrink(string &str, int cnt) {
    if (cnt >= str.length())
        str = "";
    else
        str = str.substr(0, str.length() - cnt);
}

void Reverse(string &str) {
    reverse(str.begin(), str.end());
}

void Put(string &str, int i, char c) {
    if (i < 1 || i > str.length()) return; // Check bounds for 1-based index
    str[i - 1] = c;
}

void Print(const string &str) {
    cout << str << endl;
}

int main() {
    string order, str;
    getline(cin, str); // Read initial string
    while (true) {
        cin >> order; // Read command
        if (order == "EXIT") break; // Exit condition
        if (order == "SHIFT-R" || order == "SHIFT-L") {
            int cnt;
            cin >> cnt; // Read count for shifting
            if (cnt > 0) {
                if (order == "SHIFT-L") {
                    ShiftLeft(str, cnt);
                } else {
                    ShiftRight(str, cnt);
                }
            }
        } else if (order == "EXTEND") {
            int cnt;
            cin >> cnt; // Read count for extension
            Extend(str, cnt);
        } else if (order == "SHRINK") {
            int cnt;
            cin >> cnt; // Read count for shrinking
            Shrink(str, cnt);
        } else if (order == "REVERSE") {
            Reverse(str);
        } else if (order == "PUT") {
            int i;
            char c;
            cin >> i >> c; // Read index and character
            Put(str, i, c);
        } else if (order == "PRINT") {
            Print(str);
        }
    }
    return 0;
}
