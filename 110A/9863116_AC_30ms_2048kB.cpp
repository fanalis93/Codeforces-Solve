#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string n;

    cin >> n;

    int c = 0;
    int len = n.size();
    int b=atoi(n.c_str());

    for(int i=0; i<len; i++){
        if(n[i]=='4' || n[i]=='7'){
            c++;
        }
    }
    if(c == 4 || c == 7){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;



    return 0;
}

