

#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int a,i,p;
    scanf("%d",&a);
    gets(s);
    for(i=0;i<a;i++){
        gets(s);
        p=strlen(s);
        if(p>10){
            printf("%c%d%c\n",s[0],p-2,s[p-1]);
        }
        else
            printf("%s\n",s);
    }
    return 0;
}
