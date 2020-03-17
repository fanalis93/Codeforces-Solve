#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,b;
    vector<int>bear;
    cin >> n;
    while(n--){
        cin >> b;
        bear.push_back(b);
    }
    int limak = bear[0];
    int steal=0;
    bear.erase(bear.begin());
    sort(bear.begin(),bear.end());
    int k=0;
    while(bear[k]>=limak){
        limak++;
        steal++;
        bear[k]--;
        sort(bear.begin(),bear.end());
    }
    cout << steal << endl;
}