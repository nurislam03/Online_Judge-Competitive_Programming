#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;
#define LL long long

int main()
{
    int n,m,a,b;
    scanf("%d %d",&n,&m);

    LL tmp1, tmp2, cnt = 0;
    for(int a = 0; a <= (n+m); ++a)
    {
        for(int b = 0; b <= (n+m); ++b)
        {
            tmp1 = pow(a, 2)+b;
            tmp2 = a+pow(b, 2);
            if(tmp1 == n && tmp2 == m) cnt++;
        }
    }
    printf("%lld\n",cnt);

    return 0;
}
