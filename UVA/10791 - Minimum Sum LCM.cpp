#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;
#define MAX_PRIME 2147483647
int cnt;
long long sum;



int main()
{
    int n,tC = 0;
    while(scanf("%d", &n), n)
     {
        int least = sqrt(n + 1);

        long long ans = n + 1;
        long long tmp = 1,sum = 0;

        for(int i = 2; i <= least; i++)
        {
            if(n % i == 0)
            {
                tmp = 1;
                while(n % i == 0)
                {
                    tmp *= i;
                    n /= i;
                }
                sum += tmp;
            }
        }
        if( sum < ans ) ans = sum;
        printf("Case %d: %lld\n",++tC, ans);
    }
    return 0;
}
