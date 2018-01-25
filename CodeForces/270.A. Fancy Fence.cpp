#include <iostream>
using namespace std;

int main()
{
    int t,a;
    cin >> t;
    for( int i = 1 ; i <= t ; i++ )
    {
        cin >> a;

        if( a == 45 || a == 60 || a == 90 || a == 120 )
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
