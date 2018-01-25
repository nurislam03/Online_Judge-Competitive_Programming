#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <queue>

using namespace std;
#define sz 100
int learn[sz+10];
vector <int> adj[sz+10];
bool visited[sz+10];

int totLearnt,endNode;




void intilization()
{
    for(int i = 0; i <= sz; ++i)
    {
        adj[i].clear();
        learn[i] = 0;
        visited[i] = false;
    }
}


void BFS()
{
    queue <int> Q;
    int u,v,max;
    totLearnt = 0;

    Q.push(0);
    visited[0] = true;


    while(!Q.empty())
    {
        u = Q.front();
        Q.pop();
        max = -1;


        for(int i = 0; i < adj[u].size(); ++i)
        {
            v = adj[u][i];

            if(!visited[v])
            {
                if(learn[v] > max)
                {
                    max = learn[v];
                    endNode = v;
                }
            }
        }

        if(!visited[endNode])
        {
            totLearnt += max;

            Q.push(endNode);
            visited[endNode] = true;
        }

    }

}




int main()
{
    int T;
    scanf("%d",&T);

    for(int t = 1; t <= T; ++t)
    {
        intilization();

        int n,m;
        scanf("%d %d",&n, &m);

        for(int i = 0; i < n; ++i)
            scanf("%d",&learn[i]);

        int u,v;
        for(int i = 0; i < m; ++i)
        {
            scanf("%d %d",&u, &v);

            adj[u].push_back(v);
        }

        BFS();
        printf("Case %d: %d %d\n",t, totLearnt, endNode);

    }


    return 0;
}
