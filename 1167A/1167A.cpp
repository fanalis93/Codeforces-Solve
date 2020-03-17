//Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n;
    while(n--){
        int x;
        cin >> x >> s;
        int pos=x;
        for(int i=0; i<x; i++){
            if(s[i]=='8'){
                pos=i;
                break;
            }
        }
        if(x-pos>=11)
            cout << "Yes\n";
        else 
            cout << "No\n";
    }
}