#include<bits/stdc++.h>
using namespace std;
int main()
{
    char w[100];

    cin >> w;

    int len = strlen(w);

    sort(w,w+len);

    int i,c=0;

    for(i=0; i<len; i++){
        if(w[i] != w[i+1])
            c++;
    }
    if(c%2==0)
        cout << "CHAT WITH HER!" << endl;

    else
        cout << "IGNORE HIM!" << endl;

}