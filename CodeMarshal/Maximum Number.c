#include<stdio.h>

int main()
{
    int a,b,c,i,j;

    scanf("%d",&i);
    for(j=1;j<=i;j++){
        scanf("%d%d%d",&a,&b,&c);

        if(a>b && a>c){
           printf("Case %d: %d",j,a);
        }
        else if(b>c){
            printf("Case %d: %d",j,b);
        }
        else
            printf("Case %d: %d",j,c);
    }
    return 0;
}

