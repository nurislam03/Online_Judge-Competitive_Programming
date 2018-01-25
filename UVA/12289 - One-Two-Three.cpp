#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for( int i = 1 ; i <= t ; i++ )
    {
        string x;
        cin >> x;
        if( x.size() == 5 ) cout << "3" << endl;
        else
        {
            if( (x[0] == 'o' || x[1] == 'n') && (x[1] == 'n' || x[2] == 'e') ) cout << "1" << endl;
            else cout << "2" << endl;
        }
    }
    return 0;
}
