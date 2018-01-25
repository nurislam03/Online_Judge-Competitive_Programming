
#include<stdio.h>
int main()
{
    int a,i,m,count=0;
    scanf("%d%d",&a,&m);
    int ara[a];


    for(i=0;i<a;i++){
        scanf("%d",&ara[i]);
    }
    for(i=0;i<a;i++){
        if(ara[i]>=ara[m-1] && ara[i]>0){
            count++;
        }
    }

    printf("%d\n",count);
    return 0;
}
