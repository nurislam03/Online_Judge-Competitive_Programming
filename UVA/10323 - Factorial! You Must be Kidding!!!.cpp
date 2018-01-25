
#include<cstdio>

using namespace std;
long long Fact[20];

void Factorial()
{
    Fact[7] = 5040;
    for (int i=8; i<=13; i++)
        Fact[i] = Fact[i-1]*i;
}


int main()
{
    int n;
    Factorial();

    while(scanf("%d",&n) != EOF)
    {
        if((n>=0 && n<=7) || (n<0 && n%2==0))
            printf("Underflow!\n");
        else if(n >= 8 && n <= 13)
            printf("%lld\n",Fact[n]);
        else printf("Overflow!\n");
    }

    return 0;
}
