/*==================================================================
Name        : Nur Islam
Email       : nurislam0333@gmail.com
University  : North South University (NSU)
Facebook    : nur.islam.503
Copyright © 2017 Nur Islam. All rights reserved.
==================================================================*/
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ff first
#define ss second
#define MP make_pair

#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))
#define POPCOUNT __builtin_popcountll
#define RIGHTMOST __builtin_ctzll
#define LEFTMOST(x) (63-__builtin_clzll((x)))

#define FOR(i,x,y) for(vlong i = (x) ; i <= (y) ; ++i)
#define ROF(i,x,y) for(vlong i = (y) ; i >= (x) ; --i)
#define CLR(x,y) memset(x,y,sizeof(x))
#define UNIQUE(V) (V).erase(unique((V).begin(),(V).end()),(V).end())
#define NUMDIGIT(x,y) (((vlong)(log10((x))/log10((y))))+1)

#define SQ(x) ((x)*(x))
#define ABS(x) ((x)<0?-(x):(x))
#define FABS(x) ((x)+eps<0?-(x):(x))
#define ALL(x) (x).begin(),(x).end()

#define LCM(x,y) (((x)/gcd((x),(y)))*(y))
#define SZ(x) ((vlong)(x).size())

#define Set(N,cur) N=(N|(1LL<<cur))
#define Reset(N,cur) N=(N&(~(1LL<<cur)))
#define Check(N,cur) (!((N&(1LL<<cur))==0))


//if u using fast_cin then use only cin/cout don't mix with (scanf/printf)
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL)
#define nl printf("\n")
#define phl cerr<<"hello\n"
#define dbgA(A,i) debug("@At pos: ",i," = ",A[i])
#define dbg(x) debug("@Print: ",x)
#define spc(N) FOR(i,0,N-1) cerr<<" "
#define printAll(A,st,ed) cerr<<"@Array:";FOR(i,st,ed) cerr<<" "<<A[i];cerr<<endl
#define LINE cerr<<"\n"; FOR(i,0,50) cerr<<"=";cerr<<"\n\n"

/*==================================================================//
#define fills(v,n)      fill(v.begin(), v.end(),n)
#define vsort(v)        sort(v.begin(), v.end())
#define asort(v,n)  	sort(a, a+n)

#define debug1(v1)      cout<<"1@ Debug Val 1 = "<<v1<<endl;
#define debug2(v2)      cout<<"   2@ Debug Num 2 = "<<v2<<endl;
#define debug3(v3)      cout<<"      3@ Debug Res 3 = "<<v3<<endl;

#define UB(v,a)         upper_bound(v.begin(), v.end(),a)-v.begin()
#define LB(v,a)         lower_bound(v.begin(), v.end(),a)-v.begin()

//====================================================================
               priority_queue overloded:
top value will be less than others
priority_queue<int , vector<int> , greater<int > > LowestValue;

top value will be greater than others
priority_queue<int , vector<int> , less<int > > MaxValue;
//====================================================================
void printDouble(double f,int p){ cout << fixed;
    cout << setprecision(p) << f <<endl; }
//===================================================================*/


#ifdef forthright48
     #include <ctime>
     clock_t tStart = clock();
     #define debug(args...) {dbg,args; cerr<<endl;}
     #define timeStamp debug ("Execution Time: ", (double)(clock() - tStart)/CLOCKS_PER_SEC)
     #define bug printf("%d\n",__LINE__);

#else
     #define debug(args...)  // Just strip off all debug tokens
     #define timeStamp
#endif

struct debugger{
    template<typename T> debugger& operator , (const T& v){
        cerr<<v<<" ";
        return *this;
    }
}dbg;

#define LL long long
#define LLU long long unsigned int
typedef long long vlong;
typedef unsigned long long uvlong;
typedef pair < int, int > pii;
typedef pair < vlong, vlong > pll;

