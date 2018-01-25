#include<stdio.h>
int wt(int n)
{
    return (n*(n+1)/2);
}

int main(void)
{

    int a=0,n,i;

    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a+=i*wt(i+1);
    }

    printf("%d",a);

    return 0;
}
