#include<stdio.h>

int main()
{
    int n,x,y,i,temp,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&x,&y);
        if(x>y){
            temp = x;
            x = y;
            y = temp;
        }
        for(i=x+1;i<y;i++){
            if(i%2 != 0){
                sum = sum+i;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
