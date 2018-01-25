#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;
#define LL long long
#define ULL unsigned long long



int main()
{

    LL n;
    scanf("%lld",&n);

    while(n--)
    {
        LL x;
        scanf("%lld",&x);

        LL res = (x*(x+1))/2;
        cout << res << endl;
    }

    return 0;
}
