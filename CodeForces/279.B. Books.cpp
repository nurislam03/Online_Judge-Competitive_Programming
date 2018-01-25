#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    long long n,t,a,res = 0;
    scanf( "%lld%lld",&n,&t );

    for( int i = 1 ; i <= n ; i++ )
    {
        scanf( "%lld",&a );

        if( a <= t )
        {
            res++;
            t -= a;
        }
    }
    printf( "%lld\n",res );
    return 0;
}
