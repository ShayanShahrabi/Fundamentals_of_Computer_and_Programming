#include <iostream>
using namespace std;

int main()
{
    int n, m, c = 0;
    char temp;
    cin >> n >> m;

    char words[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> words[i][j];

    string s;
    cin >> s;

    // Search Horizontally
    for (int i = 0; i < n; i++)
    {
        string r = "";
        for (int j = 0; j < m; j++)
        {
            r += words[i][j];
        }

        int index = r.find(s);
        while (index != -1)
        {
            c++;
            r.replace(0, index + 1, "");
            index = r.find(s);
        }
    }

    // Search Vertically
    for (int j = 0; j < m; j++)
    {
        string r = "";
        for (int i = 0; i < n; i++)
        {
            r += words[i][j];
        }

        int index = r.find(s);
        while (index != -1)
        {
            c++;
            r.replace(0, index + 1, "");
            index = r.find(s);
        }
    }

    cout << c << endl;
}