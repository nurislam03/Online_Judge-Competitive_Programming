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
#define PI              acos(-1.0)
#define eps             1e-9
#define SIZE            100
#define INF             (1<<30)
#define MOD             1000000007
//=======// Done With The Shortcut Stuffs! Now Let's Code! //=======//
int lost[SIZE+5][SIZE+5];
int direction[] = {'N', 'E', 'S', 'W'};
int dirX[] = {0, 1, 0, -1};
int dirY[] = {1, 0, -1, 0};
int row, col, fx, fy, currDir, len;
char nextStep[SIZE+5];


bool IsValid(int a, int b){
    return((a <= row && a >= 0) && (b <= col && b >= 0)) ? true:false;
}


bool nextMove(int i, int x, int y, int d)
{
    fx = x; fy = y; currDir = d;
    if(i == len) return true;

    if(nextStep[i] == 'R') return nextMove(i+1, x, y, (d+1)%4);
    else if(nextStep[i] == 'L') return nextMove(i+1, x, y, (d+3)%4);
    else
    {
        int fx = x + dirX[d];
        int fy = y + dirY[d];
        if(IsValid(fx, fy)) return nextMove(i+1, fx, fy, d);
        else
        {
            if(lost[x][y]) return nextMove(i+1, x, y, d);
            else
            {
                lost[x][y] = true;
                return false;
            }
        }
    }
}


int main()
{
    //read("input.txt");
    //write("output.txt");
    memset(lost, false, sizeof lost);

    scanf("%d %d",&row, &col);
    char initDir;
    while(scanf("%d %d %c",&fx,&fy,&initDir) != EOF)
    {
        scanf("%s",nextStep);
        len = strlen(nextStep);

        for(int i =0; i < 4; i++){
            if(initDir == direction[i]) currDir = i;
        }

        bool ans = nextMove(0, fx, fy, currDir);

        printf("%d %d %c",fx, fy, direction[currDir]);
        if(!ans) printf(" LOST\n");
        else printf("\n");
    }


    return 0;
}
