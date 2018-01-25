#include <stdio.h>
#include <iostream>
#include <map>

using namespace std;

int main()
{
	int T, K, M, l;
	map <char, double> Map;

	char c;
	double value, total;

	scanf("%d", &T);
	for( int t = 1 ; t <= T ; t++ )
	{
		scanf("%d", &K);
		for(int i = 0; i < K; i++)
		{
			cin >> c >> value;
			Map[c] = value;
		}

		scanf("%d", &M);
		cin.ignore();

		string line;
		total = 0;
		for(int i = 0; i < M; i++)
		{
			line = "";
			getline(cin, line);
			l = line.size();

			for(int j = 0; j < l; j++)
			{
				if( Map[line[j]] ) total += Map[line[j]];
				else total += 0;

			}
		}
		total /= 100.0;
		printf("%0.2lf$\n", total);
		Map.clear();
	}
	return 0;
}

/*
1
7
a 3
W 10
A 100
, 10
k 7
. 3
I 13
7
ACM International Collegiate Programming Contest (abbreviated
as ACM-ICPC or just ICPC) is an annual multi-tiered competition
among the universities of the world. The ICPC challenges students
to set ever higher standards of excellence for themselves
through competition that rewards team work, problem analysis,
and rapid software development.
From Wikipedia.

*/
