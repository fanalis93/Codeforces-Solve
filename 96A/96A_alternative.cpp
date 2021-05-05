#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int i, c = 0, d = 0;
    string a;

    cin >> a;

    int b = a.length();

    //cout << b << endl;

    for (i = 0; i < b; i++)
    {
        if (a[i] == '0')
        {
            c++;
            d = 0;
        }
        if (a[i] == '1')
        {
            d++;
            c = 0;
        }
        if (c == 7 || d == 7)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    if (c < 7 || d < 7)
    {
        cout << "NO" << endl;
    }
}