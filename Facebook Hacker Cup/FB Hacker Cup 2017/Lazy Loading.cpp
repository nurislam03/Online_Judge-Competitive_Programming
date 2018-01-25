#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;
#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)

priority_queue <int > Q;


int main()
{
    //ios_base::sync_with_stdio(false);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    read("lazy_loading.txt");
    write("solutions.txt");


    int T;
    scanf("%d",&T);

    for(int t = 1; t <= T; t++)
    {
        int n,x;
        scanf("%d",&n);

        while(!Q.empty()) Q.pop();
        for(int i = 1; i <= n; i++)
        {
            scanf("%d",&x);
            Q.push(x);
        }

        int totItem = n, totTrips = 0;
        while(totItem > 0)
        {
            int tmp = Q.top();
            Q.pop();

            int Weight = tmp, kk = 1;
            totItem--;

            while(Weight < 50 && totItem > 0)
            {
                kk++;
                totItem--;
                Weight = (tmp*kk);
            }

            if(Weight >= 50)
            {
                totTrips++;
                Weight = 0;
            }

        }

        printf("Case #%d: %d\n",t,totTrips);
    }

    return 0;
}
