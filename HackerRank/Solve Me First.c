#include<stdio.h>
int main()
{
    int a,b,sum;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>=1 && b<=1000){
        sum=a+b;
        printf("%d",sum);
    }
    return 0;
}
