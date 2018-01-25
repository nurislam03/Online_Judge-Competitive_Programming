#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int tC = 10;
    long long n = 6;
    double sum;

    while(tC)
    {
        sum = sqrt((n*n + n) / 2);

        int x = sum;
        if(sum == x)
        {
            printf("%10d%10lld\n", x, n);
            tC -= 1;
        }
        n += 1;
    }

    return 0;
}
