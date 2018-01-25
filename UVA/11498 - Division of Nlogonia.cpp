#include <iostream>
using namespace std;

int main()
{
    int k,X,Y,x1,y1;
    while(1)
    {
        scanf("%d",&k);
        if( k == 0 ) break;

        scanf("%d %d",&X,&Y);
        for( int i = 1 ; i <= k ; i++ )
        {
            scanf("%d %d",&x1,&y1);
            if( X == x1 || Y == y1 ) cout << "divisa" << endl;
            else
            {
                if( x1 > X && y1 > Y ) printf("NE\n");
                else if( x1 > X && y1 < Y ) printf("SE\n");
                else if( x1 < X && y1 > Y ) printf("NO\n");
                else printf("SO\n");
            }
        }
    }
    return 0;
}
