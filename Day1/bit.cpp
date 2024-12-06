#include <iostream>
using namespace std;
int main()
{
    int n, j;
    string a;
    int x = 0;
    cin >> n;

    string i = "X++";
    string k = "X--";
    string l = "++X";
    string d = "--X";

    for (j = 0; j < n; j++)
    {
        cin >> a;
        if (a == i)
        {
            x++;
        }
        else if (a == d)
        {
            --x;
        }
        else if (a == k)
        {
            x--;
        }
        else if (a == l)
        {
            ++x;
        }
    }

    cout << x;
}