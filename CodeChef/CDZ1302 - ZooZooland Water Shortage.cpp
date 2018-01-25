/*

    Idea : minimum spanning tree - MST
    

*/

#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <vector>
#include <algorithm>

int p[100000+100];int r[100000+100];
using namespace std;

struct edge
{
    int st;
    int en;
    long long cost;
};


bool operator<(edge a,edge b)
{
    if(a.cost != b.cost){
        return a.cost < b.cost;
    }
    return false;
}

void initial(int n)
{
    for(int i=0; i<= n; i++)
    {
        r[i] = 0;
        p[i] = i;
    }
}


int find(int x)
{
    if(p[x] == x){
        return x;
    }
    p[x] = find(p[x]);
    return p[x];
}


int mst(vector<edge>&v)
{
    long long cost = 0;
    for(int i=0; i<v.size(); i++)
    {
        int x = find(v[i].st);
        int y = find(v[i].en);

        if(x != y)
        {
            if(r[x]>r[y])
            {
                p[y] = x;
            }
            else if(r[x]<r[y])
            {
                p[x] = y;
            }
            else
            {
                p[y] = x;
                r[x]++;
            }
            cost = cost + v[i].cost;
        }
    }
    return cost;
}



int main()
{
    int T;
    scanf("%d",&T);

    while(T--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        vector<edge>v;

        int a,b,c;
        for(int i=0; i<m; i++)
        {
            scanf("%d %d %d",&a,&b,&c);
            edge E;
            E.st=a; E.en=b; E.cost=c;
            v.push_back(E);
        }
        sort(v.begin(), v.end());
        initial(n);

        long long result = mst(v);
        printf("%lld\n",result);
    }

    return 0;
}
