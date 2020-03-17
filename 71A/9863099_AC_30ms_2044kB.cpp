#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,len;
    char c[1000];

    cin >> n;

    while(n--){
        cin >> c;
        len = strlen(c);
        if(len > 10){
            cout << c[0] << len-2 << c[len-1] << endl;
        }
        else cout << c << endl;
    }

    return 0;
}