#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a;
    vector<int>v1,v2;
    int b=0,c=0;
    int sum=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        if(a>=0)
            sum += a;
        else sum -= a;
    }
    cout << sum << endl;
}