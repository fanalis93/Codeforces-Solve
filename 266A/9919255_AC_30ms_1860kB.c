#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,c=0;
    char s[50];

    scanf("%d",&n);
    getchar();
    scanf("%s",s);

    for(i=0; i<n; i++){
        if(s[i] == s[i+1]){
            c++;
        }
    }
    printf("%d\n",c);


    return 0;
}
