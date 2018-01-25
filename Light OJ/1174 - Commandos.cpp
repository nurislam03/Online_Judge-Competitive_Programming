//
//  Problem Name : 1174 - Commandos
//  Idea         : BFS
//  Online judge : Light OJ
//  Created by Nur Islam.
//  Copyright © 2017 nur islam. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
#include <vector>

using namespace std;
#define LL long long
#define MAX 1000000000000
#define sz 100

vector < int > adj[sz+10];
int cnt1[sz+10], cnt2[sz+10];
int vis[sz+10];


void init()
{
    for(int i = 0; i <= sz; i++)
    {
        adj[i].clear();
        vis[i] = -1;
        cnt1[i] = 0;
        cnt2[i] = 0;
    }
}


void bfs(int node, bool BFS1)
{
    queue < int > q;
    q.push(node);
    vis[node] = 1;
    if(BFS1) cnt1[node] = 0;
    else cnt2[node] = 0;


    while(!q.empty())
    {
        int u,v;
        u = q.front();
        q.pop();

        for(int i = 0; i < adj[u].size(); ++i)
        {
            v = adj[u][i];
            if(vis[v] != -1) continue;

            vis[v] = 1;
            q.push(v);
            if(BFS1 == true) cnt1[v] = cnt1[u]+1;
            else cnt2[v] = cnt2[u]+1;
        }
    }
}



int main()
{
    int tc;
    scanf("%d",&tc);

    for(int t = 1; t <= tc; ++t)
    {
        int n,r,x,y;
        scanf("%d",&n);
        scanf("%d",&r);

        init(); // initializing

        for(int i = 1; i <= r; ++i)
        {
            scanf("%d %d",&x,&y);
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        scanf("%d %d",&x,&y);

        bfs(x, true);
        memset(vis, -1, sizeof(vis));
        bfs(y, false);

        int ans = -1000, tmp = 0,tot = 0;
        for(int i = 0; i < n; i++)
        {
            tot = cnt1[i] + cnt2[i];
            ans = max(ans, tot);
        }
        printf("Case %d: %d\n",t,ans);
    }

    return 0;
}
