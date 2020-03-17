#include<bits/stdc++.h>
#include<set>
#include<string>

using namespace std;
int main()
{
    int n;
    set <char> st;
    cin >> n;
    string s;
    cin >> s;

    s.erase(unique(s.begin(), s.end()), s.end());

    cout << n-s.size() << endl;


    return 0;
}
