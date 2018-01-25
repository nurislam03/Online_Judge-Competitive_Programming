#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;
#define LL long long

vector < LL > V;


int main()
{
    LL x,tot = 0;
    for(int i = 1; i <= 5; i++)
    {
        scanf("%lld",&x);
        tot += x;
        V.push_back(x);
    }

    sort(V.begin(), V.end());

    LL Max = (tot - V[0]);
    LL Min = (tot - V[4]);

    printf("%lld %lld\n",Min,Max);
}
