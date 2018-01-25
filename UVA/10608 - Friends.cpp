#include <iostream>
#include <cstdio>

using namespace std;
#define sz 30000
int parent[sz+5],Rank[sz+5],cnt[sz+5];


void makeSet(int x)
{
    parent[x] = x;
    Rank[x] = 0;
    cnt[x] = 1;
}


int Find(int x)
{
    if(x != parent[x])
        parent[x] = Find(parent[x]);

    return parent[x];
}


void Union(int pX, int pY)
{
    if(Rank[pX] > Rank[pY])
    {
        parent[pY] = pX;
        cnt[pX] += cnt[pY];
    }

    else if(Rank[pX] < Rank[pY])
    {
        parent[pX] = pY;
        cnt[pY] += cnt[pX];
    }

    else
    {
        parent[pY] = pX;
        Rank[pX] += 1;
        cnt[pX] += cnt[pY];
    }
}


int main()
{
    int tC;
    scanf("%d",&tC);

    while(tC--)
    {
        int n,m;
        scanf("%d %d",&n,&m);

        for( int i = 1; i <= n; i++ )
            makeSet(i);

        int x,y;
        for( int i = 1; i <= m; i++ )
        {
            cin >> x >> y;
            int pX = Find(x);
            int pY = Find(y);

            if(pX != pY) Union(pX, pY);
        }

        int mxCnt = -1000;
        for( int i = 1; i <= n; i++ )
        {
            if(cnt[i] >= mxCnt)
                mxCnt = cnt[i];
        }
        cout << mxCnt << endl;
    }
    return 0 ;
}
