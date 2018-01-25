//
//  Problem Name : 20.C. Dijkstra?
//  Problem Link : http://codeforces.com/contest/20/problem/C
//  Idea         : Using Dijkstra
//  Online judge : Codeforces
//  Created by Nur Islam.
//  Copyright © 2016 nur islam. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <queue>
#include <vector>

using namespace std;
#define LL long long
#define MAX 1000000000000
#define sz 200000
LL Dist[sz+10];
int parent[sz+10];
int ans[sz+10];
int n,m;



struct node
{
    LL destination,cost;

    node(){
        //blanck constructor
    }

    node(LL a, LL b)
    {
        destination = a;
        cost = b;
    }

    bool operator < (const node& o) const
    {
        return (cost>o.cost);
    }
};
vector <node> V[sz+10];


void init(int n)
{
    for(int i = 0; i <= n; i++)
    {
        Dist[i] = MAX;
        V[i].clear();
    }
}


void Dijkstra(int src, int dest)
{
    priority_queue < node > pQ;
    pQ.push(node(src,0));      // push : structure
    Dist[src] = 0;

    while(!pQ.empty())
    {
        node x,y;      // struct variable
        x = pQ.top();
        pQ.pop();

        for(int i = 0; i < V[x.destination].size(); i++)
        {
            y = V[x.destination][i];
            if(x.cost + y.cost < Dist[y.destination])
            {
                LL cc = x.cost + y.cost;
                Dist[y.destination] = cc;
                parent[y.destination] = x.destination; // saving ans
                pQ.push(node(y.destination,cc));
            }
        }
    }

}


void Solution()
{
    if(Dist[n] == MAX)
    {
        printf("-1\n");
        return;
    }

    int k = 1, i = n;
    parent[1] = -1;
    while(i != -1)
    {
        ans[k++] = i;
        i = parent[i];
    }
    for(int i = k-1; i > 0; --i)
    {
        printf("%d ",ans[i]);
    }
}

int main()
{
    int a,b,w;
    scanf("%d%d",&n,&m);

    node SV;
    init(n); // initializing

    for( int i = 1 ; i <= m ; i++ )
    {
        scanf("%d%d%d",&a,&b,&w);

        SV.destination = a; SV.cost = w;
        V[b].push_back(SV);

        SV.destination = b; SV.cost = w;
        V[a].push_back(SV);
    }

    Dijkstra(1, n);
    Solution();
    return 0;
}
