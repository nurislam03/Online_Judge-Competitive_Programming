/*==================================================================
Name        : Nur Islam
Email       : nurislam0333@gmail.com
University  : North South University (NSU)
Facebook    : nur.islam.503
Copyright © 2017 Nur Islam. All rights reserved.
==================================================================*/
        //STATUS : TLE

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

//==================================================================//
#define fills(v,n)  fill(v.begin(), v.end(),n)
#define vsort(v)    sort(v.begin(), v.end())
#define asort(v,n)  sort(a, a+n)

#define debug1(v1)  cout<<"1@ Debug Val 1 = "<<v1<<endl;
#define debug2(v2)  cout<<"   2@ Debug Num 2 = "<<v2<<endl;
#define debug3(v3)  cout<<"      3@ Debug Res 3 = "<<v3<<endl;

#define UB(v,a)     upper_bound(v.begin(), v.end(),a)-v.begin()//return the index(pointer address) of a value which is greater than a
#define LB(v,a)     lower_bound(v.begin(), v.end(),a)-v.begin()//return the index(pointer address) of a value which is equal/less than a
#define vMERGE(v1, v2, newV)   merge(v1.begin(), v1.end(), v2.begin(), v2.end(), newV.begin());//merge two sorted vector
#define aMERGE(a1, len1, a2, len2, newVector)   merge(a1, a1+len1, a2, a2+len2, newVector.begin());
/*====================================================================
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
const int Size = 30000;
///=========================  TEMPLATE ENDS HERE  ========================///

int N, Q;
int Tree[Size+10];
int ans[200000+10];
map <int, int> Map;

struct QuerySort{
    int start, end, val, qNO;
};

bool operator<(QuerySort a, QuerySort b){
    if(a.val != b.val) return a.val > b.val;
    return false;
}
vector < QuerySort > qRange;



struct Number{
    int num, index;
};
bool operator<(Number a, Number b){
    if(a.num != b.num) return a.num < b.num;
    return false;
}
vector < Number > V;

//=======================================


void Update(int idx, int val)
{
    while(idx <= N)
    {
        Tree[idx] += val;
        idx += (idx & (-idx));
    }
}

int query(int idx)
{
    LL sum = 0;
    while(idx > 0)
    {
        sum += Tree[idx];
        idx -= (idx & (-idx));
    }
    return sum;
}



int main () {
    #ifdef forthright48
    /// freopen ( "input.txt", "r", stdin );
    /// freopen ( "output.txt", "w", stdout );
    #endif // forthright48

    int x, y, k;
    scanf("%d",&N);
    memset(Tree, 0, sizeof Tree);

    QuerySort QS;
    Number NB;

    for(int i = 1; i <= N; i++){
        scanf("%d",&x);
        NB.num = x;
        NB.index = i;
        V.push_back(NB);
    }
    sort(V.begin(), V.end());

    int id = 0;
    for(int i = 0; i < N; i++){
        NB = V[i];
        x = NB.num;
        if(Map.find(x) == Map.end()) Map[x] = ++id;
    }


    scanf("%d",&Q);
    for(int i = 1; i <= Q; i++)
    {
        scanf("%d %d %d",&x, &y, &k);
        QS.start = x;
        QS.end   = y;
        QS.val   = Map[k];
        QS.qNO   = i;
        qRange.push_back(QS);
    }
    sort(qRange.begin(), qRange.end());

    int j = V.size() - 1;
    for(int i = 0; i < Q; i++)
    {
        QS = qRange[i];
        k = QS.val;

        // Update
        NB = V[j];
        x = NB.num;
        x = Map[x];
        while(x > k && j >= 0){
            Update(NB.index, 1);
            j--;
            NB = V[j];
            x = NB.num;
            x = Map[x];
        }

        //query
        x = QS.start;
        y = QS.end;
        int res = query(y) - query(x-1);
        ans[QS.qNO] = res;
    }
    for(int i = 1; i <= Q; i++){
        printf("%d\n",ans[i]);
    }

    return 0;
}



/*
//============================ Segment Tree ===============================//
//============================== TLE CODE =================================//
//================ Complexity  ===============//


int N , Q;
int number[Size+10];

struct TREE{
    vector < int > V;
};
TREE tree[100000*4];


void build_segment_tree(int node, int a, int b)
{
    if(a == b){
        tree[node].V.push_back(number[a]);
        return;
    }

    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    build_segment_tree(left, a, mid);
    build_segment_tree(right, mid+1, b);

    tree[node].V.resize(tree[left].V.size() + tree[right].V.size());
    vMERGE(tree[left].V, tree[right].V, tree[node].V);
}


int query(int node, int a, int b, int i, int j, int k)
{
    if(i > b || j < a) return 0;
    if(i <= a && j >= b){
        int UpperBound = UB(tree[node].V, k); //cout << "up = " << UpperBound << endl;
        int greaterThanK = tree[node].V.size() - (UpperBound);
        return greaterThanK;
    }

    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    int q1 = 0, q2 = 0;
    q1 += query(left, a, mid, i, j, k);
    q2 += query(right, mid+1, b, i, j, k);

    return (q1+q2);
}


int main () {
    #ifdef forthright48
    /// freopen ( "input.txt", "r", stdin );
    /// freopen ( "output.txt", "w", stdout );
    #endif // forthright48

    scanf("%d",&N);
    for(int i = 1; i <= N; i++){
        scanf("%d",&number[i]);
    }
    build_segment_tree(1, 1, N);
    scanf("%d",&Q);
    for(int i = 1; i <= Q; i++)
    {
        int x, y, k;
        scanf("%d %d %d",&x, &y, &k);

        int ans = query(1, 1, N, x, y, k);
        printf("%d\n",ans);
    }


    return 0;
}
*/
