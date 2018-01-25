
#include<bits/stdc++.h>
using namespace std;
string a;

int main()
{
    int n,Count = 0;
    char color;
    cin>>n;
    cin>>a;
    color = a[0]; Count++;
    for( int i = 1 ; i < n ; i++ )
    {
        if( a[i] != color )
        {
            Count++; color = a[i];
        }
    }
    cout<<Count<<endl;
    return 0;
}

