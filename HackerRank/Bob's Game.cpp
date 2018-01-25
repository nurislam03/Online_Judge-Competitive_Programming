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

//==================================================================//
#define fills(v,n)      fill(v.begin(), v.end(),n)
#define vsort(v)        sort(v.begin(), v.end())
#define asort(v,n)  	sort(a, a+n)

#define debug1(v1)      cout<<"1@ Debug Val 1 = "<<v1<<endl;
#define debug2(v2)      cout<<"   2@ Debug Num 2 = "<<v2<<endl;
#define debug3(v3)      cout<<"      3@ Debug Res 3 = "<<v3<<endl;

#define UB(v,a)         upper_bound(v.begin(), v.end(),a)-v.begin()
#define LB(v,a)         lower_bound(v.begin(), v.end(),a)-v.begin()

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
int dir8[8][2] = {{-1,0},{0,1},{1,0},{0,-1},{-1,-1},{1,1},{1,-1},{-1,1}};

const LL inf = 2147383647;
const LL mod = 1e9 + 7;
const double pi = 2 * acos ( 0.0 );
const double eps = 1e-9;
const int Size = 300;
///=========================  TEMPLATE ENDS HERE  ========================///

#define Size 1000

int N;
int DP[Size+10][Size+10];
char grid[Size+10][Size+10];


int dx[] = { 0, -1, -1};
int dy[] = {-1, -1,  0};

/*
bool isValid(int R,int C){
    if(R<0 || C<0 || R>=1055 || C>=1055) return false;
    return true;
}
*/

bool IsValid(int a, int b){
    return ((a < N && a >= 0) && (b < N && b >= 0)) ? true:false;
}

int call(int R, int C){
    //pf("Cur R: %d , C: %d\n",R,C);
    if(DP[R][C] != -1) return DP[R][C];

    vector<int> grundy;
    for(int i = 0; i < 3; i++){
        int nR = R + dx[i];
        int nC = C + dy[i];

        if(IsValid(nR, nC) == false || grid[nR][nC] == 'X') continue;
        grundy.pb(call(nR, nC));
    }

    sort(grundy.begin(), grundy.end());
    UNIQUE(grundy);
    int res = grundy.size();
    for(int i = 0;i<grundy.size();i++){
        if(grundy[i] != i){
            res = i;
            break;
        }
    }
    return DP[R][C] = res;
}



int main(){
    //read("input.txt");
    int nCase, x, y;
    scanf("%d",&nCase);

    for(int cs = 1; cs <= nCase; cs++)
    {
        memset(DP,-1, sizeof DP);
        scanf("%d",&N);

        for(int i = 0; i < N; i++){
            scanf("%s",grid[i]);
        }

        int initXor = 0;
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++){
                if(grid[i][j] != 'K') continue;
                initXor = initXor ^ call(i, j);
            }
        }


        int Bob_Win = 0;
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++){
                if(grid[i][j] != 'K') continue;

                int tmpXor = initXor ^ call(i, j);
                for(int k = 0; k < 3; k++){
                    x = i + dx[k];
                    y = j + dy[k];

                    if(IsValid(x, y) == false || grid[x][y] == 'X') continue;
                    int tmpResult = tmpXor ^ call(x, y);
                    if(tmpResult == 0) Bob_Win++;
                }
            }
        }

        if(Bob_Win > 0) printf("WIN %d\n",Bob_Win);
        else printf("LOSE\n");
    }
    return 0;
}
