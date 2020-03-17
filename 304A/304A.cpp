#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,a,b,c;
    cin >>  n;
    long long pith=0,res=0;
    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            res = int(sqrt(i*i + j*j));
            c = res;
            if(res*res == i*i + j*j && i<=res && j<=res && res<=n)
                pith++;
        }
    }
    cout << pith << endl;
}