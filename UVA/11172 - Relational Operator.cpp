#include <iostream>
using namespace std;

int main()
{
    int T,a,b;
    cin >> T;
    for( int i = 1 ; i <= T ; i++ )
    {
        cin >> a >> b;
        if( a == b ) cout << "=" << endl;
        else if( a > b ) cout << ">" << endl;
        else cout << "<" << endl;
    }
    return 0;
}
