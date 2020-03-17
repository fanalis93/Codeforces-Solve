#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;
    string s4=s1+s2;
    sort(s3.begin(), s3.end()); 
    sort(s4.begin(), s4.end()); 
    int c=0;
    for(int i=0; i<s3.size(); i++){
        if(s4[i]==s3[i]){
            c++;
        }
        else {
            cout << "NO\n";
            return 0;
        }
    }
    if(c==s3.size() && s3.size()==s4.size())
        cout << "YES\n";
    else cout << "NO\n";

    return 0;
}