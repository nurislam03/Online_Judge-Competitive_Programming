#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;
#define mx 1000000
#define mod 1000003
#define LL long long

typedef pair<LL, LL> pii;
LL fac[mx+10];


pii extended_euclid(LL a, LL b)
{
	if (b == 0)
		return pii(1, 0);

	pii d = extended_euclid(b, a % b);
    int x = d.first; int y = d.second;
	return pii(y, (x - y * (a / b)));
}


LL modular_Inverse(LL a, LL n)
{
	pii ret = extended_euclid(a, n);
    LL x = ret.first;
	return ((x % n) + n) % n;
}


void gen_factorial(int n)
{
    fac[0] = 1;
    for(int i = 1; i <= n; ++i)
        fac[i] = (fac[i-1] * i) % mod;
}



int main()
{
    int T,n,k;
    scanf("%d",&T);

    gen_factorial(mx);

    for(int t = 1; t <= T; ++t)
    {
        scanf("%d %d",&n,&k);

        LL deno,res;

        if(n < k) res = 0;
        else if(n == k || k == 0) res = 1;
        else
        {
            deno = (fac[n-k] * fac[k]) % mod;

            LL deno_inv = modular_Inverse(deno, mod);
            res = (fac[n] * deno_inv) % mod;
        }

        cout << "Case " << t << ": " << res << endl;
    }

    return 0;
}
