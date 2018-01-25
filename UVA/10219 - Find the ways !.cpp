/*
nCr == nC(n-r)
Exp : 10 C 2  ==  10 C 8
10 C 2 == 10! / (10-2)! * 2!
10 C 8 == 10! / (10-8)! * 8!

 	status : incompleted :P

//=========================*/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
#define ULL unsigned long long



double nCr(ULL n, ULL r)
{
	double res = 1;

	if (n-r < r)
		r = n - r;

	for (double i = 1; i <= r; i++)
	{
		res = (res * n) / i;
		n--;
	}

	return res;
}



int main()
{
	ULL n, r;

	while(scanf("%llu %llu",&n,&r) != EOF)
	{
		double ans = nCr(n, r);
		cout << ans << endl;

		ans = log10(ans);
		ans = int(ans + 1);
		cout << ans << endl;
	}

	return 0;
}
