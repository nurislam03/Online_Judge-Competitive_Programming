#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,q,amount;
    string a;
    cin >> t;
    for( int i = 1 ; i <= t ; i++ )
    {
        int res = 0;
        cin >> q;
        cout<<"Case "<<i<<":"<<endl;
        for( int j = 0 ; j < q ; j++ )
        {
            cin >> a;
            if( a[0] == 'd' )
            {
                cin >> amount;
                res = res + amount;
            }
            else
            cout<<res<<endl;
        }
    }
    return 0;
}
