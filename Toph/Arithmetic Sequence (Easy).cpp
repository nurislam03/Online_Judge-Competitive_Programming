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
    int n;
    scanf("%d",&n);
    LL sum = (n*(n+1))/2;

    int q,x;
    scanf("%d",&q);
    for(int i = 1; i <= q; i++)
    {
        scanf("%d",&x);
        sum -= x;
    }

    printf("%lld\n",sum);
    return 0;
}
