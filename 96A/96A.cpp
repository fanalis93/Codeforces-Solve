#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char p[101];
    int c0 = 0, c1 = 0;

    cin >> p;
    int l = strlen(p);

    for (int i = 0; i < l; i++)
    {
        if (p[i] == '0')
        {
            c0++;
            c1 = 0;
        }
        if (p[i] == '1')
        {
            c1++;
            c0 = 0;
        }
        if (c1 >= 7 || c0 >= 7)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}