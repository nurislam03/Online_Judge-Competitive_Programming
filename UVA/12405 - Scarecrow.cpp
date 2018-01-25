#include <iostream>
using namespace std;

int main()
{
    int tt,n;
    cin >> tt;
    string x;

    for( int t = 1 ; t <= tt ; t++ )
    {
        cin >> n;
        cin >> x;
        int Count = 0,res = 0;
        for( int i = 0 ; i < x.size() ; i++ )
        {
            if( x[i] == '.' ) Count++;
            else if( x[i] == '#' && Count != 0 )
            {

                if( Count <= 3 )
                {
                    res ++;
                    if( Count == 1 ) i++;
                }
                else
                {
                    res += Count / 3;
                    if( Count % 3 != 0 )
                    {
                        res++;
                        if( Count % 3 == 1 ) i++;
                    }
                }
                Count = 0;
            }
        }
        if( Count != 0 )
        {
            if( Count <= 3 ) res++;
            else
            {
                res += Count / 3;
                if( Count % 3 != 0 ) res++;
            }
        }

        cout << "Case " << t << ": " << res << endl;
    }
    return 0;
}
