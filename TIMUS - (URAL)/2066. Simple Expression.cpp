#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
#include <cmath>
#include <set>
using namespace std;
//int rr[100000+10] = {0};
//int bb[100000+10] = {0};


int solve(int a, int b, int c)
{
    int res = 100000000;
    res = min(res, (a-b-c));
    res = min(res, (a-b+c));
    res = min(res, (a-b*c));

    res = min(res, (a+b+c));
    res = min(res, (a+b-c));
    res = min(res, (a+b*c));

    res = min(res, (a*b*c));
    res = min(res, (a*b+c));
    res = min(res, (a*b-c));

    return res;
}

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int ans = 10000000;
    ans = min(ans, solve(a,b,c));
    ans = min(ans, solve(a,c,b));

    ans = min(ans, solve(b,c,a));
    ans = min(ans, solve(b,a,c));

    ans = min(ans, solve(c,a,b));
    ans = min(ans, solve(c,b,a));

    cout << ans << endl;
    return 0;
}
