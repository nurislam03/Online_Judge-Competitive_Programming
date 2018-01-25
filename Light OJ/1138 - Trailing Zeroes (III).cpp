#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int TrailingZeroes( int n )
{
    int res = 0;
    while( n )
    {
        res += n / 5;
        n /= 5;
    }
    return res;
}

int BinarySearch( int Min, int Max, int Target )
{
    int Mid,res = 0;
    while( Min <= Max )
    {
        Mid = ( Min + Max ) / 2 ;
        int NumOfZeros = TrailingZeroes(Mid);
        if( NumOfZeros >= Target )
        {
            if( NumOfZeros == Target ) res = Mid;
            Max = Mid - 1;
        }
        else Min = Mid + 1;
    }
    return res;
}

int main()
{
    int tt,x,res;
    scanf("%d",&tt);

    for( int i = 1 ; i <= tt ; i++ )
    {
        scanf("%d",&x);
        res = BinarySearch( 1, 100000000, x );
        if( res == 0 ) printf( "Case %d: impossible\n",i );
        else printf( "Case %d: %d\n",i,res );
    }
    return 0;
}
