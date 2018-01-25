#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;


int ara[110] = {0};

int main()
{
    int n,x;
    scanf("%d",&n);

    for(int i = 0; i < n; i++)
    {
       scanf("%d",&x);
       ara[x]++;
    }

    int ans = 0;
    for(int i = 1; i <= 100; i++)
    {
        if(ara[i] >= 2)
        {
            ans += (ara[i] / 2);
        }
    }

    printf("%d\n",ans);

    return 0;
}
