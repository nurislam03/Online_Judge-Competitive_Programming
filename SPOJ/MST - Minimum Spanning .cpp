#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <vector>

int p[1000];int r[1000];
using namespace std;

struct edge
{
    int st;int en;int cost;
};

bool operator<(edge a,edge b)
{
    if(a.cost != b.cost){
        return a.cost<b.cost;
    }
    return false;
}

void initial(int n)
{
    for(int i=0;i<n;i++){
        r[i] = 0;
        p[i] = i;
    }
}

int find(int x)
{
    if(p[x] == x){
        return x;
    }
    p[x] =find(p[x]);
    return p[x];
}

int mst(vector<edge>&v)
{
    int cost = 0;
    for(int i=0;i<v.size();i++){
        int x = find(v[i].st);
        int y = find(v[i].en);
        if(x != y){
            if(r[x]>r[y]){
                p[y] = x;
            }
            else if(r[x]<r[y]){
                p[x] = y;
            }
            else{
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
    int n,m,i,a,b,c;
    //cin>>n>>m;
    scanf("%d %d",&n,&m);
    vector<edge>v;

    for(i=0;i<m;i++){
        //cin>>a>>b>>c;
        scanf("%d %d %d",&a,&b,&c);

        edge E;
        E.st=a; E.en=b; E.cost=c;
        v.push_back(E);
    }
    sort(v.begin(),v.end());
    initial(n);
    int result = mst(v);
    cout<<result<<endl;

    return 0;
}
