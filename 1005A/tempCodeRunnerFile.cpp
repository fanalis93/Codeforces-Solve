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
    for(int i=0; i<v1.size(); i++){
        if(v1[i]>=v1[i+1]){
            staiways++;
            v2.push_back(v1[i]);
        }
    }
    cout << staiways << endl;
    for(int i=0; i<v2.size(); i++){
        cout << v2[i] << " ";
    }
    cout << endl;
}