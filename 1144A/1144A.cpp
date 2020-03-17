//Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n;
    while(n--){
        int c=1;
        cin >> s;
        sort(s.begin(),s.end());
        for(int i=1; i<s.length(); i++){
            if(s[i]-s[i-1]!=1){
                c=0;
                break;
            }
        }
        if(c==1)
            cout << "Yes" << endl;
        else 
            cout <<  "No" << endl;
    }
}