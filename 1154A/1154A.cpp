//Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int n;
    int x1,x2,x3,x4;
    /*cin >> x1 >> x2 >> x3 >> x4;
    if(x1>x2 && x1>x3 && x1>x4)
        cout << */
    for(int i=0; i<4; i++){
        cin >> n;
        v.push_back(n);
    }
    sort(v.begin(),v.end());
    cout << v[3]-v[0] << " " << v[3]-v[1] << " " << v[3]-v[2] << endl;
}