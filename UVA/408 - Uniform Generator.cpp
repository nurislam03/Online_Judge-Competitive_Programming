#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>

using namespace std;

#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)
#define all(ar) ar.begin(), ar.end()
#define LL long long
#define Size 100005
#define INF (1<<30)
#define MOD 131071

int GCD( int a , int b )
{
    if( b == 0 ) return a;
    return GCD( b , a % b );
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //read("input.txt");
    //write("output.txt");

    int step, mod;
    while (scanf("%d%d",&step,&mod) != EOF)
    {
        if(GCD(step,mod) == 1)
            printf("%10d%10d    Good Choice\n\n",step,mod);
        else printf("%10d%10d    Bad Choice\n\n",step,mod);
    }

    return 0;
}
