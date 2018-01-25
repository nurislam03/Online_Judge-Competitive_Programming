
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)
#define sz 100000
int ara[sz+10];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //read("input.txt");
    //write("output.txt");

    int tCase,n,x;
    scanf("%d",&tCase);

    while(tCase--)
    {
        scanf("%d",&n);
        int N = (2*n);

        memset(ara, 0, sizeof(ara));
        for(int i = 1; i <= N; i++)
        {
            scanf("%d",&x);
            ara[i] = x;
        }
        sort(ara, ara+N+1);

        int mid = (n+1+N)/2;
        printf("%d\n",ara[mid]);

        for(int i = 1,j = n+1; i <= n; i++, j++)
        {
            if(i == 1) printf("%d %d",ara[i],ara[j]);
            else printf(" %d %d",ara[i],ara[j]);
        }
        printf("\n");

    }

    return 0;
}
