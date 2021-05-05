#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    int lower = 0, upper = 0;
    cin >> s;
    for (int i = 0; i < strlen(s); i++)
    {
        if (isupper(s[i]))
            upper++;
        else if (islower(s[i]))
            lower++;
    }
    if (lower < upper)
    {
        for (int i = 0; i < strlen(s); i++)
            s[i] = toupper(s[i]);
    }
    else if (lower > upper)
    {
        for (int i = 0; i < strlen(s); i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    else if (lower == upper)
    {
        for (int i = 0; i < strlen(s); i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    cout << s << endl;

    return 0;
}