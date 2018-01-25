#include<bits/stdc++.h>
#include<stdio.h>

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
    for(int i=0;i<=n;i++){
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
    int T,t,n,m,i,a,b,c;
    scanf("%d",&T);
    for(t=1;t<=T;t++){
        scanf("%d",&n);
        vector<edge>v;

        while(1){
            scanf("%d %d %d",&a,&b,&c);
            if(a==0 && b==0 && c==0) break;

            edge E;
            E.st=a; E.en=b; E.cost=c;
            v.push_back(E);
        }
        sort(v.begin(),v.end());
        //reverse(v.begin(),v.end());
        initial(n);
        int result1 = mst(v);

        reverse(v.begin(),v.end());
        //reverse(v.begin(),v.end());
        initial(n);
        int result2 = mst(v);
        int result = result1 + result2;
        if(result % 2 == 0){
            cout<<"Case "<<t<<": "<<result/2<<endl;
        }
        else
        cout<<"Case "<<t<<": "<<result<<"/2"<<endl;
    }
    return 0;
}
