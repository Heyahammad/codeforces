#include <iostream>
using namespace std;

int main()
{
    int a[5][5];
    int i, j, x = 0, y = 0, m = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                x = i + 1;
                y = j + 1;
            }
        }
    }
    m = abs(x - 3) + abs(y - 3);
    cout << m;
}
