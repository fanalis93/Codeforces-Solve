#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    for (int i = 0; i <= str.size(); i++)
    {
        for (char c = 'a'; c <= 'z'; c++)
        {
            string temp = str;
            temp.insert(i, 1, c);
            string rev = temp;
            reverse(rev.begin(), rev.end());
            if (temp == rev)
            {
                cout << temp << endl;
                return 0;
            }
        }
    }
    cout << "NA" << endl;
    return 0;
}