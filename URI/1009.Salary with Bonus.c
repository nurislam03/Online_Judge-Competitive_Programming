#include<stdio.h>

int main()
{
    char n[100];
    scanf("%s",&n);

    double salary,sold,total;
    scanf("%lf%lf",&salary,&sold);
    total=((sold/100)*15)+salary;
    printf("TOTAL = R$ %.2lf\n",total);

    return 0;
}
