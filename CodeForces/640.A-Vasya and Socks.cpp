#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i = 1;
    cin>>n>>m;

    while( i*m <= n )
    {
        n++; i++;
    }
    cout<<n<<endl;
}
