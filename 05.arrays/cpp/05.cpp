#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void addScore(float a, int &s);

int main()
{
    int n, s = 0;
    float sum = 0;
    cin >> n;

    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int k = 0; k < 2 * n - 1; k++)
    {
        if (k % 4 == 0)
        {
            for (int j = 0; j < n - 2 * k / 4; j++)
            {
                sum += matrix[k / 4][j + k / 4];
                // cout << sum << endl;
                addScore(sum, s);
            }
            continue;
        }
        if (k % 4 == 1)
        {
            for (int i = (k / 4) + 1; i < n - (k / 4); i++)
            {
                sum += matrix[i][n - ((k / 4) + 1)];
                // cout << sum << endl;
                addScore(sum, s);
            }
            continue;
        }
        if (k % 4 == 2)
        {
            for (int j = n - ((k / 4) + 2); j >= k / 4; j--)
            {
                sum += matrix[n - ((k / 4) + 1)][j];
                // cout << sum << endl;
                addScore(sum, s);
            }
            continue;
        }
        if (k % 4 == 3)
        {
            for (int i = n - ((k / 4) + 2); i > k / 4; i--)
            {
                sum += matrix[i][k / 4];
                // cout << sum << endl;
                addScore(sum, s);
            }
            continue;
        }
    }

    cout << s;

    return 0;
}

void addScore(float a, int &s)
{
    if (sqrt(a) == int(sqrt(a)))
    {
        s++;
    }
}