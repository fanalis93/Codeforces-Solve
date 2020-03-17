#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,len;
    char ch[100];
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        scanf("%s",ch);
        len = (int)strlen(ch);
        if(len>10){
            printf("%c%d%c\n",ch[0],len-2,ch[len-1]);
        }
        else printf("%s\n",ch);
    }

    return 0;
}
