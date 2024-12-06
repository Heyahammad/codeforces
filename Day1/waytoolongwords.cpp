#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    vector<string> a(n);

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        if (a[i].length() > 10)
        {
            cout << a[i].front() << a[i].length() - 2 << a[i].back() << endl;
        }
        else
        {
            cout << a[i] << endl;
        }
    }
}