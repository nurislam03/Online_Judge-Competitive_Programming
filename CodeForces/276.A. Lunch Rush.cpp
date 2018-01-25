#include <iostream>
using namespace std;

int main()
{
    int n;
    long long k,f,t,Max = -10000000000,Joy;
    scanf( "%d%I64d",&n,&k );
    
    for( int i = 1 ; i <= n ; i++ )
    {
        scanf( "%I64d%I64d",&f,&t );
        
        if( t > k )
        {
            Joy = f - ( t - k );
            if( Joy >= Max ) Max = Joy;
        }
        else
        {
            if( f >= Max ) Max = f;
        }
    }
    printf( "%I64d\n",Max );
    return 0;
}