#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int first=0,sec=1,temp=1;
    if(n==0){
        cout << 0 << " " << 0 << " " << 0 << endl;
        return 0;
    }
    while(n!=temp){
        first = sec;
        sec = temp;
        temp = first + sec;
    }
    cout << 0 << " " << first << " " << sec << endl;
    return 0;
}