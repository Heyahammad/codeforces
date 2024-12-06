#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, i, j, ok;
    cin >> n;
    int okay = 0;
    vector<vector<int>> b(n, vector<int>(3));

    for (j = 0; j < n; j++)
    {
        for (i = 0; i < 3; i++)
        {
            cin >> b[j][i];
        }
    }

    for (j = 0; j < n; j++)
    {
        ok = 0;
        for (i = 0; i < 3; i++)
        {
            if (b[j][i] == 1)
            {
                ok++;
            }
        }
        if (ok >= 2)
        {
            okay++;
        }
    }

    cout << okay << endl;
    return 0;
}
