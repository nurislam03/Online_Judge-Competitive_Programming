
#include <stdio.h>
#include <math.h>

int main()
{
	double p;
	int N;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		scanf("%lf",&p);
		printf("%.0lf\n", pow(p, 1 / 2.0));

		if(i != N ) printf("\n");
	}

	return 0;
}
