#include<stdio.h>
int main()
{
    int n,p,v,t,i;
    int c=0;

    scanf("%d",&n);

    for(i=1; i<=n; i++){
        scanf("%d %d %d",&p,&v,&t);
        if(p==1 && v==1 && t==1 || p==1 && v==1 || p==1 && t==1 || v==1 && t==1){
            c++;
        }
        else continue;
    }
    printf("%d\n",c);

    return 0;
}
