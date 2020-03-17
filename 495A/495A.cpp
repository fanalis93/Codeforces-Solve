#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    int arr[11] = {2,7,2,3,3,4,2,5,1,2};
    cin >> a;
    int x,y;
    x = a/10;
    y = a%10;
    cout << arr[x]*arr[y] << endl;
}
