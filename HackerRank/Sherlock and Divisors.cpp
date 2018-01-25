#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>

using namespace std;

#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)
#define all(ar) ar.begin(), ar.end()


long long Divisiors( long long n )
{
    long long cntt = 0;
    for( int i = 1 ; i*i <= n ; i++ )
    {
        if( n % i == 0 )
        {
            if(i % 2 == 0) cntt++;
            int k = n / i ;
            if( i != k && (k % 2 == 0)) cntt++;
        }
    }
    return cntt;
}

int main()
{
    long long n,T;
    scanf("%lld",&T);

    while(T--)
    {
        scanf("%lld",&n);
        long long cnt = 0;
        long long ans = Divisiors(n);
        printf("%lld\n",ans);
    }

    return 0;
}
