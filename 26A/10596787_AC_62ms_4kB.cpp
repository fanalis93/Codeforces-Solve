#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int isprime(int x)
{
    int root, i;
    if(x<2) return 0;
    if(x==2) return 1;
    if(x%2 == 0) return 0;
    root = sqrt(x);
    for(i=3; i<=root; i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int t;


    cin >> t;
    int ap=0;

    for(int i=1; i<=t; i++)
    {
        int c= 0;
        for(int j=1; j<=i/2; j++)
        {
            if((i%j == 0) && isprime(j))
            {
                c++;
            }
        }
        if(c==2)
        {
            ap++;
        }
    }
    cout << ap << endl;



    return 0;
}
