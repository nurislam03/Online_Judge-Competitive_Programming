#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    int N,a[1000];

    while(scanf("%d",&N) == 1)
    {
        for(int i = 0;i < N; ++i)
            scanf("%d",&a[i]);

        int ans = 0;

        for(int i = 0; i < N; ++i)
            for(int j = i+1; j < N; ++j)
            {
                if(a[i] > a[j])
                    ++ans;
            }

        printf("Minimum exchange operations : %d\n",ans);
    }

    return 0;
}
