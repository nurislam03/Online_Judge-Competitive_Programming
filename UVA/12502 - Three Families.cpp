#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int T,x,y,z;
    scanf("%d",&T);

    for( int i = 1 ; i <= T ; i++ )
    {
        scanf("%d %d %d",&x,&y,&z);
        int A = 2 * x * z;
        int B = y * z;
        printf("%d\n",(A-B)/(x+y));

    }
    return 0;
}
