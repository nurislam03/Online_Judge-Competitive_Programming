#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
    int x,y;
    while(1)
    {
        scanf("%d %d",&x,&y);
        if( x == -1 ) break;

        int temp1,temp2,res = 1000000;
        if( x == y ) res = 0;
        else if( x < y )
        {
            temp1 = y - x;
            temp2 = ( x + 1 ) + ( 99 - y );
            res = min(temp1,temp2);
        }
        else
        {
            temp1 = x - y;
            temp2 = ( 99 - x ) + ( y + 1 );
            res = min(temp1,temp2);
        }
        cout << res << endl;
    }
    return 0;
}
