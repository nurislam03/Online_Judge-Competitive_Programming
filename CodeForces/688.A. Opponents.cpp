#include <iostream>
using namespace std;

int main()
{
    int n,d,Count = 0,flag = 0,res = 0;
    string x;
    cin >> n >> d;

    for( int i = 1 ; i <= d ; i++ )
    {
        cin >> x;
        for( int i = 0 ; i < n ; i++ )
        {
            if( x[i] == '0' )
            {
                Count++;
                flag++;
                break;
            }
        }

        if( Count >= res ) res = Count;
        if( flag == 0 ) Count = 0;
        flag = 0;
    }

    cout << res << endl;
    return 0;
}
