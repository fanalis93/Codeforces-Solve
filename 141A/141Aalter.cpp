#include<bits/stdc++.h>
using namespace std;
string check(map<char,int>a, map<char,int>b){

}
int main(){
    map<char,int>map1,map2,map3;
    map<char,int>::iterator itr;
    map<char,int>::iterator itr2,gg;
    string s1,s2,combi;
    cin >> s1 >> s2 >> combi;
    for(int i=0; i<s1.size(); i++){
        map1[s1[i]]++;
    }
    for(int i=0; i<s2.size(); i++){
        map2[s2[i]]++;
    }
    // ADD two maps
    for(auto gg=map2.begin(); gg!=map2.end(); gg++)
        map1[gg->first] += gg->second;
    for(int i=0; i<combi.size(); i++)
        map3[combi[i]]++;
    if(combi.size() != s1.size()+s2.size())
        cout << "NO\n";
    else
    {
        check(map1,combi);
    }
    
}