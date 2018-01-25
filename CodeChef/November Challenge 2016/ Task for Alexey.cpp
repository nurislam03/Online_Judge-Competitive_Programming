#include <iostream>
#include <cstdio>
#include <cstring>
#include <map>
#include <algorithm>


using namespace std;
#define LL long long
#define ULL unsigned long long
LL ara[500+10];

ULL gcd(ULL a, ULL b)
{
    if( b == 0 ) return a;
    return gcd(b, a % b);
}


// LCM
ULL lcm(ULL a, ULL b)
{
    return ( ( a / gcd(a,b) ) * b );
}


int main()
{
    int tc;
    scanf("%d",&tc);

    for(int t = 1; t <= tc; t++)
    {
        LL n,x;
        LL ans = 1000000000000000000;
        memset(ara, 0, sizeof(ara));
        scanf("%lld",&n);

        for(int i = 0; i < n; i++)
        {
            scanf("%lld",&x);
            ara[i] = x;
        }

        for(int i = 0; i < n; i++)
        {
            for(int k = i+1; k < n; k++)
            {
                x = lcm(ara[i], ara[k]);
                ans = min(ans, x);
            }
        }

        printf("%lld\n",ans);

    }
    return 0;
}
