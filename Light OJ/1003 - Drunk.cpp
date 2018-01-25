
//
//  Problem Name : 1003 - Drunk
//  Online judge : Light OJ
//  Cycle finding, DFS
//  Created by Nur Islam.
//


#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>

using namespace std;
#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)
#define all(ar) ar.begin(), ar.end()

#define sz 20000
vector <int> adj[sz+5];
map <string, int> Map;
int Color[sz];

bool flag = true;

void Find_Cycle(int u)
{
    int v;
    for(int i = 0; i < adj[u].size(); ++i)
    {
        v = adj[u][i];
        if(Color[v] == 1) flag = false;
        if(Color[v] != 0) continue;

        Color[v] = 1;
        Find_Cycle(v);
    }
    Color[u] = 2;
}



int main()
{
    int T;
    scanf("%d",&T);


    for(int tCase = 1; tCase <= T; tCase++)
    {
        int m,x,y;
        scanf("%d",&m);

        for(int i = 0; i <= sz; ++i)
            adj[i].clear();
        Map.clear();
        memset(Color, 0, sizeof(Color));

        int id = 0;
        for(int i = 1; i <= m; i++)
        {
            string a,b;
            cin >> a >> b;
            if(Map[a] == 0) Map[a] = ++id;
            if(Map[b] == 0) Map[b] = ++id;
            x = Map[a];
            y = Map[b];

            adj[x].push_back(y);
        }

        bool ans;
        for(int i = 1; i <= id; ++i)
        {
            if(Color[i] != 0) continue;

            Color[i] = 1;
            flag = true;
            Find_Cycle(i);
            Color[i] = 2;
            if(flag == false) break;
        }

        if(flag == true) printf("Case %d: Yes\n",tCase);
        else printf("Case %d: No\n",tCase);
    }

    return 0;
}



/*
    // another Solution.
    // Solution : TopSort.
    // result   : Accepted


#define sz 20000
vector <int> task[sz+5];
int indegree [sz+5];
map <string, int> Map;
queue <int> q;


void TopSort()
{
    int u,v;
    while(!q.empty())
    {
        u = q.front();
        q.pop();

        for(int i = 0; i < task[u].size(); ++i)
        {
            v = task[u][i];
            indegree[v]--;

            if(indegree[v] == 0)
                q.push(v);
        }
    }
}



int main()
{
    int T;
    scanf("%d",&T);


    for(int tCase = 1; tCase <= T; tCase++)
    {
        int m,x,y;
        scanf("%d",&m);

        for(int i = 0; i <= sz; ++i)
            task[i].clear();

        Map.clear();
        memset(indegree, 0, sizeof(indegree));

        int id = 0;
        for(int i = 1; i <= m; i++)
        {
            string a,b;
            cin >> a >> b;
            if(Map[a] == 0) Map[a] = ++id;
            if(Map[b] == 0) Map[b] = ++id;
            x = Map[a];
            y = Map[b];

            task[x].push_back(y);
            indegree[y]++;
        }
        while(!q.empty())
            q.pop();

        for(int i = 1; i <= id; ++i)
        {
            if(indegree[i] == 0)
                q.push(i);
        }

        TopSort();
        bool ans = true;
        for(int i = 1; i <= id; i++)
        {
            if(indegree[i] != 0)
            {
                ans = false;
                break;
            }
        }
        if(ans) printf("Case %d: Yes\n",tCase);
        else printf("Case %d: No\n",tCase);
    }

    return 0;
}

*/
