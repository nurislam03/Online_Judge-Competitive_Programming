#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;
#define LL long long
#define ULL unsigned long long
#define sz 10000



int main()
{
    LL n;
    scanf("%lld",&n);
    ULL sum = (n*(n+1))/2;

    LL q,x;
    scanf("%lld",&q);
    for(int i = 1; i <= q; i++)
    {
        scanf("%lld",&x);
        sum -= x;
    }

    cout << sum << endl;
    return 0;
}
