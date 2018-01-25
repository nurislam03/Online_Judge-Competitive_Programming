#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

long long nCr(int n, int r)
{
    long long res = 1;

    for(int i = 1; i <= r; i++)
        res = (res * n--) / i;

    return res;
}

int main()
{
    int n,r;
    while(scanf("%d %d",&n,&r))
    {
        if(!n && !r)
            break;

        if((n-r) < r)
            r = n - r;

        long long ans = nCr(n,r);
        cout << ans << endl;
    }
    return 0;
}
