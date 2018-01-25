#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main()
{
    int N,M;
    while(scanf("%d %d",&N,&M))
    {
        if( N == 0 && M == 0 ) break;

        long long x,res = 0;
        map < long long, int > Map;

        for( int i = 1 ; i <= N ; i++ )
        {
            scanf("%lld",&x);
            Map[x]++;
        }

        for( int i = 1 ; i <= M ; i++ )
        {
            scanf("%lld",&x);
            if( Map[x] )
            {
                res++;
                Map[x]--;
            }
        }
        cout << res << endl;
    }
    return 0;
}
