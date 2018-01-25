#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
#define LL long long
#define sz 200000

LL A[sz+10],B[sz+10],C[sz+10],D[sz+10];
LL n, m, k, x, s, ans = 0;


LL BinarySearch(LL v)
{
    LL Min = 1, Max = k;
    LL cnt = 0, res = 0;

    while(Min <= Max)
    {
        //cnt++;
        LL Mid = (Min+Max)/2;

        if(D[Mid] <= v)
        {
            Min = Mid+1;
            res = C[Mid];
        }
        else Max = Mid-1;
    }

    return res;
}


void Solved()
{
    LL tmp = BinarySearch(s); //upperBound
    if(tmp < n)
        ans += ((n-tmp) * x);

    for(LL i = 1; i <= m; i++)
    {
        if(B[i] > s) continue;

        LL extra = (s - B[i]);
        tmp = BinarySearch(extra);

        LL tmpANS = ((n-tmp)*A[i]);
        ans = min(ans, tmpANS);
    }
}


int main()
{
    cin >> n >> m >> k;
    cin >> x >> s;


    for(LL i = 1; i <= m; i++)
        scanf("%lld",&A[i]);

    for(LL i = 1; i <= m; i++)
        scanf("%lld",&B[i]);

    for(LL i = 1; i <= k; i++)
        scanf("%lld",&C[i]);

    for(LL i = 1; i <= k; i++)
        scanf("%lld",&D[i]);


    Solved();

    cout << ans << endl;

    return 0;
}
