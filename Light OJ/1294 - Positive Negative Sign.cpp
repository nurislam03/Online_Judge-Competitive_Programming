#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long tt,n,m,res;
    cin >> tt;
    for( int t = 1 ; t <= tt ; t++ )
    {
        cin >> n >> m;

        res = (n/2)*m;
        cout<<"Case "<<t<<": "<<res<<endl;
    }
    return 0;
}
