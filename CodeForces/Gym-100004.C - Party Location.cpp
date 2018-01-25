
/*
    Problem Link : http://codeforces.com/gym/100004
    Status       : accepted.
*/


#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>


using namespace std;
vector < double > v;
double XX[250],YY[250];
int pos;


double distance(double x, double y, int i)
{
	return ( (x-XX[i]) * (x-XX[i]) + (y-YY[i]) * (y-YY[i]) );
}


int solve(double x, double y)
{
	int cnt = 0;
	for(int i = 0; i < pos; i++)
	{
		if(distance(x, y, i) <= 6.25) cnt++;
	}
	return cnt;
}



int main()
{
    double a,b;
    pos = 0;

    while(scanf("%lf %lf",&a,&b) != EOF)
    {
        XX[pos] = a;
        YY[pos] = b;
        pos++;
    }

    for(int i = 0; i < pos; i++)
    {
       for(int j = 0; j < pos; j++)
       {
       		a = (XX[i] + XX[j]) / 2.0;
       		b = (YY[i] + YY[j]) / 2.0;

       		v.push_back(a);
       		v.push_back(b);
       }
    }


    int ans = 0, tmp = 0;
    for(int i = 0; i < v.size(); i += 2)
    {
    	tmp = solve(v[i], v[i+1]);
    	ans = max(ans, tmp);
    }

    cout << ans << endl;

    return 0;
}
