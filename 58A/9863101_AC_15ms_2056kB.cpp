#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string w ="hello";
    string s;
    cin >> s;
    int c=0,j=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == w[j])
        {
            j++;
            c++;
        }
    }

    if(c==5)
        cout << "YES" << endl;
    else cout << "NO" << endl;


    return 0;
}