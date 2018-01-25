#include <iostream>
using namespace std;

int main()
{
    int n,m,a,b,res;
    cin >> n >> m >> a >> b;

    int k = a * m;

	if( k <= b ) res = a * n;
	else
	{
		int Temp1 = ( n / m ) * b + ( n % m ) * a;
		int Temp2 = ( n / m ) * b + b;
		res = min( Temp1 , Temp2 );
	}
    cout << res << endl;
    return 0;
}
