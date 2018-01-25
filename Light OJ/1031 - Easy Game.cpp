#include <iostream>
#include <cmath>
using namespace std;
int ara[100+10];
int dp[100][100];



int Dp( int First , int Last )
{

    //if( First > Last ) return 0;
    if( First == Last ) return ara[Last];
    if( dp[First][Last] != -1 ) return dp[First][Last];
    else return  dp[First][Last] =  Dp( First+1 , Last );

}


int main()
{
    int tt,n,res = 0;
    cin >> tt;

    for( int t = 1 ; t <= tt ; t++ )
    {
        scanf("%d",&n);
        //ara[0] = 0;
        for( int i = 0 ; i < n ; i++ )
        {
            scanf("%d",&ara[i]);
        }

        memset( dp, -1, sizeof(dp) );
        int sum = 0;// First player takes.

        for( int i = 0 ; i < n ; i++ )
        {
            sum += ara[i];
            int PlayerB = Dp( i+1 , n-1 );

            int PlayerA = sum - PlayerB;
            //int Profit = max(PlayerA,PlayerB);
            if( PlayerA >= res ) res = PlayerA;
        }
        cout << "Case " << t << ": " << res << endl;
    }
    return 0;
}
