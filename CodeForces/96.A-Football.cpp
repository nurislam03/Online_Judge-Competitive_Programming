#include<bits/stdc++.h>
using namespace std;
string a;

int Check()
{
    int flag0 = 0,flag1 = 0;
    for( int i = 0; i < a.size() ; i++ )
    {
        if( a[i] == '0' )
        {
            flag0++; flag1 = 0;
            if( flag0 == 7 ) return 1;
        }
        else if( a[i] == '1' )
        {
            flag1++; flag0 = 0;
            if( flag1 == 7 ) return 1;
        }
    }
    return -1;
}

int main()
{
    cin>>a;
    int res = Check();
    if( res == 1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
