/*==================================================================
Name        : Nur Islam
Email       : nurislam0333@gmail.com
University  : North South University (NSU)
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


//if u using fast_cin then use only cin/cout don't use both (scanf/printf)
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
const int Size = 100000;
///=========================  TEMPLATE ENDS HERE  ========================///
int num[Size+10];
int n, s, x;
LL qSum[Size+10];


LL solve() {
    LL ans = inf;
    FOR(i, 1, n) {
        FOR(k, i+1, n) {
            LL tmpSum = qSum[k] - qSum[i-1];
            if(tmpSum >= s) {
                int len = (k - i) + 1;
                if(len <= ans) {
                    ans = len;
                }
                break;
            }
        }
    }

    return ans;
}

int main () {
    #ifdef forthright48
    /// freopen ( "input.txt", "r", stdin );
    /// freopen ( "output.txt", "w", stdout );
    #endif // forthright48

    while(scanf("%d %d", &n, &s) == 2) {
        memset(num, 0, sizeof num);
        FOR(i,1,n) {
            scanf("%d", &x);
            num[i] = x;
        }

        memset(qSum, 0, sizeof qSum);
        qSum[1] = num[1];
        FOR(i, 2, n) {
            qSum[i] = qSum[i-1] + num[i];
        }

        LL res = solve();
        if(res > n || res == inf) printf("0\n");
        else printf("%lld\n", res);
    }


    return 0;
}

/*

10 15
5 1 3 5 10 7 4 9 2 8
5 11
1 2 3 4 5
10 100
-1 -2 -3 -4 -5 -6- -7 -8 -9 -10

*/
