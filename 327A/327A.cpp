#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,cnt=-1,c1=0,c0=0;
    cin >> n;
    while(n--){
        cin >> a;
        if(a==1){
            c1+=1;
            if(c0!=0){
                c0-=1;
            }
        }
        else {
            c0+=1;
            if(c0>cnt){
                cnt = c0;
            }
        }
    }
    cout << c1+cnt << endl;
    return 0;
}