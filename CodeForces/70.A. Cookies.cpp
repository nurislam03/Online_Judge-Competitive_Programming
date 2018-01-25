#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
#include <cmath>

using namespace std;
#define mod 1000003
#define ULL unsigned long long



ULL BigMod(ULL B, ULL P, ULL M )
{
    if( P == 0 ) return 1;
    if( P == 1 ) return B % M;

    ULL halfans = BigMod(B ,P/2, M);

    if( (P % 2) == 0 ) //return BigMod( B , P/2 , M);
        return (halfans * halfans) % M;

    //return BigMod( B , ( P/2 ) - 1 , M );
    return
        (halfans * halfans * BigMod(B ,1 ,M) % M) % M;
}




int main()
{
    long long n,ans;
    cin >> n;
    long long k = n - 1;
    if( n == 0)
    {
        cout << "1" << endl;
        return 0;
    }
    ans = BigMod(3,k,mod);
    ans = ans % mod;

     cout << ans << endl;
    return 0;
}
