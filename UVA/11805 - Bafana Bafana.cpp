#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int T;
	cin>>T;

	for( int t = 1 ; t <= T ; t++ )
	{
		int N,K,P;
		cin >> N >> K >> P;
		if( (K+P) % N == 0 ) printf("Case %d: %d\n",t,N);
		else printf("Case %d: %d\n",t,(K+P)%N);
	}
	return 0;
}
