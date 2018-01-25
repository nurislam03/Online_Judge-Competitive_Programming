
#include<stdio.h>

int main()
{
    int a,i,j,num=0,count=0;
    int ara[1000][3];
    scanf("%d",&a);

    for(i=0;i<a;i++){
        for(j=0;j<3;j++){
            scanf("%d",&ara[i][j]);
        }
    }

    for(i=0;i<a;i++){
        for(j=0,count=0;j<3;j++){
            if(ara[i][j]==1){
                count++;
            }
        }
        if(count>=2){
            num++;
        }
    }
    printf("%d\n",num);

    return 0;
}
