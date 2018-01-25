#include <iostream>
using namespace std;

int main()
{
    int T,row,column;
    scanf("%d",&T);
    for( int i = 1 ; i <= T ; i++ )
    {
        scanf("%d %d",&row,&column);
        int res = ( row / 3 ) * ( column / 3 );
        printf("%d\n",res);
    }
    return 0;
}
