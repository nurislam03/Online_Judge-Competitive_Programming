#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int n;
    while( scanf("%d",&n))
    {
        if( n == 0 ) break;
        int res = ( n * ( n + 1 ) * ( 2*n + 1) )/6;
        cout << res << endl;
    }
	return 0;
}
