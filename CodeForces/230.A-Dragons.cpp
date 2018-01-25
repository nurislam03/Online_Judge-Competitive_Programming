#include<bits/stdc++.h>
using namespace std;

pair<int,int>arr[1010];
long long s,n;

int check()
{
    for( int i = 0 ; i < n ; i++ )
    {
        if( s <= arr[i].first) return -1;
        else s += arr[i].second;
    }
    return 1;
}

int main()
{
    cin>>s>>n;
    for( int i = 0 ; i < n ; i++ )
    {
        cin>>arr[i].first>>arr[i].second;
    }
    sort( arr, arr+n );

    int flag = check();
    if( flag == -1 ) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

    return 0;
}
