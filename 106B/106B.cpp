#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int speed[101],ram[101],hdd[101],cost[101],index=0,mini=1001;
    bool var[101];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> speed[i] >> ram[i] >> hdd[i] >> cost[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(speed[i]<speed[j] && ram[i]<ram[j] && hdd[i]<hdd[j]){
                var[i] = true;
            }
        }
    }
    for(int i=0; i<n; i++){
        if(var[i]==false){
            mini = max(mini,cost[i]);
            index = i+1;
        }
    }
    cout << index << endl;
}
