#include<bits/stdc++.h>
using namespace std;
int arr[100001];
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int len=1,ans=1;
    for(int i=1; i<n; i++){
        if(arr[i]>arr[i-1]){
            len++;
            
        }
        else len=1;

        ans = max(ans,len);
    }
    cout << ans << endl;
}