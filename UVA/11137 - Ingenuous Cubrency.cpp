#include<bits/stdc++.h>
using namespace std;

int make;
long long dp[23][10010];
int coins[] = {1,8,27,64,125,216,343,512,729,1000,1331,1728,2197,2744,3375,4096,4913,5832,6859,8000,9261};

long long DP( int i, int amount )
{
  if( i >= 21 )
  {
    if( amount == 0 ) return 1;
    else return 0;
  }

  if( dp[i][amount] != -1 ) return dp[i][amount];

  long long x = 0 , y = 0;
  if( amount - coins[i] >= 0 ) x = DP( i,amount - coins[i] );
  y = DP( i+1,amount);
  return dp[i][amount] = x + y;
}


int main()
{
    memset( dp,-1,sizeof(dp) );
    while(cin>>make)
    {
        long long res = DP(0,make);
        cout<<res<<endl;
    }
    return 0;
}
