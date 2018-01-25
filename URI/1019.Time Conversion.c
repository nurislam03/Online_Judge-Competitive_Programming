#include<stdio.h>

int main()
{
    int n,a=0,b=0;
    scanf("%d",&n);

    while(n>=3600){
        n=n-3600;
        a=a+1;
    }

    while(n>=60){
        n=n-60;
        b=b+1;
    }

    printf("%d:%d:%d\n",a,b,n);

    return 0;

}
