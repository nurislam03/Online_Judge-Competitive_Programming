#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
using namespace std;
int n,Color[25][5];
int DP[1005][5];

void Init()
{
    for( int i = 0 ; i < n ; i++ )
    {
        for( int j = 0 ; j < 5 ; j++ )
        {
            DP[i][j] = -1;
        }
    }
}


int DynamicProgramming( int currHouse , int lastColor )
{
    //base case:
    if(currHouse >= n) return 0;
    if( DP[currHouse][lastColor] != -1 ) return DP[currHouse][lastColor];


    //calculation:
    int ret,res = 1000000000;
    for(int clr = 0 ; clr < 3 ; clr++ )
    {
        if( clr == lastColor ) continue;
        ret = Color[currHouse][clr] + DynamicProgramming(currHouse+1, clr);
        res = min(res,ret);
    }
    DP[currHouse][lastColor] = res;

    //return:
    return res;

}

int main()
{
    int T;
    cin >> T;

    for( int t = 1 ; t <= T ; t++ )
    {
        scanf( "%d",&n );
        for( int i = 0 ; i < n ; i++ )
        {
            for( int j = 0 ; j < 3 ; j++ )
            {
                scanf( "%d",&Color[i][j] );
            }
        }

        Init();
        int res = DynamicProgramming( 0 , 4 );
        printf("Case %d: %d\n",t,res );
    }
    return 0;
}
