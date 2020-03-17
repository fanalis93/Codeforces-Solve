#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    int even=0,odd=0,indexeven,indexodd;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a;
        if(a%2==0){
            even++;
            indexeven = i;
        }
        else {
            odd++;
            indexodd = i;
        }
    }
    if(even==1)
        cout << indexeven << endl;
    else if(odd==1)
        cout << indexodd << endl;

    return 0;
}
