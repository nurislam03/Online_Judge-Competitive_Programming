#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <cstring>

using namespace std;
#define ULL unsigned long long


/*
// cheaking :)

ULL BigMod(ULL B, ULL P, ULL M )
{
    if( P == 0 ) return 1;
    if( P == 1 ) return B % M;

    ULL halfans = BigMod(B ,P/2, M);

    if( (P % 2) == 0 )
        return (halfans * halfans) % M;

    return
        (halfans * halfans * BigMod(B ,1 ,M) % M) % M;
}
*/

int main()
{
    long long n;
    cin >> n;

    //long long ans = BigMod(5, n, 100);
    //cout << ans << endl;
    cout << 25 << endl;

    return 0;
}
