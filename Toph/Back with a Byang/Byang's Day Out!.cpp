#include <iostream>
using namespace std;

int main()
{
    int t,a,b,c;
    scanf("%d",&t );

    for( int i = 1 ; i <= t ; i++ )
    {
        scanf("%d%d%d",&a,&b,&c );

        if( a <= b+c && b <= a+c && c <= a+b )
        {
            printf("Yes\n");
        }
        else printf("No\n");
    }
    return 0;
}
