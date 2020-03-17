#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main()
{
    int n,i,a;
    vector <int> v,v1;

    cin >> n;

    for(i=0; i<n; i++){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(i=0; i<n; i++){
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
