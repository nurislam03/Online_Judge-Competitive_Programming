#include <iostream>
using namespace std;

int main()
{
    int T,amount,res = 0;
    string a;
    cin >> T;

    for( int i = 1 ; i <= T ; i++ )
    {
        cin >> a;
        if( a[0] == 'd' )
        {
            cin >> amount;
            res += amount;
        }
        else cout << res << endl;
    }
    return 0;
}
