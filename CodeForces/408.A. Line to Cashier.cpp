#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;
#define ULL unsigned long long
#define LL long long
#define sz 1000
int ara[110];


int main()
{

    int n,x;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d",&x);
        ara[i] = x;
    }
    LL ans = 100000000000000;
    for(int i = 1; i <= n; i++)
    {
        int tmp = ara[i];
        int tot = 0;

        for(int j = 1; j <= tmp; j++)
        {
            scanf("%d",&x);
            tot += x;
        }

        LL val = (tot * 5);
        val += tmp*15;
        ans = min(ans, val);
    }
    cout << ans << endl;

    return 0;
}