//int knightDir[8][2] = { {-2,1},{-1,2},{1,2},{2,1},{2,-1},{-1,-2},{1,-2},{-2,-1} };
//int dir4[4][2] = {{-1,0},{0,1},{1,0},{0,-1}};
//int dir8[8][2] = {{-1,0},{0,1},{1,0},{0,-1},{-1,-1},{1,1},{1,-1},{-1,1}};

const LL inf = 2147383647;
const LL mod = 1e9 + 7;
const double pi = 2 * acos ( 0.0 );
const double eps = 1e-9;
const int SIZE = 30000;
///=========================  TEMPLATE ENDS HERE  ========================///

vector<int> Graph[SIZE+10];
int disc[SIZE+10];
int low[SIZE+10];
int vis[SIZE+10];

int n, Time;



void DFS(int cur)
{
    disc[cur] = ++Time;
    vis[cur] = 1;

    for (int i = 0; i < Graph[cur].size(); i++){
        int v = Graph[cur][i];

        if(vis[v] == 0) DFS(v);
    }
    low[cur] = ++Time;
}


struct TREE{
    long long sum;
};
TREE tree[(SIZE*2)*4+10];
int ara[SIZE+10];
int newAraay[SIZE*2+10];


void segmentTree(int node, int a, int b)
{
    if(a == b){
        tree[node].sum = newAraay[a];
        return;
    }

    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    segmentTree(left, a, mid);
    segmentTree(right, mid+1, b);

    tree[node].sum = tree[left].sum + tree[right].sum;
}


void Update(int node, int a, int b, int i, int j, LL value)
{
    if(i > b || j < a) return;
    if(i <= a && j >= b){
        tree[node].sum = value;
        return;
    }

    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    Update(left, a, mid, i, j, value);
    Update(right, mid+1, b, i, j, value);

    tree[node].sum = tree[left].sum + tree[right].sum;
}


LL query(int node, int a, int b, int i, int j)
{
    if(i > b || j < a) return 0;
    if(i <= a && j >= b) return tree[node].sum;

    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    LL q1 = query(left, a, mid, i, j);
    LL q2 = query(right, mid+1, b, i, j);

    return (q1+q2);
}


int main () {
    #ifdef forthright48
    /// freopen ( "input.txt", "r", stdin );
    /// freopen ( "output.txt", "w", stdout );
    #endif // forthright48
    int tCase;
    scanf("%d",&tCase);

    for(int T = 1; T <= tCase; T++)
    {
        int x, u, v, d, Q;
        scanf("%d",&n);

        memset(disc, 0, sizeof disc);
        memset(low, 0, sizeof low);
        memset(vis, 0, sizeof vis);
        for(int i = 0; i < SIZE; i++) Graph[i].clear();


        for(int i = 0; i < n; i++){
            scanf("%d",&ara[i]);
        }

        Time = 0;
        for(int i = 1; i < n; i++)
        {
            scanf("%d %d",&u, &v);
            Graph[u].push_back(v);
            Graph[v].push_back(u);
        }

        DFS(0);

        for(int i = 0; i < n; i++){
            newAraay[disc[i]] = ara[i];
            newAraay[low[i]]  = -ara[i];
            //cout << "dis = " << disc[i] << "low = " << low[i] << endl;
        }
        //for(int i = 1; i <= 2*n; i++) cout << i <<  "  = " << newAraay[i] << endl;
        segmentTree(1, 1, n*2);


        scanf("%d",&Q);
        printf("Case %d:\n", T);

        int disTimeOfRoot = disc[0];
        for(int i = 1; i <= Q; i++){
            scanf(" %d %d %d",&x, &u, &v);

            if(x == 0){
                //cout << "update = " << disc[u] << "  "  <<low[u] << endl;
                LL ans = query(1, 1, 2*n, disTimeOfRoot, disc[u]) + query(1, 1, 2*n, disTimeOfRoot, disc[v]);
                printf("%lld\n",ans);
            }
            else{
                //cout << "update = " << disc[u] << "  "  <<low[u] << endl;
                Update(1, 1, 2*n, disc[u], disc[u], v);
                Update(1, 1, 2*n, low[u], low[u],  -v);
            }
        }
    }



    return 0;
}
