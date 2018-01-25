#include <iostream>
#include <cstring>
#include <queue>
#include <vector>

using namespace std;
#define sz 10000
vector< int > adj[sz+10];
int dist[sz+10];


int BFS()
{
    memset( dist, -1, sizeof(dist));
    queue < int > q;
    q.push(1);
    dist[1] = 0;
    int Tcost = 0, MaxNode = 0;


    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int i = 0; i < adj[u].size(); i ++)
        {
            int v = adj[u][i];
            if(dist[v] < 0)
            {
                q.push(v);
                dist[v] = dist[u] + 1;

                if(Tcost < dist[v])
                {
                    Tcost = dist[v];
                    MaxNode = v;
                }
            }
        }
    }


    memset(dist , -1 , sizeof(dist));
    q.push(MaxNode);
    dist[MaxNode] = 0;
    Tcost = 0;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int i = 0; i < adj[u].size(); i ++)
        {
            int v = adj[u][i];
            if(dist[v] < 0)
            {
                q.push(v);
                dist[v] = dist[u] + 1;
                if(Tcost < dist[v])
                {
                    Tcost = dist[v];
                }
            }
        }
    }
    return Tcost;
}


int main()
{
    int n;
    scanf("%d",&n);

    for(int j = 1; j < n; j++)
    {
        int u,v;
        scanf("%d %d",&u,&v);

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int res = BFS();
    cout << res << endl;
    return 0;
}
