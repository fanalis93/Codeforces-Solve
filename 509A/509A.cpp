#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int max=1;
    cin >> n;
    /* Dynmaic array allocation
    int** arr = new int*[n]; 
    for(int i=0; i<n; i++){
        arr[i] = new int[n];
    }*/
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            arr[i][j] = 1;
        }
    }
    int sum=0;
    for(int i=1; i<n; i++){
        int sum=0;
        for(int j=1; j<n; j++){
            sum = arr[i][j-1]+arr[i-1][j];
            arr[i][j] = sum;
            if(sum > max)
                max = sum;
        }
    }
    cout << max << endl;

    return 0;
}