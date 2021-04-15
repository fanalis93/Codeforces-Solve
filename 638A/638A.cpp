#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin >> t;
    while(t--){
        int arr[30];
        vector<int>v3;
        cin >> n;
        for(int i=1; i<=n; i++){
            arr[i-1]=pow(2,i);
        }
        for(int i=0; i<n; i++){
            v3.push_back(arr[i]);
        }
        vector <int> v1,v2;
        v1.push_back(arr[0]);
        v3.pop_front();
        int x=1;
        if(x!=n/2){
            int ran = 1+rand()%3;
            v1.push_back(arr[ran]);
            x++;
            v3.erase(v3.begin() + ran-1);
        }
        for(int i=0; i<v1.size(); i++)
            cout << v1[i] << " ";
        cout << endl;
        for(int i=0; i<v3.size(); i++)
            cout << v3[i] << " ";
        cout << endl;
    }
}