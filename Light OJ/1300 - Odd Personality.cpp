/*==================================================================
Name        : Nur Islam
UVa         : NurIslam
Codeforces  : nurislam
Hackerrank  : nurislam
Codechef    : nurislam
Spoj        : nurislam
Topcoder    : nurislam
Email       : nurislam0333@gmail.com
University  : North South University (NSU)
Facebook    : nur.islam.503
Copyright © 2017 Nur Islam. All rights reserved.
==================================================================*/
#include <iostream>
#include <cstdio>
#include <sstream>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <climits>
#include <iomanip>
#include <cassert>
#include <algorithm>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <fstream>
#include <numeric>
#include <string>
#include <vector>
#include <cstring>
#include <map>
#include <iterator>
#include <functional>
//#include <bits/stdc++.h>
using namespace std;
//==================================================================

#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)
#define LL              long long
#define LLU             long long unsigned int
#define pf              printf
#define sf              scanf
#define FOR(i,x,y)      for(int i = (x); i <= (y); ++i)
#define ROF(i,x,y)      for(int i = (y); i >= (x); --i)

#define MIN(a,b)        ((a)<(b)?(a):(b))
#define MAX(a,b)        ((a)>(b)?(a):(b))
#define SQ(x)           ((x)*(x))
#define NUMDIGIT(x,y)   (((int)(log10((x))/log10((y))))+1)
#define LCM(x,y)        (((x)/gcd((x),(y)))*(y))

#define pb              push_back
#define pii             pair<int,int>
#define mp              make_pair
//#define F               first
//#define S               second
//#define SZ(x)           ((int)(x).size())
#define mems(x,v)       memset(x,v,sizeof(x))
#define fills(v,n)      fill(v.begin(), v.end(),n)
#define vsort(v)        sort(v.begin(), v.end())
#define asort(v,n)  	sort(a, a+n)
#define UNIQUE(V)       (V).erase(unique((V).begin(),(V).end()),(V).end())//sorted (V)

#define FABS(x)         ((x)+eps<0?-(x):(x))
#define ABS(x)          ((x)<0?-(x):(x))
#define NORM(x)         if(x>=mod)x-=mod;
#define phl             printf("hello\n")
#define POPCOUNT        __builtin_popcountll
#define RIGHTMOST       __builtin_ctzll
#define LEFTMOST(x)     (63-__builtin_clzll((x)))
#define NUMDIGIT(x,y)   (((int)(log10((x))/log10((y))))+1)

#define debug1(v1)      cout<<"1@ Debug Val 1 = "<<v1<<endl;
#define debug2(v2)      cout<<"   2@ Debug Num 2 = "<<v2<<endl;
#define debug3(v3)      cout<<"      3@ Debug Res 3 = "<<v3<<endl;

#define UB(v,a)         upper_bound(v.begin(), v.end(),a)-v.begin()
#define LB(v,a)         lower_bound(v.begin(), v.end(),a)-v.begin()
//if u using fast_cin then use only cin/cout don't mix with (scanf/printf)
#define fast_cin        ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);

/*==================================================================//

               priority_queue overloded:
top value will be less than others
priority_queue<int , vector<int> , greater<int > > LowestValue;

top value will be greater than others
priority_queue<int , vector<int> , less<int > > MaxValue;
==================================================================*/

//================================================================//
//freopen("input,txt","r",stdin);
//freopen("output.txt","w",stdout);

/*==================================================================//
void make_unique(vector<int> &a){ sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end()); }
void printDouble(double f,int p){ cout << fixed;
    cout << setprecision(p) << f <<endl; }
int  Set(int N,int cur){ return N = N | (1<<cur); }
int  Reset(int N,int cur){ return N = N & ~(1<<cur); }
bool Check(int N,int cur){ return (bool)(N & (1<<cur)); }
LL   GCD(LL a,LL b){ if(b == 0) return a; return GCD(b,a%b);}
LL   LCM(LL a,LL b){ return a*b/GCD(a,b);}
LL   POW(LL a,LL p){ LL res = 1,x = a;while(p){if(p&1)
    res = (res*x); x = (x*x);p >>= 1;} return res;}
//================================================================== */


