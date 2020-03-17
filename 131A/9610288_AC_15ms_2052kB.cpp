#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int c=1;

    for(int i=1; i< s.size(); i++)
    {
        if(islower(s[i]))
        {
            c=0;
            break;
        }
    }
    if(c==1)
    {
        for(int j=0; j<s.size(); j++)
        {
            if(islower(s[j]))
                s[j] = toupper(s[j]);

            else
                s[j] = tolower(s[j]);
        }
        cout << s << endl;
    }
    else cout << s << endl;
}
