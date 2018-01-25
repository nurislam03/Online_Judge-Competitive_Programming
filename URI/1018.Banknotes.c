#include<stdio.h>

int main()
{
    int n,a=0,b=0,c=0,d=0,e=0,f=0,g=0;
    scanf("%d",&n);
    printf("%d\n",n);

    while(n>=100){
        n=n-100;
        a=a+1;
    }
    printf("%d nota(s) de R$ 100,00\n",a);

    while(n>=50){
        n=n-50;
        b=b+1;
    }
    printf("%d nota(s) de R$ 50,00\n",b);

    while(n>=20){
        n=n-20;
        c=c+1;
    }
    printf("%d nota(s) de R$ 20,00\n",c);

    while(n>=10){
        n=n-10;
        d=d+1;
    }
    printf("%d nota(s) de R$ 10,00\n",d);

    while(n>=5){
        n=n-5;
        e=e+1;
    }
    printf("%d nota(s) de R$ 5,00\n",e);

    while(n>=2){
        n=n-2;
        f=f+1;
    }
    printf("%d nota(s) de R$ 2,00\n",f);

    while(n>=1){
        n=n-1;
        g=g+1;
    }
    printf("%d nota(s) de R$ 1,00\n",g);

    return 0;
}
