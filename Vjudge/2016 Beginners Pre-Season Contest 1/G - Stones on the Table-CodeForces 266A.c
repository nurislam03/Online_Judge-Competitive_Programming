
#include<stdio.h>
#include<string.h>

int main()
{
    int count=0,i,o;
    scanf("%d",&o);
    char a[52];
    gets(a);

    gets(a);
    for(i=0;i<strlen(a)-1;i++){
        if(a[i]==a[i+1]){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
