//Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>map1;
    map<string,int>::iterator itr;
    long long int n, total=0;
    cin >> n;
    string s;
    for(int i=0; i<n; i++){
        cin >> s;
        map1[s]++;
    }
    total += map1["Tetrahedron"]*4;
	total += map1["Cube"]*6;
	total += map1["Octahedron"]*8;
	total += map1["Dodecahedron"]*12;
	total += map1["Icosahedron"]*20;
    cout << total << endl;
}