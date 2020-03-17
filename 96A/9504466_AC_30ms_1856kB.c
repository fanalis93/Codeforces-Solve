#include<stdio.h>
#include<string.h>

int main()
{
    char n[100];
    int i,a=0,b=0;
    int len;

    scanf("%s",&n);
    len = strlen(n);

    for(i=0; i<len; i++){
        if(n[i] == '1'){
            a++;
            b=0;
        }
        else if(n[i]== '0'){
            b++;
            a=0;
        }
        if(a>=7 || b>=7)
            break;
    }
    if(a>=7 || b>=7){
        printf("YES\n");
    }
    else printf("NO\n");


    return 0;
}
