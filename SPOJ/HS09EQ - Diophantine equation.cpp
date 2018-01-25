#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int t,n;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        long long rem,ans = 0;

        for(int i = 0; i*i*i*i <= n; ++i)
        {
            for(int j = 0; j*j*j <= n; ++j)
            {
                if((i*i*i*i)+(j*j*j) <= n)
                {
                    rem = n - (i*i*i*i) - (j*j*j);
                    ans += sqrt(rem)+1;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}
