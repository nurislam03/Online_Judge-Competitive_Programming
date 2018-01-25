#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
#define ULL unsigned long long
#define LL long long
#define sz 10000



int main()
{
    LL a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    LL ans = max(a,max(b,c));
    cout << ans << endl;

    return 0;
}
