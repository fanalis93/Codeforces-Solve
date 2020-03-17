#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    set <char> st;
    string s1,s2;
    cin >> n;

    cin >> s1;
    int len = s1.size();

    for(int i=0; i<len; i++)
    {
        s2 += tolower(s1[i]);
    }
    for(int i=0; i<len; i++)
    {
        st.insert(s2[i]);
    }
    if(st.size() >=26)
        cout << "YES" << endl;
    else cout <<"NO"<< endl;
}
