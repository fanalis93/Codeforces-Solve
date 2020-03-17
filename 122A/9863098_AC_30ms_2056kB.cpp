
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string n;

    cin >> n;

    int c = 0;
    int len = n.size();
    int b=atoi(n.c_str());

    for(int i=0; i<len; i++){
        if(n[i]=='4' || n[i]=='7'){
            c++;
        }
    }
    if(c == len){
        cout << "YES" << endl;
    }
    else if(b%4 == 0 || b%7 == 0 || b%47 == 0){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;


    return 0;
}

