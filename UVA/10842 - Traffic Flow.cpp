#include<bits/stdc++.h>
#include<stdio.h>

int p[1010]; int r[1010];
using namespace std;

struct edge
{
    int st; int en; int cost;
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
    if(p[x] == x) return x;
    return p[x] = find(p[x]);
}

int mst(vector<edge>&v)
{
    int cost=0;
    for(int i=0;i<v.size();i++){
        int x = find(v[i].st);
        int y = find(v[i].en);
        if(x != y){
            if(r[x]>r[y]) p[y] = x;
            else if(r[x]<r[y]) p[x] = y;
            else p[y] = x; r[x]++;

            cost = v[i].cost;
        }
    }
    return cost;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,m;
        cin>>n>>m;
        vector<edge>v;
        for(int j=0;j<m;j++){
            int a,b,c;
            cin>>a>>b>>c;
            edge E;
            E.st = a; E.en = b; E.cost = c;
            v.push_back(E);
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        initial(n);
        int result = mst(v);
        cout<<"Case #"<<i+1<<": "<<result<<endl;
    }

    return 0;
}
