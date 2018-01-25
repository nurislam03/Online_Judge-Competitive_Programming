
#include<stdio.h>

int main()
{
    int n,a=0,b=0;
    scanf("%d",&n);

    while(n>=365){
        n=n-365;
        a=a+1;
    }

    while(n>=30){
        n=n-30;
        b=b+1;
    }

    printf("%d ano(s)\n",a);
    printf("%d mes(es)\n",b);
    printf("%d dia(s)\n",n);


    return 0;

}
