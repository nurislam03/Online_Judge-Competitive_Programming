#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[1010],n,k,length = 0;
    cin>>n;
    for( int i = 0 ; i < n ; i++ )
    {
        cin>>k;
        arr[k] = 1;
    }
    for( int i = 0 ; i < 1010 ; i++ )
    {
        if( arr[i] == 1 )
        {
            length++;
            if( length == 3 ) break;
        }
        else length = 0;
    }
    if( length == 3 ) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

