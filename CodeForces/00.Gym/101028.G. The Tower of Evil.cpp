#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
#include <cmath>

using namespace std;
#define LL long long
#define ULL unsigned long long
#define mod 1000003
#define sz 100
LL lowCheck,maxCheck;

LL solved(LL n)
{
    LL val;
    val = n%maxCheck;
    val = val%lowCheck;
    return val;
}


int main()
{
    LL T,h,w,d;
    scanf("%lld",&T);

    for(int i = 1; i <= T; i++)
    {
        scanf("%lld %lld %lld",&h,&w,&d);
        if(h == 2 && d == 2)
        {
            if(d == 2) printf("Yes\n");
            else printf("No\n");
            continue;
        }

        else if(w == 2)
        {
            if(h%2 == 0 && d == 2) printf("Yes\n");
            else if(h%2 != 0 && d == 1) printf("Yes\n");
            else printf("No\n");
            continue;
        }

        lowCheck = (w-1)*2;
        maxCheck = lowCheck * 2;

        LL tmp = solved(h);
        LL ans;

        if(tmp <= w && tmp > 0) ans = tmp;
        else
        {
            tmp = (w-(tmp-w));
            ans = solved(abs(tmp));

        }

        if(ans == d) printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}
