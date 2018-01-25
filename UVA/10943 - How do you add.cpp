#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;

#define sz 100
#define mod 1000000
int dp[sz+5][sz+5];


int Ways(int n , int k)
{
    if(dp[n][k] != -1) return dp[n][k];
    if(k == 0)
    {
        if(n == 0) return 1;
        else return 0;
    }

    int ans = 0;
    for(int i = 0; i <= n; i++)
    {
        ans += Ways(n - i, k - 1) % mod;
    }
    dp[n][k] = ans % mod;

    return dp[n][k];
}


int main()
{
    int n,k;
    while(scanf("%d %d",&n,&k))
    {
        if(!n && !k) break;

        memset(dp, -1, sizeof(dp));
        int res = Ways(n, k);

        cout << res << endl;
    }
    return 0;
}
