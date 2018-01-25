#include <iostream>
using namespace std;

int main()
{
    int n,a,b,Mishka = 0,Chris = 0;
    cin >> n;

    for( int i = 1 ; i <= n ; i++ )
    {
        cin >> a >> b;
        if( a > b ) Mishka++;
        else if( b > a ) Chris++;
    }
    if( Mishka > Chris ) cout << "Mishka" << endl;
    else if( Chris > Mishka ) cout << "Chris" << endl;
    else cout << "Friendship is magic!^^" << endl;

    return 0;
}
