#include <iostream>
using namespace std;

int main()
{
    long long t,s,n,temp;
    cin >> t >> s >> n;
    temp = s + 1;

    if( t == n ) cout << "YES" << endl;
    else if( n < s || n < t  ) cout << "NO" << endl;
    else if( n < (t + s) ) cout << "NO" << endl;

    else
    {
        n -= t;
        temp = ( n % s );
        if( (temp == 0) || ( temp == 1 ) ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
