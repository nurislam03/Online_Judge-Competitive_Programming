/*==================================================================
Name        : Nur Islam
UVa         : nurislam
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
#define SIZE            50
#define INF             (1<<30)
#define MOD             1000000007
//=======// Done With The Shortcut Stuffs! Now Let's Code! //=======//
vector <string> grid;
int row, col, fx, fy, currDir, len;
string line, nextCmnd;

int dirX[] = {-1, 0, 1,  0};
int dirY[] = { 0, 1, 0, -1};
int direction[] = {'N', 'E', 'S', 'W'};



void nextMove(int i, int x, int y, int d)
{
    fx = x; fy = y; currDir = d;
    if(i == len || nextCmnd[i] == 'Q') return;

    if(nextCmnd[i] == 'R') nextMove(i+1, x, y, (d+1)%4);
    else if(nextCmnd[i] == 'L') nextMove(i+1, x, y, (d+3)%4);
    else
    {
        int fx = x + dirX[d];
        int fy = y + dirY[d];

        if(grid[fx][fy] == '*') nextMove(i+1, x, y, d);
        else nextMove(i+1, fx, fy, d);
    }
}


int main()
{
    //read("input.txt");
    //write("output.txt");
    int tCase;
    scanf("%d",&tCase);
    while(tCase--)
    {
        scanf("%d %d",&row, &col);
        cin.ignore();
        grid.clear();
        nextCmnd = "";

        for(int i = 0; i < row; i++)
        {
            getline(cin, line);
            string newLine = "";

            for(int k = 0; k < col; ++k){
                if(line[k] == '*') newLine += '*';
                else newLine += '.';
            }
            grid.push_back(newLine);
        }

        scanf("%d %d",&fx,&fy);
        while(getline(cin, line))
        {
            // Remove all empty spaces.
            line.erase(remove(line.begin(), line.end(), ' '), line.end());
            nextCmnd += line;

            if(line[line.size()-1] == 'Q') break;
        }

        currDir = 0; // West.
        len = nextCmnd.size();

        nextMove(0, fx, fy, currDir);
        printf("%d %d %c\n",fx+1, fy+1, direction[currDir]);
        if(tCase) printf("\n");
    }

    return 0;
}

/*

1


7 8
********
* * * **
* *    *
* * ** *
* * *  *
*   * **
********
2 4
RRFLFF FFR
FF
RFFQ

*/
