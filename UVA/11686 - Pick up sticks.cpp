/*
    Idea: Top Sort

*/
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <queue>
#include <vector>
#include <cstring>
#include <algorithm>
#include <set>
#include <sstream>

using namespace std;
#define sz 1000000

vector <int> sticks[sz+5];
vector <int> res;
int indegree [sz+5];
queue <int> q;



void DFS()
{
    int u,v;
    res.clear();

    while(!q.empty())
    {
        u = q.front();
        res.push_back(u);
        q.pop();


        for(int i = 0; i < sticks[u].size(); ++i)
        {
            v = sticks[u][i];
            indegree[v]--;

            if(indegree[v] == 0)
                q.push(v);
        }
    }

}



int main()
{
    int n,m;
    while(scanf("%d %d",&n,&m))
    {
        if(n == 0 && m == 0)
            break;

        memset(indegree, 0, sizeof(indegree));
        for(int i = 0; i <= n; ++i)
            sticks[i].clear();


        int stick1,stick2;
        while(m--)
        {
            scanf("%d %d",&stick1,&stick2);

            sticks[stick1].push_back(stick2);
            indegree[stick2]++;
        }

        while(!q.empty())
            q.pop(); // queue initializing.

        for(int i = 1; i <= n; ++i)
        {
            if(indegree[i] == 0)
                q.push(i);
        }

        DFS();
        if(res.size() == n)
        {
            for(int i = 0; i <res.size(); ++i)
                cout << res[i] << endl;
        }
        else cout << "IMPOSSIBLE" << endl;

    }

    return 0;
}
