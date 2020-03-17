#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;
bool isPalindromeRec(string s,int i,int n){
    if(n==1)
        return true;
    else{
        if(s[i]!=s[n])
            return false;
        if(i < n+1)
            return isPalindromeRec(s,i+1,n-1);
    }
    return true;
}
bool isPalindrome(string s){
    int n = s.size();
    if(n==0){
        return true;
    }
    return isPalindromeRec(s,0,n-1);
}

int main(){
    string s;
    cin >> s;
    for(int i=0; i<=s.size(); i++){
        for(char c='a'; c<='z'; c++){
            string temp = s;
            temp.insert(i,1,c);
            if(isPalindrome(temp))
                cout << temp << endl;
                return 0;
        }
    }
    cout << "NA" << endl;
    return 0;
}