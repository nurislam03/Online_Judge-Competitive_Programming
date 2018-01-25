/*
nCr == nC(n-r)
Exp : 10 C 2  ==  10 C 8
10 C 2 == 10! / (10-2)! * 2!
10 C 8 == 10! / (10-8)! * 8!
//=========================*/

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;


long long nCr(long long n, long long r)
{
	long long res = 1;

	if (n-r < r)
		r = n - r;

	for (int i = 1; i <= r; i++)
	{
		res = (res * n) / i;
		n--;
	}

	return res;
}

int main()
{
	long long n, r;

	while(scanf("%lld%lld",&n,&r))
	{
		if (!n && !r) break;

		long long ans = nCr(n, r);
		cout << n << " things taken " << r << " at a time is " << ans << " exactly." << endl;
	}

	return 0;
}
