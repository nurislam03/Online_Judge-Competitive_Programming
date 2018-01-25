#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cmath>


using namespace std;
#define ULL unsigned long long
#define LL long long
#define sz 10000
ULL dpsq[sz+10];


ULL sum(ULL n)
{
    if(n == 1) return 1;
    //if(n == 2) return 4;
    if(dpsq[n] != -1) return dpsq[n];

    dpsq[n] = ((n*n) + sum(n-1));
    return dpsq[n];
}



int main()
{
    int t;


    scanf("%d",&t);
    memset(dpsq, -1, sizeof(dpsq));

    while(t--)
    {
        LL n;
        scanf("%lld",&n);
        ULL tot = (n*(n+1))/2;
        tot = pow(tot,2);

        ULL ss = sum(n);
        ULL ans;
        if(ss >= tot) ans = ss - tot;
        else ans = tot - ss;

        printf("%llu\n",ans);
    }


    return 0;
}
