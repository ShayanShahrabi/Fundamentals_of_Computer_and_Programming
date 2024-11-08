#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, m, cnt;
    cin >> n >> m;
    cnt = 0;

    for (int i = -10; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cnt += ((i + j) * (i + j) * (i + j)) / (j * j);
            // cnt += static_cast<int>(pow(i + j, 3)) / (j * j);
        }
    }

    cout << cnt << endl;

    return 0;
}
