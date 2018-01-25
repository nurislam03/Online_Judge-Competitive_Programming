/*
    nPr = nCr * r!;
    and nCr = ( n! / r!*(n-r)! );
    So, nPr = ( n! / r!*(n-r)! ) * r!
            = ( n! / (n-r)! )

    now, ( n! / (n-r)! ) == (r+1)*(r+2)*....n.
*/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>
#include <sstream>

using namespace std;
#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)
#define all(ar) ar.begin(), ar.end()

#define LL long long
#define ULL unsigned long long
#define sz 20000000


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //read("input.txt");
    //write("output.txt");


    LL n,m;
    while(scanf("%lld %lld",&n, &m) != EOF)
    {
        LL val = n-m+1;
        LL res = 1;
        /*
            NOTE: in this porblem,if i run this loop
                  like, for(int i = val; i <= n; i++)
                  then it will get Worg Answer !!!
        */
        for(int i = n; i >= val; i--)
        {
            res *= i;
            while(res%10 == 0) res /= 10;

            res %= 1000000000;
        }
        LL Digit = res%10;
        printf("%lld\n",Digit);
    }

    return 0;
}
