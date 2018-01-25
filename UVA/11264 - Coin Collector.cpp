/*
Tag : Dynamic Programming, DP
*/


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
vector <long long> coin;


LL Coin_Collector_Dp(int sum, int i)
{
    if(i >= coin.size()) return 0;

    LL x = 0, y = 0;
    if(sum+coin[i] < coin[i+1]) x = Coin_Collector_Dp(sum+coin[i], i+1)+1;
    else y = Coin_Collector_Dp(sum, i+1);

    return (x+y);
}



int main()
{
    int tCase;
    scanf("%d",&tCase);
    while(tCase--)
    {
        long long n,x;
        scanf("%lld",&n);
        coin.clear();

        for(int i = 1; i <= n; i++)
        {
            scanf("%lld",&x);
            coin.push_back(x);
        }

        LL ans = Coin_Collector_Dp(0, 0);
        printf("%lld\n",ans+1);
    }
}
