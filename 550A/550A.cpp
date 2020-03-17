#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    vector<int>v1,v2;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='A' && s[i+1]=='B')
            v1.push_back(i);
        else if(s[i]=='B' && s[i+1]=='A')
            v2.push_back(i);
    }
    bool f = false;
    if(v1.size()>0 && v2.size()>0){
        if(v1[0]+1<v2.back() || v2[0]+1<v1.back())
            f=true;
    }
    if(f)
        cout << "YES\n";
    else cout << "NO\n";
}