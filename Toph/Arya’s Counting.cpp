#include <iostream>
using namespace std;
int main()
{
    int t,a,b,c;
    scanf("%d",&t );

    for( int i = 1 ; i <= t ; i++ )
    {
        scanf("%d%d%d",&a,&b,&c );
        if( a > b && a > c ) printf("Case %d: A\n",i);
        else if( b > a && b > c ) printf("Case %d: B\n",i);
        else if( c > a && c > b ) printf("Case %d: C\n",i);
        else  printf("Case %d: Confused\n",i);
    }
    return 0;
}
