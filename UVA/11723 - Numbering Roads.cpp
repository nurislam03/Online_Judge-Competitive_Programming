#include <iostream>
using namespace std;

int main()
{
    int x,y,t = 0;
    while( scanf("%d %d",&x,&y))
    {
        if( x == 0 && y == 0 ) break;
        if( x <= y ) cout << "Case " << ++t << ": 0" << endl;
        else
        {
            int temp = ( x - y );
            if( temp > (y * 26) ) cout << "Case " << ++t << ": impossible" << endl;
            else
            {
                int prefix = temp / y;
                if( temp % y != 0 ) prefix++;
                cout << "Case " << ++t << ": " << prefix << endl;
            }
        }
    }
    return 0;
}
