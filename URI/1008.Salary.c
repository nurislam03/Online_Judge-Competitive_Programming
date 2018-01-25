#include<stdio.h>

int main()
{
    int n,h;
    float a,salary;

    scanf("%d%d%f",&n,&h,&a);

    printf("NUMBER = %d\n",n);

    salary=h*a;
    printf("SALARY = U$ %.2f\n",salary);

    return 0;
}
