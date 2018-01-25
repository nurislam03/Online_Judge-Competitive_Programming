#include <iostream>
using namespace std;

int main()
{
    int n,x,t = 0;

    while( scanf("%d",&n) )
    {
        if( n == 0 ) break;
        int Count = 0;
        for( int i = 1 ; i <= n ; i++ )
        {
            scanf("%d",&x);
            if( x == 0 ) Count++;
        }
        int res = ( n - Count ) - Count;
        cout << "Case " << ++t << ": " << res << endl;
    }

    return 0;
}
