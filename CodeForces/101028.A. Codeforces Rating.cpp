#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	// your code goes here
	int T,N,FinalRating,x,tot;
	cin >> T;
	for( int t = 1 ; t <= T ; t++ )
	{
		scanf("%d %d ", &N,&FinalRating);
		tot = 0;
		for( int i = 1 ; i <= N ; i++ )
		{
			scanf("%d",&x);
			tot += x;
		}
		if( tot+1500 == FinalRating ) printf("Correct\n");
		else printf("Bug\n");
	}
	return 0;
}
