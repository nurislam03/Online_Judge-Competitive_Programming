#include <iostream>
#include <cstdio>

using namespace std;
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
    int t;
    scanf("%d",&t);

    while(t--)
    {
        ULL x,y,n,res;
        scanf("%llu %llu %llu",&x,&y,&n);
        res = BigMod(x, y, n);

        cout << res << endl;
    }

    scanf("%d",&t);
    return 0;
}
