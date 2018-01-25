#include "iostream"
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

int n,m;
int Boys[100+10];
int Girls[100+10];
int dp[110][110];

int DynamicProgramming( int BoysIndex, int GirlsIndex )
{
    if( BoysIndex >= n || GirlsIndex >= m ) return 0;
    if( dp[BoysIndex][GirlsIndex] != -1 ) return dp[BoysIndex][GirlsIndex];

    int x = 0 , y = 0 , res = 0;
    if( abs( Boys[BoysIndex] - Girls[GirlsIndex] ) <= 1 )
    {
        res = 1 + DynamicProgramming( BoysIndex+1, GirlsIndex+1 );
        x = DynamicProgramming( BoysIndex+1, GirlsIndex );
        y = DynamicProgramming( BoysIndex, GirlsIndex+1 );
        res = max( res , max ( x,y) );
    }
    else
    {
        x = DynamicProgramming( BoysIndex+1, GirlsIndex );
        y = DynamicProgramming( BoysIndex, GirlsIndex+1 );
        res = max( res , max ( x,y) );
    }

    dp[BoysIndex][GirlsIndex] = res;
    return res;
}


int main()
{
    memset( dp , -1 , sizeof(dp) );
    cin >> n;
    for( int i = 0 ; i < n ; i++ ) cin >> Boys[i];

    cin >> m;
    for( int i = 0 ; i < m ; i++ ) cin >> Girls[i];

    sort( Boys , Boys+n );
    sort(Girls , Girls+m );

    int res = DynamicProgramming( 0 , 0 );
    cout << res << endl;

    return 0;
}
