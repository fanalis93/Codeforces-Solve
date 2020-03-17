#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    int staiways=0;
    vector<int>v1,v2;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        v1.push_back(x);
    }
    v1.push_back(1);
    for(int i=1; i<v1.size(); i++){
        if(v1[i]==1){
            v2.push_back(v1[i-1]);
        }
    }
    cout << v2.size() << endl;
    for(int i=0; i<v2.size(); i++){
        cout << v2[i] << " ";
    }
    //cout << endl;
}