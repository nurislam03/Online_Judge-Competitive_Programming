#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        int x,k,p,q;
        cin >> x >> k;

        if (x % k)
            printf("%d %d\n", -x, x);

        else
            printf("0 %d", k);
    }
    return 0;
}
