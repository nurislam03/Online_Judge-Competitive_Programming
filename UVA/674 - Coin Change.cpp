
#include<bits/stdc++.h>

using namespace std;

int coin[] = {1,5,10,25,50};
int make;
int dp[6][7490];

int DP( int i, int amount )
{
  if( i >= 5 )
  {
    if( amount == 0 ) return 1;
    else return 0;
  }

  if( dp[i][amount] != -1 ) return dp[i][amount];

  int x = 0 , y = 0;
  if( amount - coin[i] >= 0 ) x = DP( i,amount - coin[i] );
  y = DP( i+1,amount);
  return dp[i][amount] = x+y;
}


int main()
{
    memset( dp,-1,sizeof(dp) );
    while(cin>>make)
    {
        int res = DP(0,make);
        cout<<res<<endl;
    }
    return 0;
}
