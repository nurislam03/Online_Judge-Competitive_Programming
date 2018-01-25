#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;
#define ULL unsigned long long
#define LL long long
#define sz 1000
LL n,a,b,c;


ULL Solve(LL val)
{
    ULL res = 0;

    if(val == 1)
    {
        res = a;
        if(res > (b+c)) res = b+c;
        if(res > (c+c+c)) res = (c+c+c);

        return res;
    }
    else if(val == 2)
    {
        res = b;
        if(res > (a+a)) res = (a+a);
        if(res > (c+c)) res = (c+c);

        return res;
    }
    else if(val == 3)
    {
        ULL res = c;
        if(res > (a+a+a)) res = (a+a+a);
        if(res > (a+b)) res = a+b;

        return res;
    }

    return res;
}



int main()
{
    cin >> n >> a >> b >> c;
    ULL ans = 0;

    if( (n >= 4) && (n % 4 == 0))
    {
        cout << ans << endl;
        return 0;
    }

    LL tmp = n;
    while(tmp % 4 != 0) tmp++;

    tmp = (tmp - n);

    ans = Solve(tmp);
    cout << ans << endl;

    return 0;
}
