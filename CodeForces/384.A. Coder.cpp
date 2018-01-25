#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n,res;
    cin >> n;

    if( n % 2 == 0 ) res = n * ( n / 2 );
    else
    {
        int k = ( n / 2 );
        res = ( k * k );
        res += ( k + 1 ) * ( k + 1 );
    }

    cout << res << endl;
    for( int i = 0 ; i < n ; i++ )
    {
        for( int j = 0 ; j < n ; j++ )
        {
            if( i % 2 == 0 )
            {
                if( j % 2 == 0 ) printf("C");
                else printf(".");
            }
            else
            {
                if( j % 2 == 0 ) printf(".");
                else printf("C");
            }
        }
        printf("\n");
    }
    return 0;
}
