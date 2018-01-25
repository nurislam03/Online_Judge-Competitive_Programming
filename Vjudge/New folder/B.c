#include<stdio.h>

int main()
{
    int t,x,y,z,sum,i;
    scanf("%d",&t);
    for(i=1;t>0;t--,i++){
        scanf("%d%d%d",&x,&y,&z);
        sum=x+y+z;
        printf("Case %d: Sum of %d, %d and %d is %d\n",i,x,y,z,sum);
    }
}
