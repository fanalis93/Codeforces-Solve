#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    vector<int>v1,v2;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        v1.push_back(x);
    }
    //sort(v1.begin(),v1.end());
    for(int i=0; i<v1.size(); i++){
        for(int j=0; j<v1.size(); j++){
            for(int k=0; k<v1.size(); k++){
                if(i!=j && j!=k && k!=i){
                    if(v1[k] == v1[i]+v1[j])
                    {
                        cout << k+1 << " " << j+1 << " " << i+1 << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "-1" << endl;
}