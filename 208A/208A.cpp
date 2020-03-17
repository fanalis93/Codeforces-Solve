#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1;
    string str2;
    bool index=0;
    cin >> str1;

    for(int i=0; i<str1.size(); i++){
        if(str1[i]=='W' && str1[i+1]=='U' && str1[i+2]=='B')
            {
                i+=2;
                if(index==1){
                    cout << " ";
                }
            }
        else {
                index=1;
            cout << str1[i];
        }
    }

    return 0;
}