/*==================================================================//
int knightDir[8][2] = {{-2,1},{-1,2},{1,2},{2,1},{2,-1},{-1,-2},{1,-2},{-2,-1}};
int dir8[8][2]      = {{-1,0},{0,1},{1,0},{0,-1},{-1,-1},{1,1},{1,-1},{-1,1}};
int dir4[4][2]      = {{-1,0},{0,1},{1,0},{0,-1}};
//==================================================================//
// knightDir
int fx[10]          = {1, -1, 1, -1, 2, 2, -2, -2};
int fy[10]          = {2, 2, -2, -2, 1, -1, 1, -1};
//dir4
int fx4[5]          = {-1, 0, 1, 0};
int fy4[5]          = {0, 1, 0, -1};
//dir8
int fx8[10]         = {-1, 0, 1, 0, -1, 1, 1, -1};
int fy8[10]         = {0, 1, 0, -1, -1, 1, -1, 1};
//==================================================================*/
#define PI              acos(-1.0)
#define eps             1e-9
#define INF             (1<<30)
#define MOD             1000000007
#define SIZE            10000
//=======// Done With The Shortcut Stuffs! Now Let's Code! //=======//
int N,M;
vector <int> adj[SIZE+5];
int Time = 0;
int disc[SIZE+5];
int low[SIZE+5];

int visited[SIZE+5];
int parent[SIZE+5];
stack <int> node_stk;
int color[SIZE+5]; // coloring
int cycle_node[SIZE+5];
int odd_cycle_nodeCnt = 0;
vector <int> ansCnt;


void init(){
    memset(disc, 0,sizeof(disc));
    memset(low, 0,sizeof(low));
    //memset(ap, 0,sizeof(ap));
    memset(visited, 0,sizeof(visited));
    memset(parent, -1,sizeof(parent));
    while(!node_stk.empty()) node_stk.pop();
    ansCnt.clear();
    memset(cycle_node, 0, sizeof(cycle_node));
}


int bfs_bicoloring(int n)
{
    memset(color , -1 ,sizeof(color));
    queue < int > q;
    q.push(n);
    color[n] = 1;
    int u, v;

    while(!q.empty())
    {
        u = q.front();
        q.pop();
        for(int j = 0; j < adj[u].size(); j++)
        {
            int v = adj[u][j];
            if(cycle_node[v] != 1) continue;

            if(color[v] == -1){
                if( color[u] == 1 ) color[v] = 2;
                else color[v] = 1;
                q.push(v);
            }
            else{
                if(color[v] == color [u]) return -1;
            }
        }
    }

    return 1;
}




void dfs_cycleNode(int cur)
{
    disc[cur] = low[cur] = ++Time;
    visited[cur] = 1;
    //int child = 0;

    for(int i = 0; i < adj[cur].size(); i++)
    {
        int v = adj[cur][i];
        if(visited[v] == 0){
            parent[v] = cur;
            node_stk.push(v);
            dfs_cycleNode(v);

            if(low[v] == disc[cur])
            {
                //memset(cycle_node, 0, sizeof(cycle_node));
                int x, ans;
                cycle_node[cur] = 1;
                while(node_stk.top() != cur){
                    x = node_stk.top();
                    node_stk.pop();
                    cycle_node[x] = 1;
                }
                ans = bfs_bicoloring(cur);
                if(ans == -1){
                    for(int i = 0; i < N; i++){
                        if(cycle_node[i] == 1)
                            ansCnt.push_back(i);
                            cycle_node[i] = 0;
                    }
                }
            }
            if(low[v] > disc[cur]){
                node_stk.pop();
            }
        }
        else if(v != parent[cur]){
            low[cur] = min(disc[v], low[cur]);
        }

    }
    /*
    if(low[cur] > disc[parent[cur]]){
        node_stk.pop();
    }*/
}




int main()
{
    //read("input.txt");
    //write("output.txt");
    int tCase, u, v;
    scanf("%d",&tCase);

    for(int t = 1; t <= tCase; t++)
    {
        scanf("%d %d",&N, &M);
        for (int i = 0; i < M; i++){
            adj[i].clear();
        }
        init();

        for(int i = 0; i < M; i++){
            scanf("%d %d",&u, &v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        //odd_cycle_nodeCnt = 0;
        for(int i = 0; i < N; i++){
            if(visited[i] != 0) continue;
            node_stk.push(i);
            dfs_cycleNode(i);
        }

        //debug1(node_stk.size());
        if(ansCnt.size() > 1) UNIQUE(ansCnt);
        printf("Case %d: %d\n",t, ansCnt.size());
    }


    return 0;
}
