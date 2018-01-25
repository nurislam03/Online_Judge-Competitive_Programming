#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>


using namespace std;
#define LL long long
#define ULL unsigned long long
#define sz 1000
ULL ara[sz+10];
LL pos[sz+10];
int ans[sz+10];



int main()
{
    LL n,h,p,x;
    scanf("%lld",&n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%lld",&x);
        ara[i] += x;
    }
    for(int i = 1; i <= n; i++)
    {
        scanf("%lld",&x);
        ara[i] += x;
        pos[i] = x;
    }


    for(int i = 1; i <= n; i++)
    {
        LL hight = ara[i];
        for(int j = i; j <= n; j++)
        {
            if(hight >= pos[j])
            {
                ans[i]++;
                if(hight < ara[j]) hight = ara[j];
            }
        }
    }

    int q;
    scanf("%d",&q);

    for(int i = 1; i <= q; i++)
    {
        scanf("%lld",&x);
        printf("%d\n",ans[x]);
    }
    return 0;
}
