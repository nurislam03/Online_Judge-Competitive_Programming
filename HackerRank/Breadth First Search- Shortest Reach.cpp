#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>


using namespace std;
#define LL long long
#define sz 1000
vector <int> adj[sz+100];

int vis[sz+100];
//int EdgeCnt[sz+100];


void BFS(int n)
{
    queue < int > q;
    q.push(n);
    vis[n] = 0;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int i = 0; i < adj[u].size(); i++)
        {
            int v = adj[u][i];
            if(vis[v] != -1) continue;

            vis[v] = vis[u]+1;
            q.push(v);

        }
    }
}


int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n,m,destination;
        scanf("%d %d",&n,&m);

        for(int i = 0; i <= sz; i++)
            adj[i].clear();

        for(int i = 1; i <= m; i++)
        {
            int x,y;
            scanf("%d %d",&x,&y);
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        scanf("%d",&destination);

        memset(vis, -1, sizeof(vis));
        BFS(destination);

        int resCnt = 1;
        LL ans;
        
        for(int i = 1; i <= n; i++)
        {
            if(i == destination) continue;

            if(vis[i] == -1) ans = -1;
            else ans = vis[i]*6;


            if(resCnt == 1) printf("%lld",ans);
            else printf(" %lld",ans);

            resCnt++;
        }
        printf("\n");
    }

    return 0;
}
