
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

long long Dp[100+5][50000+100];
vector <int> coins;
int n, x;
LL Half;

LL CoinChange_Dp(int i, int sum)
{
    if(i > n-1) return sum;
    if(Dp[i][sum] != -1) return Dp[i][sum];

    LL Taken = 0, notTaken = 0;
    if(sum + coins[i] <= Half) Taken = CoinChange_Dp(i+1, sum+coins[i]);
    notTaken = CoinChange_Dp(i+1, sum);

    if(Taken > notTaken) Dp[i][sum] = Taken;
    else Dp[i][sum] = notTaken;

    return Dp[i][sum];
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //read("input.txt");
    //write("output.txt");

    int tCase;
    scanf("%d",&tCase);

    while(tCase--)
    {
        scanf("%d",&n);
        LL tot = 0;

        memset(Dp, -1, sizeof(Dp));
        coins.clear();
        for(int i = 1; i <= n; i++)
        {
            scanf("%d",&x);
            coins.push_back(x);
            tot += x;
        }
        Half = (tot/2);
        LL PartA = CoinChange_Dp(0, 0);
        LL PartB = (tot- PartA);
        LL ans = abs(PartB - PartA);

        printf("%lld\n",ans);
    }
}
