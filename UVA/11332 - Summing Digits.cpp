#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

int solve( int num )
{
    if (!(num / 10)) return num;
    int sum = num % 10;
    while ((num /= 10)) sum += (num % 10);
    return solve(sum);
}

int main()
{
    int n,res;
    while(1)
    {
        cin >> n;
        if( n == 0 ) break;
        if( n < 10 ) cout << n << endl;
        else cout << solve(n) << endl;
    }
    return 0;
}
