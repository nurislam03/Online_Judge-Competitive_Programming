
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)
#define LL long long
#define MOD 100000007

long long Dp[50+5][1000+100];
vector <int> coins;
int numOfCoins[50];
int n,k;

LL CoinChange_Dp(int i, int num)
{
    if(i > n-1)
    {
        if(num == 0) return 1;
        else return 0;
    }
    if(Dp[i][num] != -1) return Dp[i][num];

    LL Taken = 0, notTaken = 0;
    for(int j = 0; j <= numOfCoins[i]; j++)
    {
        if(num-(coins[i]*j) >= 0)
        {
            Taken += CoinChange_Dp(i+1, (num-coins[i]*j)) % MOD;
            Taken %= MOD;
        }
    }

    return Dp[i][num] = ((Taken+notTaken)%MOD);
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //read("input.txt");
    //write("output.txt");

    int tCase;
    scanf("%d",&tCase);

    for(int t = 1; t <= tCase; t++)
    {
        scanf("%d %d",&n,&k);

        memset(Dp, -1, sizeof(Dp));
        memset(numOfCoins, 0, sizeof(numOfCoins));
        coins.clear();

        int x;
        for(int i = 0; i < n; i++)
        {
            scanf("%d",&x);
            coins.push_back(x);
        }
        for(int i = 0; i < n; i++)
        {
            scanf("%d",&x);
            numOfCoins[i] = x;
        }

        LL ans = CoinChange_Dp(0, k)%MOD;
        printf("Case %d: %lld\n",t, ans);
    }
}
