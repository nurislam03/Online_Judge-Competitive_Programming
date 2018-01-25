#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
    int T,n,res;
    cin >> T;

    for( int i = 1 ; i <= T ; i++ )
    {
        cin >> n;

        n *= 567;
        n /= 9;
        n += 7492;
        n *= 235;
        n /= 47;
        n -= 498;

        res = ( n % 100 );
        res /= 10;
        cout << abs(res) << endl;
    }
    return 0;
}
