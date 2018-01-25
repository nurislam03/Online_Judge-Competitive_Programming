#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
#define ULL unsigned long long


double nCr(double p,double q,double r,double s)
{
	double res = 1.0;

    q = min(q, p-q);
    s = min(s, r-s);

    int i = 1, j = 1;
	while(i <= q || j <= s)
	{
        if(i <= q)
        {
            res = (res * p) / double(i);
            p--; i++;
        }

        if(j <= s)
        {
            res = (res * double(j)) / double(r);
            r--; j++;
        }
	}

	return res;
}



int main()
{
	double p,q,r,s;

	while(scanf("%lf %lf %lf %lf",&p,&q,&r,&s) != EOF)
	{
		double ans1,ans2,ans;

        ans1 = nCr(p,q,r,s);
        //ans2 = nCr(r,s);

        //ans = (ans1/ans2);

		printf("%.5f\n",ans1);
	}

	return 0;
}
