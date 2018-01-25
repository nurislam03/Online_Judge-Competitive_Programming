#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;
#define ULL unsigned long long
#define LL long long
#define sz 1000
int ara[sz+10];


int main()
{
    int tc,n,k,x;
    scanf("%d %d",&n,&k);
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&x);
        ara[x]++;
    }

    int ans = 0;
    for(int i = 1; i < n; i++)
    {
        if(ara[i] >= k)
        {
            ara[i] = (ara[i] % k);
        }
        ans = max(ans, ara[i]);
    }
    printf("%d\n",ans);


    return 0;
}
