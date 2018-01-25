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
#define PI              acos(-1.0)
#define eps             1e-9
#define SIZE            100005
#define INF             (1<<30)
#define MOD             1000000007
//=======// Done With The Shortcut Stuffs! Now Let's Code! //=======//
int a[1000+10];
int b[1000+10];
int d[1000+10];

int main()
{
    //read("input.txt");
    //write("output.txt");
    int n,x;
    scanf("%d",&n);
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    memset(d, 0, sizeof(d));

    for(int i = 0; i < n; i++)
    {
        scanf("%d",&x);
        a[i] = x;
    }

    int cnt = 0;
    int a1, b1, a2, b2;
    bool flag2 = true;

    for(int i = 0; i < n; i++)
    {
        scanf("%d",&x);
        b[i] = x;

        if(a[i] == b[i])
        {
            int kk = a[i];
            d[kk] += 1;
        }
        if(a[i] != b[i])
        {
            if(flag2 == true){
                a1 = a[i];  b1 = b[i];
                flag2 = false;
            }
            else {
                a2 = a[i];  b2 = b[i];
            }
        }
    }

    int tmp;
    if(cnt == 1)
    {
        for(int i = 0; i < n; i++)
        {
            if(a[i] == b[i]) tmp = a[i];
            else
            {
                for(int i = 1; i <= n; i++)
                {
                    if(d[i] == 0){
                        tmp = i;
                        break;
                    }
                }
            }
            if(i == 0) printf("%d",tmp);
            else printf(" %d",tmp);
        }
        printf("\n");
    }
    else
    {
        bool flag = true;
        int checker;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == b[i]) tmp = a[i];
            else
            {
                if(flag == true)
                {
                    if(d[a1] == 0 && d[b2] == 0){
                        tmp = a1;
                        checker = b2;
                    }
                    else{
                        tmp = b1;
                        checker = a2;
                    }
                    flag = false;
                }
                else tmp = checker;
            }
            if(i == 0) printf("%d",tmp);
            else printf(" %d",tmp);
        }
        printf("\n");
    }

    return 0;
}
