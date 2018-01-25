#include <iostream>
#include <sstream>
#include <string>

using namespace std;
int a[100];


int gcd( int a , int b )
{
    if( b == 0 ) return a;
    return gcd( b , a % b );
}

int main()
{
	int T;
	cin >> T;

    string s,fake;
	getline(cin,fake);

	while(T--)
    {
        getline(cin,s);

        int ans = 0,N = 0;

        istringstream is(s);
		while(is >> a[N]) ++N;

		for(int i = 0; i < N; i++)
        {
            for(int j = i+1; j < N; j++)
				ans = max(ans, gcd(a[i],a[j]));
        }

		cout << ans << endl;
	}

	return 0;
}
