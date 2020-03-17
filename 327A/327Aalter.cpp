#include<bits/stdc++.h>
using namespace std;
int a[105];
int main(){
    int a[105];
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i];
    int cnt=0,ans=0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            cnt = 0;
            for(int k=0; k<n; k++){
                if(k>=i && k<=j){
                    if(a[k]==0){
                        cnt++;
                    }
                }
                else 
                    cnt += a[k];
            }
            ans = max(ans,cnt);
        }
    }
    cout << ans << endl;
}