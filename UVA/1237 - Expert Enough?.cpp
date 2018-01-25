#include <stdio.h>
#include <iostream>
using namespace std;


int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n, m, p;
        int l[10000], h[10000];
        char name[10000][25];

        scanf("%d", &n);
        for(int i = 0; i < n; i++)
            scanf("%s %d %d", name[i], &l[i], &h[i]);

        scanf("%d", &m);
        while(m--)
        {
            scanf("%d", &p);
            int cnt = 0, ansIdx;
            for(int i = 0; i < n; i++)
            {
                if(l[i] <= p && p <= h[i]) cnt++, ansIdx = i;
                if(cnt > 1) break;
            }

            if(cnt == 1) puts(name[ansIdx]);
            else puts("UNDETERMINED");
        }
        if(t) puts("");
    }
    return 0;
}
