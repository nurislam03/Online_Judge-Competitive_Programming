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


//==================================================================//
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
//==================================================================//
#define PI              acos(-1.0)
#define eps             1e-9
#define INF             (1<<30)
#define MOD             1000000007
#define SIZE            10005
//=======// Done With The Shortcut Stuffs! Now Let's Code! //=======//

int N, R;
int Time = 0;
vector<int> Graph[SIZE];
int disc[SIZE];
int low[SIZE];
int ap[SIZE];
int visited[SIZE];
int parent[SIZE];

map <string, int> Map;
map <int, string> nameList;
vector <string> ansList;



struct Link{
    int s; int t;
    Link(int u,int v){
        s = min(u,v);
        t = max(u,v);
    }
};
vector<Link> bridge_List;

bool cmp(Link a,Link b){
    if(a.s == b.s) return (a.t<b.t);
    return (a.s<b.s);
}


void find_AP(int cur) {
    disc[cur] = low[cur] = ++Time;
    visited[cur] = 1;
    int child = 0;

    for (int i = 0; i < (int) Graph[cur].size(); i++)
    {
        int v = Graph[cur][i];
        if (visited[v] == 0)
        {
            parent[v] = cur;
            child++;
            find_AP(v);
            if (parent[cur] == -1 && child > 1) {
                ap[cur] = 1;
            }
            low[cur] = min(low[v], low[cur]);
            if (parent[cur] != -1 && low[v] >= disc[cur]){
                ap[cur] = 1;
            }
        }
        else if (v != parent[cur]){
            low[cur] = min(disc[v], low[cur]);
        }
    }
}

int articulation_point() {
    mems(disc, 0);
    mems(low, 0);
    mems(ap, 0);
    mems(visited, 0);
    mems(parent, -1);
    bridge_List.clear();

    // checking all nodes. if there is any missing node.
    for (int i = 1; i <= N; i++) {
        if (visited[i] == 0) {
            find_AP(i);
        }
    }

    int cnt = 0; // articulation_point count.
    for(int i = 1; i <= N; i++){
        if(ap[i] == 1) {
            cnt++;
            string name = nameList[i];
            ansList.push_back(name);
        }
    }
    return cnt;
}

int main()
{
    int tCase = 0,u,v;
    while(scanf("%d",&N) && N)
    {
        Map.clear();
        nameList.clear();
        ansList.clear();

        char name1[35], name2[35];
        for (int i = 1; i <= N; i++){
            Graph[i].clear();

            scanf("%s",name1);
            Map[name1] = i;
            nameList[i] = name1;
        }

        scanf("%d",&R);
        for (int i = 0; i < R; i++){
            scanf("%s %s", name1, name2);

            u = Map[name1]; v = Map[name2];
            Graph[u].push_back(v);
            Graph[v].push_back(u);
        }
        int cnt = articulation_point();

        if(tCase) printf("\n");
        sort(ansList.begin(), ansList.end());

        printf("City map #%d: %d camera(s) found\n",++tCase, cnt);
        for(int i = 0; i < ansList.size(); i++){
            //printf("%s\n",ansList[i]);
            cout << ansList[i] << endl;        
        }

/*
        // print all articulation point.
        for(int i = 1;i<=N;i++){
            if(ap[i] == 1) printf("AP: %d\n",i);
        }
*/
    }

    return 0;
}
