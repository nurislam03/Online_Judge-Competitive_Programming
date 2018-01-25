
/*
 	status :   :P
*/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;
#define ULL unsigned long long
#define SIZE 500
#define mod 1000000007

ULL DP[SIZE+10][SIZE+10][SIZE+10];

ULL B_toThePower_nCr(int b, int n, int r)
{
    // (r==0) this condition must be appear before (n==0)
    if(r == 0) return DP[b][n][r] = b % (mod-1);
    if(n == 0) return DP[b][n][r] = 1 % (mod-1);

    if(DP[b][n][r]) return DP[b][n][r] % (mod-1);

    return DP[b][n][r] = (B_toThePower_nCr(b, n-1, r) * B_toThePower_nCr(b, n-1, r-1)) % (mod-1);
}



ULL BigMod(ULL B, ULL P, ULL M)
{
    if(B == 0 && P == 0) return 1 % M;
    if(P == 0) return 1 % M;
    if(P == 1) return B % M;

    ULL halfans = BigMod(B ,P/2, M);

    if( (P % 2) == 0 )
        return (halfans * halfans) % M;

    return
        (halfans * halfans * BigMod(B ,1 ,M) % M) % M;
}



int main()
{
	int a, b, n, tC;
    scanf("%d",&tC);


	while(tC--)
	{
        scanf("%d %d %d",&a,&b,&n);

        ULL B_toThePower_Exp, ans = 1;
        for(int i = 0; i <= n; ++i)
        {
            B_toThePower_Exp = B_toThePower_nCr(b, n, i);

            ans *= (B_toThePower_Exp * B_toThePower_Exp) % (mod-1);
            ans %= (mod-1); //cout << ans << endl;
        }

        ans = BigMod(a, ans, mod) % mod;

		cout << ans << endl;

	}

	return 0;
}
