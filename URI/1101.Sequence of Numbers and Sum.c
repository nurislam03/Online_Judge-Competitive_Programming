
#include<stdio.h>

int main()
{
    int x,y,i,temp,sum=0;
    scanf("%d%d",&x,&y);
    if(x>0 && y>0){
    if(x>y){
        temp = x;
        x = y;
        y = temp;
    }
    for(i=x;i<=y;i++){
        sum = sum+i;
        printf("%d ",i);
    }
    printf("Sum=%d\n",sum);
    }
    return 0;
}
