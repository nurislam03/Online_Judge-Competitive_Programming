
#include<stdio.h>

int main()
{
    float n,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0;
    scanf("%f",&n);
    printf("NOTAS:\n");

    while(n>=100.00){
        n=n-100.00;
        a=a+1;
    }
    printf("%.0f nota(s) de R$ 100.00\n",a);

    while(n>=50.00){
        n=n-50.00;
        b=b+1;
    }
    printf("%.0f nota(s) de R$ 50.00\n",b);

    while(n>=20.00){
        n=n-20.00;
        c=c+1;
    }
    printf("%.0f nota(s) de R$ 20.00\n",c);

    while(n>=10.00){
        n=n-10.00;
        d=d+1;
    }
    printf("%.0f nota(s) de R$ 10.00\n",d);

    while(n>=5.00){
        n=n-5.00;
        e=e+1;
    }
    printf("%.0f nota(s) de R$ 5.00\n",e);

    while(n>=2.00){
        n=n-2.00;
        f=f+1;
    }
    printf("%.0f nota(s) de R$ 2.00\n",f);


    printf("MOEDAS:\n");

    while(n>=1.00){
        n=n-1.00;
        g=g+1;
    }
    printf("%.0f moeda(s) de R$ 1.00\n",g);

    while(n>=0.50){
        n=n-0.50;
        h=h+1;
    }
    printf("%.0f moeda(s) de R$ 0.50\n",h);

    while(n>=0.25){
        n=n-0.25;
        i=i+1;
    }
    printf("%.0f moeda(s) de R$ 0.25\n",i);

    while(n>=0.10){
        n=n-0.10;
        j=j+1;
    }
    printf("%.0f moeda(s) de R$ 0.10\n",j);

    while(n>=0.05){
        n=n-0.05;
        k=k+1;
    }
    printf("%.0f moeda(s) de R$ 0.05\n",k);

    while(n>=0.01){
        n=n-0.01;
        l=l+1;

    }
    printf("%.0f moeda(s) de R$ 0.01\n",l);



    return 0;
}

