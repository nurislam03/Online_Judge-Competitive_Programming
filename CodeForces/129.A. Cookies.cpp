#include <iostream>
using namespace std;

int main()
{
    int n,x,sum = 0,Even = 0 , Odd = 0;
    cin >> n;
    for( int i = 1 ; i <= n ; i++ )
    {
        cin >> x;
        sum += x;
        if( x % 2 == 0 ) Even++;
        else Odd++;
    }
    if( sum % 2 == 0 ) cout << Even << endl;
    else cout << Odd << endl;

    return 0;
}
