#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
    int T,n;
    scanf("%d",&T);

    for( int t = 1 ; t <= T ; t++ )
    {
        scanf("%d",&n);

        int x,Mile = 0 , Juice = 0;
        for( int i = 1 ; i <= n ; i++ )
        {
            scanf("%d",&x);
            if( x < 30 ) Mile += 10;
            else
            {
                Mile += ( x / 30 ) * 10; Mile += 10;
                //if( x % 30 != 0 ) Mile += 10;
            }

            if( x < 60 ) Juice += 15;
            else
            {
                Juice += ( x / 60 ) * 15; Juice += 15;
                //if( x % 60 != 0 ) Juice += 15;
            }
        }
        if( Mile < Juice ) cout << "Case " << t << ": Mile " << Mile << endl;
        else if( Juice < Mile ) cout << "Case " << t << ": Juice " << Juice << endl;
        else cout << "Case " << t << ": Mile Juice " << Mile << endl;
    }
    return 0;
}
