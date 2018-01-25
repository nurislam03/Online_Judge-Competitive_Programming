#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x;
    int k;
    cin >> x;

    for( int i = 0 ; i < x.size() ; i++ )
    {
        k = x[i] - '0';
        if( i == 0 && ( 9 - k ) == 0 ) continue;
        if( 9 - k < k ) k = 9 - k;
        x[i] = k + '0';
    }

    cout << x << endl;
    return 0;
}
