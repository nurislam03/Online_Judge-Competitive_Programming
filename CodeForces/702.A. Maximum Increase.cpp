#include <iostream>
using namespace std;

int main()
{
    int n,res = 0,Count = 1;
    int x[100000+10];

    scanf( "%d",&n );
    scanf("%d",&x[0]);

    for( int i = 1 ; i < n ; i++ )
    {
        scanf("%d",&x[i]);
        if(x[i] > x[i-1]) Count++;
        else Count = 1;

        if( Count > res ) res = Count;
    }
    cout << res << endl;
    return 0;
}
