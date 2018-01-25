
#include<stdio.h>

int main()
{
    float a[6];
    int i,count=0;

    for(i=0;i<6;i++){
        scanf("%f",&a[i]);
    }

    for(i=0;i<6;i++){
        if(a[i]>0){
            count++;
        }
    }
    printf("%d valores positivos\n",count);

    return 0;
}
