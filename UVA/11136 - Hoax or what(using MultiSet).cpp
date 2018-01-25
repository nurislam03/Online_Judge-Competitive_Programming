#include <iostream>
#include <queue>
#include <cstdio>
#include <vector>
#include <set>
using namespace std;

multiset <int> MS;
multiset <int>::iterator low,high;

int main()
{
    int n, k;
    while(scanf("%d", &n))
    {
        if( n == 0 ) break;

        MS.clear();
        long long m,sum = 0;

        for(int i = 1; i <= n; i++)
        {
            scanf("%d", &k);
            for(int j = 0; j < k; j++)
            {
                scanf("%lld", &m);
                MS.insert(m);
            }
            low = MS.begin();
            high = --MS.end();

            sum += *high - *low;
            MS.erase(low); MS.erase(high);
        }
        printf("%lld\n", sum);
    }
}
