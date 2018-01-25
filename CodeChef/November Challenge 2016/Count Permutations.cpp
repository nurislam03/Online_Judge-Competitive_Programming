#include <iostream>
#include <cstdio>

using namespace std;
#define ULL unsigned long long
#define LL long long
#define mod 1000000007



LL BigMod(ULL B, ULL P, ULL M)
{
    if( P == 0 ) return 1;
    if( P == 1 ) return B % M;

    ULL halfans = BigMod(B ,P/2, M);

    if((P % 2) == 0 )
        return (halfans * halfans) % M;

    return
        (halfans * halfans * BigMod(B ,1 ,M) % M) % M;
}


int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        LL n;
        scanf("%lld",&n);
        if(n <= 2)
        {
            printf("0\n");
            continue;
        }

        LL ans = BigMod(2, n-2, mod);
        ans = (ans + (ans-2)) % mod;

        printf("%lld\n",ans);
    }
    return 0;
}
