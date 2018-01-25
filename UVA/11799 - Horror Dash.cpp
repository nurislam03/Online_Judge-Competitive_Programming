#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for( int i = 1 ; i <= T ; i++ )
    {
        int n,x,res = 0;
        cin >> n;
        for( int j = 1 ; j <= n ; j++ )
        {
            cin >> x;
            if( x >= res ) res = x;
        }
        cout << "Case " << i << ": " << res << endl;
    }
    return 0;
}
