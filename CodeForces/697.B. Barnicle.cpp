#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
    string x;
    cin >> x;
    int l = x.size() - 1;
    int e = 0,length,i,j ;

    for( i = l, j = 0 ; x[i] != 'e' ; i--,j++ )
    {
        e += ( x[i] - '0' ) * pow(10,j);
    }
    length = i - 1;
    cout << x[0];

    int k , dd = 0;
    for( k = 2 ; k < e + 2 ; k++ )
    {
        if( k <= length ) cout << x[k];
        else cout << "0"; //cout << "  cout " <<++dd << endl;
    }

    if( k <= length )
    {
        if( k == length && x[k] == '0' ) return 0;

        cout << ".";
        while( k <= length )
        {
            cout << x[k];
            k++;
        }
    }
    cout << endl;
    return 0;
}
