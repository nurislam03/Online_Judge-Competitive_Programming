#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <cstring>

using namespace std;
#define ULL unsigned long long
#define LL long long
#define sz 500000
LL ara[sz+10];


void DivisorGenerate()
{
    for(int i = 2; i <= sz; i++)
    {
        for(int j = i; j <= sz; j += i)
        {
            if(j <= i) continue;
            if(j%i == 0) ara[j] += i;
        }
    }
}


int main()
{
    int t;
    scanf("%d",&t);

    for(int i = 1; i <= sz; i++)
    {
        if(i == 1) ara[i] = 0;
        else ara[i] = 1;
    }
    DivisorGenerate();

    while(t--)
    {
        int n;
        scanf("%d",&n);
        LL ans = ara[n];
        printf("%lld\n",ans);
    }

    return 0;
}
