#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>
#include <sstream>

using namespace std;
#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)
#define all(ar) ar.begin(), ar.end()
#define sz 1000
#define LL long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //read("input.txt");
    //write("output.txt");

    long long n;
    while(scanf("%lld",&n) && n >= 0)
    {
        long long ans = (n*(n+1)/2)+1;
        printf("%lld\n",ans);
    }

    return 0;
}
