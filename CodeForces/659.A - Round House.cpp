#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,k,l;
    cin >> n >> a >> b;

    if( b == 0 )
    {
        cout<<a<<endl;
        return 0;
    }

    else if( b > 0 )
    {
        k = a;
        while( b )
        {

        if( k == n ) k = 0;
        k++;
        b--;
        }
    }
    else if( b < 0 )
    {
        b = fabs(b);
        k = a;
        while( b )
        {
            if( k == 0 ) k = n;
            k--;
            b--;
        }
    }
    if( k == 0 ) k = n;
    cout<<k<<endl;
    return 0;
}
