#include <iostream>
using namespace std;

int main()
{
    int n,m,x,k,bus = 0 ;
    cin >> n >> m;

    k = m;
    for( int i = 1 ; i <= n ; i++ )
    {
        cin >> x;
        if( k - x >= 0 ) k -= x;
        else
        {
            bus++;
            k = m;
            k -= x;
        }
    }

    if( k != m ) bus++;
    cout << bus << endl;
    return 0;
}
