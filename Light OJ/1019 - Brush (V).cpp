//
//  Problem Name : 1019 - Brush (V)
//  Idea         : Dijkstra
//  Online judge : Light OJ
//
//  Created by Nur Islam.
//  Copyright © 2017 nur islam. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
#define LL long long
#define MAX 10000000
#define sz 100
int totCost[sz+10];
int n,m;

struct road
{
    int dest, cost;

    road(){
        // blanck constructor
    }
    road(int a, int b)
    {
        dest = a;
        cost = b;
    }

    bool operator < (const road& o) const
    {
        return (cost>o.cost);
    }
};


vector < road > V[sz+10];
void init(int n)
{
    for(int i = 0; i <= n; i++)
    {
        totCost[i] = MAX;
        V[i].clear();
    }
}



int Dijkstra(int src, int home)
{
     priority_queue < road > pQ;
     pQ.push(road(src, 0));
     totCost[src] = 0;

     while(!pQ.empty())
     {
         road x,y; // struct variable
         x = pQ.top();
         pQ.pop();

         for(int i = 0; i < V[x.dest].size(); ++i)
         {
             y = V[x.dest][i];
             if(x.cost+y.cost < totCost[y.dest])
             {
                 int temp = x.cost+y.cost;
                 totCost[y.dest] = temp;
                 pQ.push(road(y.dest, temp));
             }
         }
     }
     return totCost[home];
}




int main()
{
    int tc;
    scanf("%d",&tc);

    for(int t = 1; t <= tc; ++t)
    {
        scanf("%d %d",&n,&m);

        road rd; // struct variable
        init(n);

        for(int i = 1; i <= m; ++i)
        {
            int u,v,w;
            scanf("%d %d %d",&u,&v,&w);

            rd.dest = v; rd.cost = w;
            V[u].push_back(rd);

            rd.dest = u; rd.cost = w;
            V[v].push_back(rd);
        }

        int ans = Dijkstra(1, n);
        if(ans == MAX) printf("Case %d: Impossible\n",t);
        else printf("Case %d: %d\n",t,ans);
    }

    return 0;
}
