#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a=0,sum=0;
    cin>>n>>m;

    while( n )
    {
        n--;
        a++;
        if( a == m )
        {
            n++;
            a = 0;

        }
        sum++;
    }
    cout<<sum<<endl;
    return 0;
}

