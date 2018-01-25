#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
#define sz 10000
vector <int> adj[sz+10];
int curr[sz+10],res[sz+10];
//vector <int> curr,res;

int vis[sz+10];
int MaxCnt = 0;

void dfs(int n, int cnt){
    //vis[n] = 1; //cout << "i am here" << endl;
    bool flag = false;

    for(int i = 0; i < adj[n].size(); i++){
        int u = adj[n][i];
        if(vis[u] != -1) continue;
        vis[u] = 1;
        curr[cnt+1] = u;
        flag = true;
        //cout << " dkjds  " << u << endl;
        dfs(u, cnt+1);
        //vis[u] = -1;
    }

    if(flag == false)
    {
        if(cnt > MaxCnt)
        {
            MaxCnt = cnt;
            for(int i = 1; i <= cnt; i++)
            {
                res[i] = curr[i];
            }
        }
    }

}


int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i = 1; i <= m; i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        adj[x].push_back(y);
        adj[y].push_back(x);
    }


    for(int i = 1; i <= n; i++)
    {
        //curr[] initialization;
        memset(vis, -1, sizeof(vis));
        vis[i] = 1;
        curr[1] = i;
        dfs(i, 1);
    }



    printf("%d\n",MaxCnt);
    for(int i = 1; i <= MaxCnt; i++)
    {
        if(i == 1) printf("%d",res[i]);
        else printf(" %d",res[i]);
    }
    printf("\n");
    return 0;
}
