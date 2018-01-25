#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;
#define ULL unsigned long long
#define LL long long
#define sz 1000
ULL dp[50];

ULL Fibonacci(ULL n)
{
    if(n == 1) return 1;
    if(n == 2) return 3;
    if(dp[n] != -1) return dp[n];

    dp[n] = Fibonacci(n-1) + Fibonacci(n-2);
    return dp[n];
}

int main()
{
    ULL result;
    ULL nn,x;
    memset(dp, -1, sizeof(dp));

    cin >> nn;
    while(nn--)
    {
        cin >> x;
        result = Fibonacci(x);
        cout << result << endl;
    }


    return 0;
}
