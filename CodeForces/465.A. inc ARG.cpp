#include <iostream>
using namespace std;

int main()
{
    int n,x,previous = 1,res = 0;
    string s;

    cin >> n;
    cin >> s;


    for( int i = 0 ; i < n ; i++ )
    {
        x = s[i] - '0';
        if( i == 0 && x == 0 )
        {
            res = 1;
            break;
        }
        else
        {
            if( x == 1 && previous == 1 )
            {
                res++;
                previous = x;
            }
            else
            {
                res++;
                break;
            }
        }
    }

    cout << res << endl;
    return 0;
}
