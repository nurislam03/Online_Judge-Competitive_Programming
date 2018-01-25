
#include<bits/stdc++.h>
using namespace std;
int a[100005],b[100000];

int main()
{
    long long n,m,c,Money,Count = 0,k = 1;
    cin>>n>>m;
    Money = m;
    for( int i = 1 ; i <= n ; i++ )
    {
        cin >> c;
        a[c] = 1;
    }

    for( int i = 1 ; i <= m ; i ++ )
    {
        if( a[i] != 1 )
        {
            if( Money >= i )
            {
                Money = Money - i;
                b[k] = i;
                k++;
                Count++;
            }
            else if( Money < i ) break;
        }
    }

    cout<<Count<<endl;
    for( int i = 1 ; i <= Count ; i++ )
    {
        cout<<b[i]<<" ";
    }
    return 0;
}
