#include<stdio.h>

int main()
{
    int a[100],i,max,p;
    for(i=0;i<100;i++){
        scanf("%d",&a[i]);
    }
    max = a[0];
    for(i=0;i<100;i++){
        if(max < a[i]){
            max = a[i];
            p=i+1;
        }
    }
    printf("%d\n%d\n",max,p);
    return 0;
}
