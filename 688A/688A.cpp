#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d,wincount=0,maxi=0;
    
    cin >> n >> d;
    for(int i=0; i<d; i++){
        string s;
        cin >> s;
        bool win=false;
        for(int j=0; j<n; j++){
            if(s[j]=='0'){
                win = true;
            }
        }
        if(win){
            wincount++;
            maxi = max(maxi,wincount);
        }
        else wincount=0;
        
    }
    cout << maxi << endl;
}