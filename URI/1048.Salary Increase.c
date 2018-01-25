
#include<stdio.h>
float extra(float a,int b)
{
    float s;
    s=(a*b)/100;
    return s;
}

float main()
{
    float a,check;
    scanf("%f",&a);

    if(a>=0 && a<=400.00){
        check=extra(a,15);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",a+check,check);
    }
    if(a>=400.01 && a<=800.00){
        check=extra(a,12);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",a+check,check);
    }
    if(a>=800.01 && a<=1200.00){
        check=extra(a,10);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",a+check,check);
    }
    if(a>=1200.01 && a<=2000.00){
        check=extra(a,7);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",a+check,check);
    }
    if(a>2000.00){
        check=extra(a,4);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",a+check,check);
    }
    return 0;
}
