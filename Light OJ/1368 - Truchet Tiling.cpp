/*==================================================================
Name        : Nur Islam
Email       : nurislam0333@gmail.com
University  : North South University (NSU)
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
#define SIZE            205
#define INF             (1<<30)
#define MOD             1000000007
//=======// Done With The Shortcut Stuffs! Now Let's Code! //=======//
int row, col;
char mat[SIZE+10][SIZE+10];
int visited[SIZE+10][SIZE+10][8];
bool IsValid(int a, int b){
    return ((a < row && a >= 0) && (b < col && b >= 0)) ? true:false;
}

double DFS(int pos_x , int pos_y , int region)
{
    //cout << "X = " << pos_x << " Y = " << pos_y << " Reg = " << region << endl ;
    if(visited[pos_x][pos_y][region] != 0)
    {
        return 0.00;
    }
    else
    {
        visited[pos_x][pos_y][region] = 1 ;
    }

    double answer = 0.0;

    if(region == 1 || region == 3 || region == 4 || region == 5)
    {
        answer +=  PI / 4.00;
    }
    else
    {
        answer += 4.00 - PI / 2.00;
    }

    int up = -1 , down = -1 , left =-1 , right=-1 ;

    for(int i = 0; i < 4; i++)
    {
        int xx = pos_x + fx4[i];
        int yy = pos_y + fy4[i];

        if(IsValid(xx, yy) == true)
        {
            if(i == 0) up = mat[xx][yy] - '0';
            else if(i == 1) right = mat[xx][yy] - '0';
            else if(i == 2) down = mat[xx][yy] - '0';
            else if(i == 3) left = mat[xx][yy] - '0';
        }
    }

    if(region == 1)
    {
        if(left != -1)
        {
            if(left == 0)
            {
                answer += DFS(pos_x + fx4[3] , pos_y + fy4[3] , 2);
            }
            else
            {
                answer += DFS(pos_x + fx4[3] , pos_y + fy4[3] , 5);
            }
        }
        if(up != -1)
        {
            if(up == 0)
            {
                answer += DFS(pos_x + fx4[0] , pos_y + fy4[0] , 2);
            }
            else
            {
                answer += DFS(pos_x + fx4[0] , pos_y + fy4[0] , 4);
            }
        }

    }
    else if(region == 2)
    {
        if(up != -1)
        {
            if(up == 0)
            {
                answer += DFS(pos_x + fx4[0] , pos_y + fy4[0] , 3);
            }
            else
            {
                answer += DFS(pos_x + fx4[0] , pos_y + fy4[0] , 6);
            }
        }
        if(left != -1)
        {
            if(left == 0)
            {
                answer += DFS(pos_x + fx4[3] , pos_y + fy4[3] , 3);
            }
            else
            {
                answer += DFS(pos_x + fx4[3] , pos_y + fy4[3] , 6);
            }
        }
        if(right != -1)
        {
            if(right == 0)
            {
                answer += DFS(pos_x + fx4[1] , pos_y + fy4[1] , 1);
            }
            else
            {
                answer += DFS(pos_x + fx4[1] , pos_y + fy4[1] , 6);
            }
        }
        if(down != -1)
        {
            if(down == 0)
            {
                answer += DFS(pos_x + fx4[2] , pos_y + fy4[2] , 1);
            }
            else
            {
                answer += DFS(pos_x + fx4[2] , pos_y + fy4[2] , 6);
            }
        }
    }
    else if(region == 3)
    {
        if(right != -1)
        {
            if(right == 0)
            {
                answer += DFS(pos_x + fx4[1] , pos_y + fy4[1] , 2);
            }
            else
            {
                answer += DFS(pos_x + fx4[1] , pos_y + fy4[1] , 4);
            }
        }
        if(down != -1)
        {
            if(down == 0)
            {
                answer += DFS(pos_x + fx4[2] , pos_y + fy4[2] , 2);
            }
            else
            {
                answer += DFS(pos_x + fx4[2] , pos_y + fy4[2] , 5);
            }
        }
    }
    else if(region == 4)
    {
        if(left != -1)
        {
            if(left == 0)
            {
                answer += DFS(pos_x + fx4[3] , pos_y + fy4[3] , 3);
            }
            else
            {
                answer += DFS(pos_x + fx4[3] , pos_y + fy4[3] , 6);
            }
        }
        if(down != -1)
        {
            if(down == 0)
            {
                answer += DFS(pos_x + fx4[2] , pos_y + fy4[2] , 1);
            }
            else
            {
                answer += DFS(pos_x + fx4[2] , pos_y + fy4[2] , 6);
            }
        }
    }
    else if(region == 5)
    {
        if(up != -1)
        {
            if(up == 0)
            {
                answer += DFS(pos_x + fx4[0] , pos_y + fy4[0] , 3);
            }
            else
            {
                answer += DFS(pos_x + fx4[0] , pos_y + fy4[0] , 6);
            }
        }
        if(right != -1)
        {
            if(right == 0)
            {
                answer += DFS(pos_x + fx4[1] , pos_y + fy4[1] , 1);
            }
            else
            {
                answer += DFS(pos_x + fx4[1] , pos_y + fy4[1] , 6);
            }
        }
    }
    else if(region == 6)
    {
        if(left != -1)
        {
            if(left == 0)
            {
                answer += DFS(pos_x + fx4[3] , pos_y + fy4[3] , 2);
            }
            else
            {
                answer += DFS(pos_x + fx4[3] , pos_y + fy4[3] , 5);
            }
        }
        if(down != -1)
        {
            if(down == 0)
            {
                answer += DFS(pos_x + fx4[2] , pos_y + fy4[2] , 2);
            }
            else
            {
                answer += DFS(pos_x + fx4[2] , pos_y + fy4[2] , 5);
            }
        }
        if(right != -1)
        {
            if(right == 0)
            {
                answer += DFS(pos_x + fx4[1] , pos_y + fy4[1] , 2);
            }
            else
            {
                answer += DFS(pos_x + fx4[1] , pos_y + fy4[1] , 4);
            }
        }
        if(up != -1)
        {
            if(up == 0)
            {
                answer += DFS(pos_x + fx4[0] , pos_y + fy4[0] , 2);
            }
            else
            {
                answer += DFS(pos_x + fx4[0] , pos_y + fy4[0] , 4);
            }
        }
    }
    return answer ;
}

double solve(int x , int y)
{
    int pos_x , pos_y , type , region;

    //Finding the border point

    if(x%2 == 0 && y%2 != 0)
    {
        return 0.0000;
    }
    else if(x%2 != 0 && y%2 == 0)
    {
        return 0.0000;
    }

    //Finding the middle point
    double answer ;
    if(x%2 != 0 && y %2 != 0)
    {
        pos_x = x / 2 ;
        pos_y = y / 2 ;
        type =  mat[pos_x][pos_y] - '0';

        if(type == 0)
        {
            region = 2 ;
            answer =  DFS(pos_x , pos_y , region);
        }
        else
        {
            region = 6 ;
            answer =  DFS(pos_x , pos_y , region);
        }
    }
    else
    {
        pos_x = x / 2 ;
        pos_y = y / 2 ;

        if(IsValid(pos_x , pos_y) == true)
        {
            //debug1(781698);
            type =  mat[pos_x][pos_y] - '0';

            if(type == 0)
            {
                region = 1 ;
            }
            else
            {
                region = 6 ;
            }
            answer =  DFS(pos_x , pos_y , region);
        }
        else if(IsValid(pos_x -1 , pos_y) == true)
        {
            //debug2(123);
            type =  mat[pos_x-1][pos_y] - '0';

            if(type == 0)
            {
                region = 2 ;
            }
            else
            {
                region = 4 ;
            }
            answer =  DFS(pos_x-1 , pos_y , region);
        }
        else if(IsValid(pos_x  , pos_y-1) == true)
        {
            //debug3(12312);
            type =  mat[pos_x][pos_y-1] - '0';

            if(type == 0)
            {
                region = 2 ;
            }
            else
            {
                region = 5 ;
            }
            answer =  DFS(pos_x , pos_y-1 , region);
        }
        else if(IsValid(pos_x -1 , pos_y -1) == true)
        {
            //debug1(1231211);
            type =  mat[pos_x-1][pos_y-1] - '0';

            if(type == 0)
            {
                region = 3 ;
            }
            else
            {
                region = 6 ;
            }
            answer =  DFS(pos_x-1 , pos_y-1 , region);
        }

    }



    return answer ;

}

int main()
{
    //read("input.txt");
    //write("output.txt");
    int tCase;
    scanf("%d",&tCase);

    for(int T = 1; T <= tCase; ++T)
    {

        int query, x, y;
        scanf("%d %d",&row, &col);

        for(int i = 0; i < row; i++){
            scanf("%s",mat[i]);
        }
        printf("Case %d:\n", T);
        scanf("%d",&query);
        //memset(visited , 0 , sizeof(visited));
        for(int i = 1; i <= query; ++i)
        {
            memset(visited , 0 , sizeof(visited));
            scanf("%d %d",&x,&y);
            /*
            int newX = (x/2);
            int newY = (y/2);
            int Type = mat[newX][newY];
            */

            double answer = solve(x , y);

            //cout << answer << endl ;
            printf("%f\n",fabs(answer));
            //cout << Type - '0' << endl;
        }

    }


    return 0;
}
