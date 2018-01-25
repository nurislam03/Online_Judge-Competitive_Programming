// URI online judge : 1010.Simple Calculator:

#include<stdio.h>

int main()
{
    int c,c1,p,p1;
    float t,t1,value;


    scanf("%d%d%f",&c,&p,&t);
    scanf("%d%d%f",&c1,&p1,&t1);


    value=((p*t)+(p1*t1));
    printf("VALOR A PAGAR: R$ %.2f\n",value);

    return 0;
}
