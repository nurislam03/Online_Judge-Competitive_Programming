#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;
#define LL long long


int main()
{
    LL d1,d2,d3;
    cin >> d1 >> d2 >> d3;

    LL tmp1,tmp2,tmp3,tmp4,ans;
    tmp1 = d1+d2+d3;
    tmp2 = d1+d1+d2+d2;
    tmp3 = d1+d3+d3+d1;
    tmp4 = d2+d3+d3+d2;

    ans = min(tmp1, tmp2);
    ans = min(ans, min(tmp3, tmp4));

    cout << ans << endl;
}
