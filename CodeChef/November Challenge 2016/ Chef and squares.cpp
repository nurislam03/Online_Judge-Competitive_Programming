#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;


int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int k;
        scanf("%d",&k);

        int loop = k,tmp = (k+1)/2;
        int cnt = 0;
        while(cnt < k && loop)
        {
            if(cnt == 0)printf("%d",tmp++);
            else printf(" %d",tmp++);
            cnt++;

            if(cnt == k)
            {
                cnt = 0;
                tmp -= 1;
                loop--;
                printf("\n");
            }
            if(tmp > k) tmp = 1;
        }
    }

    return 0;
}
