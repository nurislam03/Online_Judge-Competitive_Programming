#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int Row[1010] = {0};
int Col[1010] = {0};
char Matrix[1010][1010];

int main()
{
	int n,m,tot = 0;
    string x;
    cin >> n >> m;

	for( int i = 0 ; i < n ; i++ )
	{
		cin >> x;
		for( int j = 0 ; j < m ; j++ )
		{
			Matrix[i][j] = x[j];
			if( x[j] == '*' )
			{
				Row[i] += 1;
				Col[j] += 1;
				tot++;
			}
		}
	}
	
	for( int i = 0 ; i < n ; i++ )
	{
		for( int j = 0 ; j < m ; j++ )
		{
			int temp = Row[i] + Col[j];
			if( Matrix[i][j] == '*' ) temp--;

			if( temp == tot )
			{
				cout << "Yes" << endl;
				cout << ++i << " " << ++j << endl;
				return 0;
			}
		}
    }
	cout << "NO" << endl;
	return 0;
}
