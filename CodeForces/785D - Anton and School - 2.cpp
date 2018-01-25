#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>

using namespace std;
#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)
#define all(ar) ar.begin(), ar.end()

#define LL long long
#define sz 200000
#define mod 1000000007
int sumOpen[sz+10];
int sumClose[sz+10];
typedef pair<LL, LL> pii;
LL fac[sz+10];


void Q_sum(string s)
{
    memset(sumOpen, 0, sizeof(sumOpen));
    memset(sumClose, 0, sizeof(sumClose));

    if(s[0] == '(') sumOpen[0] += 1;
    if(s[s.size()-1] == ')') sumClose[s.size()-1] += 1;

    for(int i = 1; s[i]; i++)
    {
        if(s[i] == '(') sumOpen[i] = sumOpen[i-1]+1;
        else sumOpen[i] = sumOpen[i-1];
    }
    for(int i = s.size()-2; i >= 0; i--)
    {
        if(s[i] == '(') sumClose[i] = sumClose[i+1];
        else sumClose[i] = sumClose[i+1]+1;
    }

}

void gen_factorial(int n)
{
    fac[0] = 1;
    for(int i = 1; i <= n; ++i)
        fac[i] = (fac[i-1] * i) % mod;
}

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


LL nCr_with_MOD(int n, int r)
{
    if(n < r) return 0;
    else if(n == r || r == 0) return 1;

    LL deno = (fac[n-r] * fac[r]) % mod;
    LL deno_inv = modular_Inverse(deno, mod);
    LL res = (fac[n] * deno_inv) % mod;

    return res;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //read("input.txt");
    //write("output.txt");

    string s;
    cin >> s;

    Q_sum(s);
    gen_factorial(200010);

    LL ans = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == ')') continue;

        int n = (sumOpen[i]-1)+sumClose[i];
        int r = (sumClose[i]-1);

        ans += nCr_with_MOD(n, r);
        ans %= mod;
    }
    printf("%lld\n",ans);

    return 0;
}
