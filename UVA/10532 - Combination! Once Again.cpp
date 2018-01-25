#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <set>

using namespace std;
set <int> SET;


long long nCr(int n, int r)
{
    long long ans = 1;
    r = min(r, n-r);


    for(int i = 1; i <= r; ++i)
    {
        ans = (ans * n) / i;
        n--;
    }

    return ans;
}



int main()
{
    int n,m,tC = 1;

    while(scanf("%d %d",&n,&m) != EOF)
    {
        if(n == 0) break;

        int cnt,r,x;
        SET.clear();

        while(n--)
        {
            scanf("%d",&x);
            SET.insert(x);
        }

        cnt = SET.size();

        cout << "Case " << tC++ << ":" << endl;
        if(m == 0)
        {
            printf("0\n");
            continue;
        }

        for(int i = 1; i <= m; ++i)
        {
            scanf("%d",&r);

            long long ans = nCr(cnt, r);
            printf("%lld\n",ans);
        }


    }

    return 0;
}
