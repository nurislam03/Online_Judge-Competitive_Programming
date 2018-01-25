#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
#include <queue>

using namespace std;
#define LL long long
#define ULL unsigned long long
#define W I64
#define sz 10000

vector < int > adj[sz+10];
int vis[sz+100];
int n,m;


void bfs(int s)
{
	queue< int > Q;
	int i, u, v;
	Q.push(s);
    vis[s] = 1;

	while(!Q.empty())
    {
		u = Q.front();
        Q.pop();

		for(i = 0; i < adj[u].size(); i++)
        {
			v = adj[u][i];
			if(vis[v] != 0) continue;

            vis[v] = 1;
            Q.push(v);
		}
	}
	//return -1;
}


int main()
{
    scanf("%d",&n);

    int a,x,y;
    memset(vis, 0, sizeof(vis));

    for(int i = 1; i <= n; ++i)
    {
        scanf("%d",&x);
        adj[i].push_back(x);
        adj[x].push_back(i);
    }

    int ansCnt = 0;

    for(int i = 1; i <= n; i++)
    {
        if(vis[i] != 0) continue;

        vis[i] = 1;
        ansCnt++;
        bfs(i);
    }


    printf("%d\n",ansCnt);

    return 0;
}
