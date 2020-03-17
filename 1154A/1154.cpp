#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int x;
    for(int i=0; i<4; i++){
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    cout << v[3]-v[0] << " " << v[3]-v[2] << " " << v[3]-v[1] << endl;

}
