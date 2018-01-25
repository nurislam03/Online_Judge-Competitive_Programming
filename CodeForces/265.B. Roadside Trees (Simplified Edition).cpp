#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n,x,PreviousTree = 0,res = 0 ;
    cin >> n ;
    
    scanf("%I64d",&x);
    res += x + 1;
    PreviousTree = x;
    
    for( int i = 2 ; i <= n ; i++ )
    {
        scanf("%I64d",&x);
        if( x > PreviousTree ) res += 1 + ( x - PreviousTree )  + 1 ;
        // Jump + Walk Up + Eat
        else
        {
            res += PreviousTree - x ; // Down
            res += 2 ; // Jump + Eat
        }
        
        PreviousTree = x;
    }
    cout << res << endl;
    return 0;
}