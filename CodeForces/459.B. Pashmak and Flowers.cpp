#include <iostream>
using namespace std;
#define LL long long


LL nCr(LL n, LL r)
{

    r = min(r, n-r);
    LL res = 1;

    for(int i = 1; i <= r; i++)
    {
        res = (res * n) / i;
        n--;
    }
    return res;
}

int main()
{
    LL n,x,Min = 10000000000,Max = -100000000,MinCnt = 0,MaxCnt = 0;
    scanf("%lld",&n);

    for(int i = 1; i <= n ; i++)
    {
        scanf("%lld",&x);
        if(x < Min)
        {
            MinCnt = 0;
            Min = x;
        }
        if( x == Min) MinCnt ++;

        if( x > Max )
        {
            MaxCnt = 0;
            Max = x;
        }
        if(x == Max ) MaxCnt++;

    }

    if( Max == Min)
    {

        LL r = nCr(n,2);
        printf("0 %lld\n",r);
        return 0;
    }

    LL res = MaxCnt * MinCnt;
    LL diff = abs(Max - Min);
    printf("%lld %lld\n",diff,res);

    return 0;
}
