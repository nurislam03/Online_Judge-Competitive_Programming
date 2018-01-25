#include <iostream>
#include <cstring>
using namespace std;
int dp[4][4010];
int Coin[4];

int DynamicProgramming( int index , int amount )
{
    if( amount == 0 ) return 0;
    if( index > 2 ) return -1000000000;
    if( dp[index][amount] != -1 ) return dp[index][amount];

    int x = 0, y = 0, res = -100000000;
    if( amount - Coin[index] >= 0 )
    {
         x = DynamicProgramming(index , amount - Coin[index] ) + 1;
         y = DynamicProgramming(index+1 , amount );
         res = max( res, max(x,y) );
    }
    else
    {
        y = DynamicProgramming(index+1 , amount );
        res = y;
    }

    dp[index][amount] = res;
    return res;
}


int main()
{
    memset(dp , -1 , sizeof(dp) );
    int n;
    cin >> n >> Coin[0] >> Coin[1] >> Coin[2];

    int res = DynamicProgramming( 0 , n );
    cout << res << endl;
    return 0;
}
