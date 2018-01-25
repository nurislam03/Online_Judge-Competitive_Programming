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
#define SIZE            100005
#define INF             (1<<30)
//#define MOD             1000000007
//=======// Done With The Shortcut Stuffs! Now Let's Code! //=======//

int MOD;
struct matrix{
    LL m[2][2];
};

matrix multiply(matrix a, matrix b)
{
    matrix t;
    for(int r = 0; r<2; r++)
    {
        for(int c = 0; c<2; c++)
        {
            t.m[r][c] = 0;
            for(int k = 0; k<2; k++)
            {
                t.m[r][c] += (a.m[r][k] * b.m[k][c]);
                t.m[r][c] %= MOD;
            }
        }
    }

    return t;
}

matrix bigMod(matrix mat, LL p)
{
    if(p == 1) return mat;
    if(p%2 == 1){
        return multiply(mat, bigMod(mat, p-1));
    } else {
        matrix res = bigMod(mat, p/2);
        return multiply(res, res);
    }
}


LL a, b, n, mm;
matrix bMat,rMat,A;

void initMat(){
        bMat.m[0][0] = 1;
        bMat.m[0][1] = 1;
        //bMat.m[0][2] = ;
        //bMat.m[0][3] = 1;

        bMat.m[1][0] = 1;
        bMat.m[1][1] = 0;
        //bMat.m[1][2] = 0;
        //bMat.m[1][3] = 0;

        //bMat.m[2][0] = 0;
        //bMat.m[2][1] = 1;
        //bMat.m[2][2] = 0;
        //bMat.m[2][3] = 0;

        //bMat.m[3][0] = 0;
        //bMat.m[3][1] = 0;
        //bMat.m[3][2] = 0;
        //bMat.m[3][3] = 1;

        A.m[0][0] = b;
        A.m[1][0] = a;
        //A.m[2][0] = 0;
        //A.m[3][0] = 0;
}

int main()
{
    //read("input.txt");
    //write("output.txt");

    while(scanf("%lld %lld",&n, &mm) != EOF)
    {
        b = 1, a = 0; // for this problem a and b always fixed.

        initMat();
        MOD = 1;
        for(int i = 0; i < mm; i++) MOD *= 2;


        if (n < 2){
            printf("0\n");
        }
        else{
            rMat = bigMod(bMat, n-1);
            rMat = multiply(rMat, A);

            long long nthVal = rMat.m[0][0];
            printf("%lld\n",nthVal%MOD);
        }
    }
    return 0;
}
