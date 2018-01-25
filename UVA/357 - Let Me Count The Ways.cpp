#include<bits/stdc++.h>

using namespace std;

int coin[] = {1,5,10,25,50};
long long make;
long long dp[6][30010];

long long DP( long long i, long long amount )
{
  if( i >= 5 )
  {
    if( amount == 0 ) return 1;
    else return 0;
  }

  if( dp[i][amount] != -1 ) return dp[i][amount];

  long long x = 0 , y = 0;
  if( amount - coin[i] >= 0 ) x = DP( i,amount - coin[i] );
  y = DP( i+1,amount);
  return dp[i][amount] = x+y;
}


int main()
{
    memset( dp,-1,sizeof(dp) );
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    while(cin>>make)
    {
        long long res = DP(0,make);
        if( res == 1 ) cout<<"There is only "<<"1"<<" way to produce "<<make<<" cents change."<<endl;
        else cout<<"There are "<<res<<" ways to produce "<<make<<" cents change."<<endl;
    }
    return 0;
}
