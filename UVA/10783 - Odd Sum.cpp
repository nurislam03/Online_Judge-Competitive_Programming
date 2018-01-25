#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for( int t = 1 ; t <= T ; t++ )
    {
        int n1,n2,res = 0;
        cin >> n1;
        cin >> n2;
        for( int i = n1 ; i <= n2 ; i++ )
        {
            if( i % 2 != 0 ) res += i;
        }
        cout << "Case " << t << ": " << res << endl;
    }
    return 0;
}
