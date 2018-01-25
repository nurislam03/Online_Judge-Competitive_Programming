#include<stdio.h>

int Fibonacci(int n)
{
    if(n == 0) return 0;
    else if(n == 1) return 1;
    else return Fibonacci(n-1) + Fibonacci(n-2);
}

int main()
{
    int result,n;
    scanf("%d",&n);
    result = Fibonacci(n);
    printf("%d",result);

    return 0;
}
