#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;
#define LL long long
#define ULL unsigned long long
#define W I64
#define sz 1000000

vector < int > adj[sz+10];
int isCat[sz+10];
int n,m,ans = 0;


void dfs(int node, int par, int catCnt)
{
    if(catCnt > m) return;

    bool flag = true;
    for(int i = 0; i < adj[node].size(); ++i)
    {
        int u = adj[node][i];
        if(u == par) continue;

        flag = false;
        if(isCat[u] == 1) dfs(u, node, catCnt+1);
        else dfs(u, node, 0);
    }

    if(flag == true) ans++;
}



int main()
{
    scanf("%d %d",&n, &m);

    int a,x,y;
    for(int i = 1; i <= n; ++i)
    {
        scanf("%d",&a);
        isCat[i] = a;
    }

    for(int i = 1; i < n; ++i)
    {
        scanf("%d %d",&x,&y);
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    dfs(1, 1, isCat[1]);
    printf("%d\n",ans);

    return 0;
}
